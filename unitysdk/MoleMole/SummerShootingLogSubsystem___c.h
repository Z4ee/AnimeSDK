#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;

#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1793DB50)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1793DB90)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__FINISHANDSENDREQUEST_B__16_0_OFFSET UNITYSDK_OFFSET(0x1793DBC0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__FINISHANDSENDREQUEST_B__16_1_OFFSET UNITYSDK_OFFSET(0x1793DBD0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__STARTBEATMAP_B__8_0_OFFSET UNITYSDK_OFFSET(0x1793DBA0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__STARTBEATMAP_B__8_1_OFFSET UNITYSDK_OFFSET(0x1793DBB0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerShootingLogSubsystem___c_TypeDefinitionIndex = 81727;

	class SummerShootingLogSubsystem___c : public ::System::Object
	{
	public:
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__16_1()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(SummerShootingLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x42830);
		}
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__8_0()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(SummerShootingLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x42838);
		}
		static ::MoleMole::SummerShootingLogSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::SummerShootingLogSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(SummerShootingLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x42840);
		}
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__16_0()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(SummerShootingLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x42848);
		}
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__8_1()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(SummerShootingLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x42850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _StartBeatmap_b__8_0(::Class_0_16E4307DCC419505_36* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__STARTBEATMAP_B__8_0_OFFSET))(this, msg);
		}

		::System::Void _StartBeatmap_b__8_1(::Class_0_16E4307DCC419505_36* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__STARTBEATMAP_B__8_1_OFFSET))(this, error);
		}

		::System::Void _FinishAndSendRequest_b__16_0(::Class_0_16E4307DCC419505_36* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__FINISHANDSENDREQUEST_B__16_0_OFFSET))(this, msg);
		}

		::System::Void _FinishAndSendRequest_b__16_1(::Class_0_16E4307DCC419505_36* error)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___C__FINISHANDSENDREQUEST_B__16_1_OFFSET))(this, error);
		}
	};
}
