#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E2565D9DA1E3A032.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_29EEA995F8FD7C71;
class Class_2_FF2D9AA065B853D7;
namespace MoleMole::ChessStateMachine { class StateMachineBaseAction; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0D6C43FE29D7C5E4_METHOD_2_63A39F4AF9E15E8D_OFFSET UNITYSDK_OFFSET(0x137454C0)
#define CLASS_2_0D6C43FE29D7C5E4__CTOR_OFFSET UNITYSDK_OFFSET(0x13745330)

inline static constexpr unsigned int Class_2_0D6C43FE29D7C5E4_TypeDefinitionIndex = 81460;

class Class_2_0D6C43FE29D7C5E4 : public ::Class_1_E2565D9DA1E3A032
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::Class_2_FF2D9AA065B853D7*>>* Field_2_2; // 0x28
	::System::Tuple_2<::System::Int32, ::Class_2_0D6C43FE29D7C5E4*>* Field_2_4; // 0x30
	::System::Tuple_2<::System::Int32, ::Class_2_0D6C43FE29D7C5E4*>* Field_2_6; // 0x38
	::System::Tuple_2<::System::Int32, ::Class_2_0D6C43FE29D7C5E4*>* Field_2_5; // 0x40
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::Class_2_0D6C43FE29D7C5E4*>>* Field_2_3; // 0x48
	::System::Tuple_2<::System::Int32, ::System::Int32>* Field_2_7; // 0x50
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::Class_2_FF2D9AA065B853D7*>>* Field_2_0; // 0x58
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::Class_2_FF2D9AA065B853D7*>>* Field_2_1; // 0x60

	::System::Void _ctor(::Class_1_29EEA995F8FD7C71* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_29EEA995F8FD7C71*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0D6C43FE29D7C5E4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::StateMachineBaseAction*>* Method_2_63A39F4AF9E15E8D()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::StateMachineBaseAction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D6C43FE29D7C5E4_METHOD_2_63A39F4AF9E15E8D_OFFSET))(this);
	}
};
