#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_0333092B652ED806;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;
class Class_1_A6DA851A9BDCFFDD;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__ADDCOUNTUPTIMERTASK_B__66_1_OFFSET UNITYSDK_OFFSET(0x14840330)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__ADDCOUNTUPTIMERTASK_B__66_2_OFFSET UNITYSDK_OFFSET(0x148403B0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__ADDSTARTCDTIMERTASK_B__64_0_OFFSET UNITYSDK_OFFSET(0x148402B0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__ADDTIMERTASK_B__61_0_OFFSET UNITYSDK_OFFSET(0x14840230)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x148400F0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14840130)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__INITTIMER_B__48_0_OFFSET UNITYSDK_OFFSET(0x14840140)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__INITTIMER_B__48_1_OFFSET UNITYSDK_OFFSET(0x14840160)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__ZENKOVHIGHQUALITYEVENTDISPLAY_B__85_0_OFFSET UNITYSDK_OFFSET(0x14840430)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneDungeonSubsystem___c_TypeDefinitionIndex = 44143;

	class BigSceneDungeonSubsystem___c : public ::System::Object
	{
	public:
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__85_0()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(BigSceneDungeonSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x36270);
		}
		static ::System::Comparison_1<::Class_1_A6DA851A9BDCFFDD*>** StaticGet___9__66_1()
		{
			return (::System::Comparison_1<::Class_1_A6DA851A9BDCFFDD*>**)Il2CppClass::FromTypeDefinitionIndex(BigSceneDungeonSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x36278);
		}
		static ::System::Action** StaticGet___9__48_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BigSceneDungeonSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x36280);
		}
		static ::System::Comparison_1<::Class_1_A6DA851A9BDCFFDD*>** StaticGet___9__64_0()
		{
			return (::System::Comparison_1<::Class_1_A6DA851A9BDCFFDD*>**)Il2CppClass::FromTypeDefinitionIndex(BigSceneDungeonSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x36288);
		}
		static ::System::Comparison_1<::Class_1_A6DA851A9BDCFFDD*>** StaticGet___9__66_2()
		{
			return (::System::Comparison_1<::Class_1_A6DA851A9BDCFFDD*>**)Il2CppClass::FromTypeDefinitionIndex(BigSceneDungeonSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x36290);
		}
		static ::System::Func_2<::Class_1_0333092B652ED806*, ::System::Boolean>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::Class_1_0333092B652ED806*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BigSceneDungeonSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x36298);
		}
		static ::System::Comparison_1<::Class_1_A6DA851A9BDCFFDD*>** StaticGet___9__61_0()
		{
			return (::System::Comparison_1<::Class_1_A6DA851A9BDCFFDD*>**)Il2CppClass::FromTypeDefinitionIndex(BigSceneDungeonSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x362A0);
		}
		static ::MoleMole::BigSceneDungeonSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::BigSceneDungeonSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(BigSceneDungeonSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x362A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitTimer_b__48_0(::Class_1_0333092B652ED806* v)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0333092B652ED806*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__INITTIMER_B__48_0_OFFSET))(this, v);
		}

		::System::Void _InitTimer_b__48_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__INITTIMER_B__48_1_OFFSET))(this);
		}

		::System::Int32 _AddTimerTask_b__61_0(::Class_1_A6DA851A9BDCFFDD* a, ::Class_1_A6DA851A9BDCFFDD* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_A6DA851A9BDCFFDD*, ::Class_1_A6DA851A9BDCFFDD*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__ADDTIMERTASK_B__61_0_OFFSET))(this, a, b);
		}

		::System::Int32 _AddStartCDTimerTask_b__64_0(::Class_1_A6DA851A9BDCFFDD* a, ::Class_1_A6DA851A9BDCFFDD* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_A6DA851A9BDCFFDD*, ::Class_1_A6DA851A9BDCFFDD*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__ADDSTARTCDTIMERTASK_B__64_0_OFFSET))(this, a, b);
		}

		::System::Int32 _AddCountUpTimerTask_b__66_1(::Class_1_A6DA851A9BDCFFDD* a, ::Class_1_A6DA851A9BDCFFDD* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_A6DA851A9BDCFFDD*, ::Class_1_A6DA851A9BDCFFDD*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__ADDCOUNTUPTIMERTASK_B__66_1_OFFSET))(this, a, b);
		}

		::System::Int32 _AddCountUpTimerTask_b__66_2(::Class_1_A6DA851A9BDCFFDD* a, ::Class_1_A6DA851A9BDCFFDD* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_A6DA851A9BDCFFDD*, ::Class_1_A6DA851A9BDCFFDD*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__ADDCOUNTUPTIMERTASK_B__66_2_OFFSET))(this, a, b);
		}

		::System::Void _ZenkovHighQualityEventDisplay_b__85_0(::Class_0_16E4307DCC419505_36* _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__ZENKOVHIGHQUALITYEVENTDISPLAY_B__85_0_OFFSET))(this, _);
		}
	};
}
