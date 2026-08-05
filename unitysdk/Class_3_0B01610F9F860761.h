#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3B99BD6E50089267.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateNodeType.h"

class Class_2_87F676A6DEA77C54;
namespace MoleMole::ChessStateMachine { class StateMachineBaseAction; }
namespace MoleMole::ChessStateMachine { class StateNodeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_0B01610F9F860761_METHOD_3_01FEFE3A064F0364_OFFSET UNITYSDK_OFFSET(0x14626AC0)
#define CLASS_3_0B01610F9F860761_METHOD_3_828791371FF7B03E_OFFSET UNITYSDK_OFFSET(0x14626AA0)
#define CLASS_3_0B01610F9F860761_METHOD_3_97859DFDB28A1CFB_OFFSET UNITYSDK_OFFSET(0x14626B90)
#define CLASS_3_0B01610F9F860761_METHOD_3_A5405B9927FE91FF_1_OFFSET UNITYSDK_OFFSET(0x14626B20)
#define CLASS_3_0B01610F9F860761_METHOD_3_A5405B9927FE91FF_OFFSET UNITYSDK_OFFSET(0x14626A80)
#define CLASS_3_0B01610F9F860761_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14626B40)
#define CLASS_3_0B01610F9F860761_METHOD_3_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x14626AE0)
#define CLASS_3_0B01610F9F860761_METHOD_3_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x14626D00)
#define CLASS_3_0B01610F9F860761_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x14626B00)
#define CLASS_3_0B01610F9F860761__CTOR_OFFSET UNITYSDK_OFFSET(0x14626940)

inline static constexpr unsigned int Class_3_0B01610F9F860761_TypeDefinitionIndex = 69707;

class Class_3_0B01610F9F860761 : public ::Class_2_3B99BD6E50089267
{
public:
	::System::Collections::Generic::List_1<::Class_2_87F676A6DEA77C54*>* Field_3_7; // 0x58
	::System::Collections::Generic::List_1<::Class_2_87F676A6DEA77C54*>* Field_3_0; // 0x60
	::MoleMole::ChessStateMachine::StateNodeConfig* stateNodeConfig; // 0x68
	::System::Int32 Field_3_6; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761__CTOR_OFFSET))(this);
	}

	::MoleMole::ChessStateMachine::StateNodeType Method_3_A5405B9927FE91FF()
	{
		return ((::MoleMole::ChessStateMachine::StateNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761_METHOD_3_A5405B9927FE91FF_OFFSET))(this);
	}

	::System::Boolean Method_3_828791371FF7B03E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761_METHOD_3_828791371FF7B03E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::StateMachineBaseAction*>* Method_3_01FEFE3A064F0364()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::StateMachineBaseAction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761_METHOD_3_01FEFE3A064F0364_OFFSET))(this);
	}

	::System::Boolean Method_3_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761_METHOD_3_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::Boolean Method_3_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761_METHOD_3_F0E307B84478A272_OFFSET))(this);
	}

	::MoleMole::ChessStateMachine::StateNodeType Method_3_A5405B9927FE91FF_1()
	{
		return ((::MoleMole::ChessStateMachine::StateNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761_METHOD_3_A5405B9927FE91FF_1_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_3_0B01610F9F860761* Method_3_97859DFDB28A1CFB()
	{
		return ((::Class_3_0B01610F9F860761*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761_METHOD_3_97859DFDB28A1CFB_OFFSET))(this);
	}

	::System::Boolean Method_3_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B01610F9F860761_METHOD_3_F0E307B84478A272_1_OFFSET))(this);
	}
};
