#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8111D94208AF9330;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE9470F0)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE947130)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__SETPLAYERMULTIPLAYSTATE_B__28_0_OFFSET UNITYSDK_OFFSET(0xE947140)
#define MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__SETPLAYERMULTIPLAYSTATE_B__28_1_OFFSET UNITYSDK_OFFSET(0xE947160)

namespace MoleMole
{
	inline static constexpr unsigned int BangbooGameSubsystem___c_TypeDefinitionIndex = 75832;

	class BangbooGameSubsystem___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_8111D94208AF9330*, ::System::Boolean>** StaticGet___9__28_1()
		{
			return (::System::Func_2<::Class_1_8111D94208AF9330*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BangbooGameSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3E5F0);
		}
		static ::System::Func_2<::Class_1_8111D94208AF9330*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::Class_1_8111D94208AF9330*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BangbooGameSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3E5F8);
		}
		static ::MoleMole::BangbooGameSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::BangbooGameSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(BangbooGameSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3E600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetPlayerMultiPlayState_b__28_0(::Class_1_8111D94208AF9330* val)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_8111D94208AF9330*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__SETPLAYERMULTIPLAYSTATE_B__28_0_OFFSET))(this, val);
		}

		::System::Boolean _SetPlayerMultiPlayState_b__28_1(::Class_1_8111D94208AF9330* val)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_8111D94208AF9330*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOGAMESUBSYSTEM___C__SETPLAYERMULTIPLAYSTATE_B__28_1_OFFSET))(this, val);
		}
	};
}
