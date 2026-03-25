#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define SRF_HIERARCHY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x184682A0)
#define SRF_HIERARCHY_GET_OFFSET UNITYSDK_OFFSET(0x184682D0)
#define SRF_HIERARCHY_RUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x184685F0)
#define SRF_HIERARCHY__CCTOR_OFFSET UNITYSDK_OFFSET(0x184686A0)
#define SRF_HIERARCHY__CTOR_OFFSET UNITYSDK_OFFSET(0x18468690)

namespace SRF
{
	inline static constexpr unsigned int Hierarchy_TypeDefinitionIndex = 27661;

	class Hierarchy : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>** StaticGet_Cache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(Hierarchy_TypeDefinitionIndex)->GetStaticField(0x1E5A0);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_Seperator()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Hierarchy_TypeDefinitionIndex)->GetStaticField(0x1E5A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HIERARCHY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRF_HIERARCHY__CCTOR_OFFSET))();
		}

		::UnityEngine::Transform* get_Item(::System::String* key)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRF_HIERARCHY_GET_ITEM_OFFSET))(this, key);
		}

		static ::UnityEngine::Transform* Get(::System::String* key)
		{
			return ((::UnityEngine::Transform*(*)(::System::String*))((::PBYTE)hIl2Cpp + SRF_HIERARCHY_GET_OFFSET))(key);
		}

		static ::System::Void RuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRF_HIERARCHY_RUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
