#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR___C_METHOD_1_43FCA439A5F82887_OFFSET UNITYSDK_OFFSET(0x12665190)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12665140)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12665180)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialBehavior___c_TypeDefinitionIndex = 42177;

	class RuntimeMaterialBehavior___c : public ::System::Object
	{
	public:
		static ::MoleMole::Timeline::RuntimeMaterialBehavior___c** StaticGet___9()
		{
			return (::MoleMole::Timeline::RuntimeMaterialBehavior___c**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialBehavior___c_TypeDefinitionIndex)->GetStaticField(0x308D0);
		}
		static ::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialBehavior___c_TypeDefinitionIndex)->GetStaticField(0x308D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_43FCA439A5F82887(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR___C_METHOD_1_43FCA439A5F82887_OFFSET))(this, a1);
		}
	};
}
