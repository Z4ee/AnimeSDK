#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_90C59FC7BAC7799C;
class Class_1_E09D58C9AD3DF860;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__ADDTIMERTASK_B__28_0_OFFSET UNITYSDK_OFFSET(0x11C86040)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C85FD0)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11C86010)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__INITTIMER_B__22_0_OFFSET UNITYSDK_OFFSET(0x11C86020)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneDungeonSubsystem___c_TypeDefinitionIndex = 39267;

	class BigSceneDungeonSubsystem___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_90C59FC7BAC7799C*, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::Class_1_90C59FC7BAC7799C*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BigSceneDungeonSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x31C20);
		}
		static ::MoleMole::BigSceneDungeonSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::BigSceneDungeonSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(BigSceneDungeonSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x31C28);
		}
		static ::System::Comparison_1<::Class_1_E09D58C9AD3DF860*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::Class_1_E09D58C9AD3DF860*>**)Il2CppClass::FromTypeDefinitionIndex(BigSceneDungeonSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x31C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitTimer_b__22_0(::Class_1_90C59FC7BAC7799C* v)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_90C59FC7BAC7799C*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__INITTIMER_B__22_0_OFFSET))(this, v);
		}

		::System::Int32 _AddTimerTask_b__28_0(::Class_1_E09D58C9AD3DF860* a, ::Class_1_E09D58C9AD3DF860* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_E09D58C9AD3DF860*, ::Class_1_E09D58C9AD3DF860*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__ADDTIMERTASK_B__28_0_OFFSET))(this, a, b);
		}
	};
}
