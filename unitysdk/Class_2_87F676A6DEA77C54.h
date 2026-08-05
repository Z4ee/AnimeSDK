#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29EEA995F8FD7C71.h"

class Class_3_0B01610F9F860761;
namespace MoleMole::ChessStateMachine { class ConditionGroup; }
namespace MoleMole::ChessStateMachine { class ConnectionSetting; }
namespace MoleMole::ChessStateMachine { class TransitionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_87F676A6DEA77C54_METHOD_2_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x13E69CC0)
#define CLASS_2_87F676A6DEA77C54_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x13E69AF0)
#define CLASS_2_87F676A6DEA77C54_METHOD_2_6BC2D29C24A7D2ED_OFFSET UNITYSDK_OFFSET(0x13E69CA0)
#define CLASS_2_87F676A6DEA77C54_METHOD_2_90E8F30544D721FF_OFFSET UNITYSDK_OFFSET(0x13E69B10)
#define CLASS_2_87F676A6DEA77C54_METHOD_2_B57F84D91EA5B688_OFFSET UNITYSDK_OFFSET(0x13E69B30)
#define CLASS_2_87F676A6DEA77C54__CTOR_OFFSET UNITYSDK_OFFSET(0x13E69AA0)

inline static constexpr unsigned int Class_2_87F676A6DEA77C54_TypeDefinitionIndex = 68661;

class Class_2_87F676A6DEA77C54 : public ::Class_1_29EEA995F8FD7C71
{
public:
	::MoleMole::ChessStateMachine::TransitionConfig* Field_2_1; // 0x48
	::Class_3_0B01610F9F860761* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87F676A6DEA77C54__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87F676A6DEA77C54_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ConditionGroup*>* Method_2_90E8F30544D721FF()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ConditionGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87F676A6DEA77C54_METHOD_2_90E8F30544D721FF_OFFSET))(this);
	}

	::Class_2_87F676A6DEA77C54* Method_2_B57F84D91EA5B688()
	{
		return ((::Class_2_87F676A6DEA77C54*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87F676A6DEA77C54_METHOD_2_B57F84D91EA5B688_OFFSET))(this);
	}

	::MoleMole::ChessStateMachine::ConnectionSetting* Method_2_6BC2D29C24A7D2ED()
	{
		return ((::MoleMole::ChessStateMachine::ConnectionSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87F676A6DEA77C54_METHOD_2_6BC2D29C24A7D2ED_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87F676A6DEA77C54_METHOD_2_128774387667156B_1_OFFSET))(this);
	}
};
