#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_90C59FC7BAC7799C;
class Class_1_E09D58C9AD3DF860_1;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__ADDTIMERTASK_B__30_0_OFFSET UNITYSDK_OFFSET(0x134766E0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13476670)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x134766B0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__INITTIMER_B__24_0_OFFSET UNITYSDK_OFFSET(0x134766C0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneDungeonSubsystem___c_TypeDefinitionIndex = 70677;

	class BigSceneDungeonSubsystem___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_90C59FC7BAC7799C*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::Class_1_90C59FC7BAC7799C*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BigSceneDungeonSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x33BB0);
		}
		static ::MoleMole::BigSceneDungeonSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::BigSceneDungeonSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(BigSceneDungeonSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x33BB8);
		}
		static ::System::Comparison_1<::Class_1_E09D58C9AD3DF860_1*>** StaticGet___9__30_0()
		{
			return (::System::Comparison_1<::Class_1_E09D58C9AD3DF860_1*>**)Il2CppClass::FromTypeDefinitionIndex(BigSceneDungeonSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x33BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitTimer_b__24_0(::Class_1_90C59FC7BAC7799C* v)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_90C59FC7BAC7799C*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__INITTIMER_B__24_0_OFFSET))(this, v);
		}

		::System::Int32 _AddTimerTask_b__30_0(::Class_1_E09D58C9AD3DF860_1* a, ::Class_1_E09D58C9AD3DF860_1* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_E09D58C9AD3DF860_1*, ::Class_1_E09D58C9AD3DF860_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__ADDTIMERTASK_B__30_0_OFFSET))(this, a, b);
		}
	};
}
