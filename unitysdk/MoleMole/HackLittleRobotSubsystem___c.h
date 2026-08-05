#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_39;
class Class_1_6E20402DFA434D50;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B27AF0)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19B27B30)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___C__INITSTATEMACHINE_B__72_0_OFFSET UNITYSDK_OFFSET(0x19B27B40)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___C__INITSTATEMACHINE_B__72_1_OFFSET UNITYSDK_OFFSET(0x19B27B90)

namespace MoleMole
{
	inline static constexpr unsigned int HackLittleRobotSubsystem___c_TypeDefinitionIndex = 46255;

	class HackLittleRobotSubsystem___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::Class_1_43BD383C98B4C0C5_39*, ::Class_1_6E20402DFA434D50*, ::System::Boolean>** StaticGet___9__72_1()
		{
			return (::System::Func_3<::Class_1_43BD383C98B4C0C5_39*, ::Class_1_6E20402DFA434D50*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3CB60);
		}
		static ::MoleMole::HackLittleRobotSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::HackLittleRobotSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3CB68);
		}
		static ::System::Func_3<::Class_1_43BD383C98B4C0C5_39*, ::Class_1_6E20402DFA434D50*, ::System::Boolean>** StaticGet___9__72_0()
		{
			return (::System::Func_3<::Class_1_43BD383C98B4C0C5_39*, ::Class_1_6E20402DFA434D50*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3CB70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitStateMachine_b__72_0(::Class_1_43BD383C98B4C0C5_39* input, ::Class_1_6E20402DFA434D50* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_39*, ::Class_1_6E20402DFA434D50*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___C__INITSTATEMACHINE_B__72_0_OFFSET))(this, input, data);
		}

		::System::Boolean _InitStateMachine_b__72_1(::Class_1_43BD383C98B4C0C5_39* input, ::Class_1_6E20402DFA434D50* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_39*, ::Class_1_6E20402DFA434D50*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___C__INITSTATEMACHINE_B__72_1_OFFSET))(this, input, data);
		}
	};
}
