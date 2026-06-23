#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Singleton_1.h"

class Class_1_EEEABF1B21498A91;
class Class_2_4E3F5BE8BDF41F9D;
class Class_3_3E93929C2887EBC6;
namespace Foundation { template <typename T> class ObjectPoolOfReusable_1; }
namespace MoleMole::ChessStateMachine { class StateMachineBaseAction; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_26585A5555A931CA_METHOD_2_2A83FA3713ACC6E3_OFFSET UNITYSDK_OFFSET(0x11AF0E70)
#define CLASS_2_26585A5555A931CA_METHOD_2_7298813BECF6F7D3_OFFSET UNITYSDK_OFFSET(0x11AF0C20)
#define CLASS_2_26585A5555A931CA_METHOD_2_D7CFF8BEF30FC257_OFFSET UNITYSDK_OFFSET(0x11AF0860)
#define CLASS_2_26585A5555A931CA__CTOR_OFFSET UNITYSDK_OFFSET(0x11AF07B0)

inline static constexpr unsigned int Class_2_26585A5555A931CA_TypeDefinitionIndex = 47325;

class Class_2_26585A5555A931CA : public ::Foundation::Singleton_1<::Class_2_26585A5555A931CA*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::Foundation::ObjectPoolOfReusable_1<::MoleMole::ChessStateMachine::StateMachineBaseAction*>*>*>* Field_2_1; // 0x10
	::Class_1_EEEABF1B21498A91* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26585A5555A931CA__CTOR_OFFSET))(this);
	}

	::MoleMole::ChessStateMachine::StateMachineBaseAction* Method_2_D7CFF8BEF30FC257(::Class_2_4E3F5BE8BDF41F9D* a1, ::Class_3_3E93929C2887EBC6* a2, ::System::Int32 a3)
	{
		return ((::MoleMole::ChessStateMachine::StateMachineBaseAction*(*)(::PVOID, ::Class_2_4E3F5BE8BDF41F9D*, ::Class_3_3E93929C2887EBC6*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_26585A5555A931CA_METHOD_2_D7CFF8BEF30FC257_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7298813BECF6F7D3(::Class_3_3E93929C2887EBC6* a1, ::System::Int32 a2, ::MoleMole::ChessStateMachine::StateMachineBaseAction* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3E93929C2887EBC6*, ::System::Int32, ::MoleMole::ChessStateMachine::StateMachineBaseAction*))((::PBYTE)hIl2Cpp + CLASS_2_26585A5555A931CA_METHOD_2_7298813BECF6F7D3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2A83FA3713ACC6E3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26585A5555A931CA_METHOD_2_2A83FA3713ACC6E3_OFFSET))(this);
	}
};
