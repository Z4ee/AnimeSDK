#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Material; }

#define COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1467D130)
#define COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1467D170)
#define COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY___C__GET_B__5_0_OFFSET UNITYSDK_OFFSET(0x1467D180)
#define COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY___C__GET_B__6_0_OFFSET UNITYSDK_OFFSET(0x1467D1D0)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int MaterialRepository___c_TypeDefinitionIndex = 41517;

	class MaterialRepository___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::ValueTuple_2<::System::String*, ::Il2CppArray<::System::String*>*>, ::UnityEngine::Material*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::String*, ::Il2CppArray<::System::String*>*>, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialRepository___c_TypeDefinitionIndex)->GetStaticField(0x1440);
		}
		static ::Coffee::UIParticleInternal::MaterialRepository___c** StaticGet___9()
		{
			return (::Coffee::UIParticleInternal::MaterialRepository___c**)Il2CppClass::FromTypeDefinitionIndex(MaterialRepository___c_TypeDefinitionIndex)->GetStaticField(0x1448);
		}
		static ::System::Func_2<::System::String*, ::UnityEngine::Material*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialRepository___c_TypeDefinitionIndex)->GetStaticField(0x1450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* _Get_b__5_0(::System::String* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY___C__GET_B__5_0_OFFSET))(this, a1);
		}

		::UnityEngine::Material* _Get_b__6_0(::System::ValueTuple_2<::System::String*, ::Il2CppArray<::System::String*>*> a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::ValueTuple_2<::System::String*, ::Il2CppArray<::System::String*>*>))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MATERIALREPOSITORY___C__GET_B__6_0_OFFSET))(this, a1);
		}
	};
}
