#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Hash128.h"

namespace Coffee::UIParticleInternal { template <typename T> class ObjectRepository_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Material; }

#define COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_GET_1_OFFSET UNITYSDK_OFFSET(0x1D196030)
#define COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_GET_2_OFFSET UNITYSDK_OFFSET(0x1D1961D0)
#define COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D195EF0)
#define COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_GET_OFFSET UNITYSDK_OFFSET(0x1D195F80)
#define COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D190E10)
#define COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_VALID_OFFSET UNITYSDK_OFFSET(0x1D191660)
#define COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D196380)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int MaterialRepository_TypeDefinitionIndex = 42331;

	class MaterialRepository : public ::System::Object
	{
	public:
		static ::Coffee::UIParticleInternal::ObjectRepository_1<::UnityEngine::Material*>** StaticGet_s_Repository()
		{
			return (::Coffee::UIParticleInternal::ObjectRepository_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialRepository_TypeDefinitionIndex)->GetStaticField(0x1190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_count()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_GET_COUNT_OFFSET))();
		}

		static ::System::Boolean Valid(::UnityEngine::Hash128 a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Hash128, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_VALID_OFFSET))(a1, a2);
		}

		static ::System::Void Get(::UnityEngine::Hash128 a1, ::UnityEngine::Material*& a2, ::System::Func_1<::UnityEngine::Material*>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Hash128, ::UnityEngine::Material*&, ::System::Func_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_GET_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Get_1(::UnityEngine::Hash128 a1, ::UnityEngine::Material*& a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Hash128, ::UnityEngine::Material*&, ::System::String*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_GET_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Get_2(::UnityEngine::Hash128 a1, ::UnityEngine::Material*& a2, ::System::String* a3, ::Il2CppArray<::System::String*>* a4)
		{
			return ((::System::Void(*)(::UnityEngine::Hash128, ::UnityEngine::Material*&, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_GET_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Release(::UnityEngine::Material*& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY_RELEASE_OFFSET))(a1);
		}
	};
}
