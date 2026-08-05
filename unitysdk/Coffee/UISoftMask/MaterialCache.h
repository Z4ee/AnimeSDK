#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Hash128.h"

namespace Coffee::UISoftMask { class MaterialEntry; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define COFFEE_UISOFTMASK_MATERIALCACHE_REGISTER_OFFSET UNITYSDK_OFFSET(0x1F8D97F0)
#define COFFEE_UISOFTMASK_MATERIALCACHE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1F8D9AC0)
#define COFFEE_UISOFTMASK_MATERIALCACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8D9FE0)

namespace Coffee::UISoftMask
{
	inline static constexpr unsigned int MaterialCache_TypeDefinitionIndex = 94432;

	class MaterialCache : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, ::Coffee::UISoftMask::MaterialEntry*>** StaticGet_s_MaterialMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, ::Coffee::UISoftMask::MaterialEntry*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialCache_TypeDefinitionIndex)->GetStaticField(0x52530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_MATERIALCACHE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Material* Register(::UnityEngine::Material* material, ::UnityEngine::Hash128 hash, ::System::Action_1<::UnityEngine::Material*>* onModify)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::UnityEngine::Hash128, ::System::Action_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_MATERIALCACHE_REGISTER_OFFSET))(material, hash, onModify);
		}

		static ::System::Void Unregister(::UnityEngine::Hash128 hash)
		{
			return ((::System::Void(*)(::UnityEngine::Hash128))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_MATERIALCACHE_UNREGISTER_OFFSET))(hash);
		}
	};
}
