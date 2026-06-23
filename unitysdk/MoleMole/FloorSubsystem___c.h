#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A17F88B27FA91D04.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace System { class String; }
template <typename T1, typename T2> class Class_1_459DF15A662DC811_Class_3_EC018E7EAD15B9B5;

#define MOLEMOLE_FLOORSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C97E10)
#define MOLEMOLE_FLOORSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C97E50)
#define MOLEMOLE_FLOORSUBSYSTEM___C__ONAWAKE_B__2_0_OFFSET UNITYSDK_OFFSET(0x16C97E60)

namespace MoleMole
{
	inline static constexpr unsigned int FloorSubsystem___c_TypeDefinitionIndex = 40436;

	class FloorSubsystem___c : public ::System::Object
	{
	public:
		static ::MoleMole::FloorSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::FloorSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(FloorSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x341A0);
		}
		static ::Class_1_459DF15A662DC811_Class_3_EC018E7EAD15B9B5<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::MoleMole::MonoTriggerEventDispatcher*>** StaticGet___9__2_0()
		{
			return (::Class_1_459DF15A662DC811_Class_3_EC018E7EAD15B9B5<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::MoleMole::MonoTriggerEventDispatcher*>**)Il2CppClass::FromTypeDefinitionIndex(FloorSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x341A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnAwake_b__2_0(::MoleMole::MonoTriggerEventDispatcher* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoTriggerEventDispatcher*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM___C__ONAWAKE_B__2_0_OFFSET))(this, value);
		}
	};
}
