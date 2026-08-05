#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A17F88B27FA91D04.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace System { class String; }
template <typename T1, typename T2> class Class_1_D8480A60B429B44D_Class_3_B6136C2F127116DF_22;

#define MOLEMOLE_FLOORSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A7AE00)
#define MOLEMOLE_FLOORSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7AE40)
#define MOLEMOLE_FLOORSUBSYSTEM___C__ONAWAKE_B__1_0_OFFSET UNITYSDK_OFFSET(0x13A7AE50)

namespace MoleMole
{
	inline static constexpr unsigned int FloorSubsystem___c_TypeDefinitionIndex = 79592;

	class FloorSubsystem___c : public ::System::Object
	{
	public:
		static ::Class_1_D8480A60B429B44D_Class_3_B6136C2F127116DF_22<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::MoleMole::MonoTriggerEventDispatcher*>** StaticGet___9__1_0()
		{
			return (::Class_1_D8480A60B429B44D_Class_3_B6136C2F127116DF_22<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::MoleMole::MonoTriggerEventDispatcher*>**)Il2CppClass::FromTypeDefinitionIndex(FloorSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x36650);
		}
		static ::MoleMole::FloorSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::FloorSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(FloorSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x36658);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnAwake_b__1_0(::MoleMole::MonoTriggerEventDispatcher* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoTriggerEventDispatcher*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM___C__ONAWAKE_B__1_0_OFFSET))(this, value);
		}
	};
}
