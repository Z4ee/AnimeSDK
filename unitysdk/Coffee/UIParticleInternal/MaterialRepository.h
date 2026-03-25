#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Hash128.h"

namespace Coffee::UIParticleInternal { template <typename T> class ObjectRepository_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Material; }

#define COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_GET_1_OFFSET UNITYSDK_OFFSET(0x119F0BE0)
#define COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_GET_2_OFFSET UNITYSDK_OFFSET(0x119F0D60)
#define COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x119F0A80)
#define COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_GET_OFFSET UNITYSDK_OFFSET(0x119F0B30)
#define COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_RELEASE_OFFSET UNITYSDK_OFFSET(0x119EBB50)
#define COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_VALID_OFFSET UNITYSDK_OFFSET(0x119EC380)
#define COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x119F0EF0)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int MaterialRepository_TypeDefinitionIndex = 34870;

	class MaterialRepository : public ::System::Object
	{
	public:
		static ::Coffee::UIParticleInternal::ObjectRepository_1<::UnityEngine::Material*>** StaticGet_s_Repository()
		{
			return (::Coffee::UIParticleInternal::ObjectRepository_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialRepository_TypeDefinitionIndex)->GetStaticField(0x1050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_count()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_GET_COUNT_OFFSET))();
		}

		static ::System::Boolean Valid(::UnityEngine::Hash128 hash, ::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::Hash128, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_VALID_OFFSET))(hash, material);
		}

		static ::System::Void Get(::UnityEngine::Hash128 hash, ::UnityEngine::Material*& material, ::System::Func_1<::UnityEngine::Material*>* onCreate)
		{
			return ((::System::Void(*)(::UnityEngine::Hash128, ::UnityEngine::Material*&, ::System::Func_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_GET_OFFSET))(hash, material, onCreate);
		}

		static ::System::Void Get_1(::UnityEngine::Hash128 hash, ::UnityEngine::Material*& material, ::System::String* shaderName)
		{
			return ((::System::Void(*)(::UnityEngine::Hash128, ::UnityEngine::Material*&, ::System::String*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_GET_1_OFFSET))(hash, material, shaderName);
		}

		static ::System::Void Get_2(::UnityEngine::Hash128 hash, ::UnityEngine::Material*& material, ::System::String* shaderName, ::Il2CppArray<::System::String*>* keywords)
		{
			return ((::System::Void(*)(::UnityEngine::Hash128, ::UnityEngine::Material*&, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_GET_2_OFFSET))(hash, material, shaderName, keywords);
		}

		static ::System::Void Release(::UnityEngine::Material*& material)
		{
			return ((::System::Void(*)(::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_RELEASE_OFFSET))(material);
		}
	};
}
