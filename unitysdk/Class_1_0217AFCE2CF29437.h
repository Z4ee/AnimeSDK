#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0217AFCE2CF29437_Struct_2_A5B9ECBADD91D66C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_3B99BD6E50089267;
class Class_2_87F676A6DEA77C54;
class Class_2_EF10ADA6B197DAB5;
class Class_3_0B01610F9F860761;
namespace MoleMole::ChessStateMachine { class ChessStateMachineConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0217AFCE2CF29437_METHOD_1_0E2CF5C03F29B632_OFFSET UNITYSDK_OFFSET(0x194B03A0)
#define CLASS_1_0217AFCE2CF29437_METHOD_1_4E2CB03B71119CB3_OFFSET UNITYSDK_OFFSET(0x194B0A80)
#define CLASS_1_0217AFCE2CF29437_METHOD_1_64B952FBE8E560B9_OFFSET UNITYSDK_OFFSET(0x194AFC70)
#define CLASS_1_0217AFCE2CF29437_METHOD_1_918D047ACA2C14CD_OFFSET UNITYSDK_OFFSET(0x194AFFB0)
#define CLASS_1_0217AFCE2CF29437_METHOD_1_C550D8BCDAF3A581_OFFSET UNITYSDK_OFFSET(0x194B0E10)
#define CLASS_1_0217AFCE2CF29437_SPAWN_OFFSET UNITYSDK_OFFSET(0x194AFC10)
#define CLASS_1_0217AFCE2CF29437__CCTOR_OFFSET UNITYSDK_OFFSET(0x194AFE90)
#define CLASS_1_0217AFCE2CF29437__CTOR_OFFSET UNITYSDK_OFFSET(0x194AFE80)

inline static constexpr unsigned int Class_1_0217AFCE2CF29437_TypeDefinitionIndex = 76467;

class Class_1_0217AFCE2CF29437 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_0B01610F9F860761*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_0B01610F9F860761*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0217AFCE2CF29437_TypeDefinitionIndex)->GetStaticField(0x4F220);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_87F676A6DEA77C54*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_87F676A6DEA77C54*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0217AFCE2CF29437_TypeDefinitionIndex)->GetStaticField(0x4F228);
	}

	::System::Void _ctor(::MoleMole::ChessStateMachine::ChessStateMachineConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ChessStateMachine::ChessStateMachineConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0217AFCE2CF29437__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0217AFCE2CF29437__CCTOR_OFFSET))();
	}

	::Class_2_EF10ADA6B197DAB5* Spawn(::Class_2_EF10ADA6B197DAB5* a1, ::MoleMole::ChessStateMachine::ChessStateMachineConfig* a2)
	{
		return ((::Class_2_EF10ADA6B197DAB5*(*)(::PVOID, ::Class_2_EF10ADA6B197DAB5*, ::MoleMole::ChessStateMachine::ChessStateMachineConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0217AFCE2CF29437_SPAWN_OFFSET))(this, a1, a2);
	}

	::Class_2_EF10ADA6B197DAB5* Method_1_64B952FBE8E560B9(::MoleMole::ChessStateMachine::ChessStateMachineConfig* a1, ::Class_2_EF10ADA6B197DAB5* a2)
	{
		return ((::Class_2_EF10ADA6B197DAB5*(*)(::PVOID, ::MoleMole::ChessStateMachine::ChessStateMachineConfig*, ::Class_2_EF10ADA6B197DAB5*))((::PBYTE)hIl2Cpp + CLASS_1_0217AFCE2CF29437_METHOD_1_64B952FBE8E560B9_OFFSET))(this, a1, a2);
	}

	static ::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_0B01610F9F860761*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_87F676A6DEA77C54*>*> Method_1_0E2CF5C03F29B632(::MoleMole::ChessStateMachine::ChessStateMachineConfig* a1, ::Class_2_EF10ADA6B197DAB5* a2)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_0B01610F9F860761*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_87F676A6DEA77C54*>*>(*)(::MoleMole::ChessStateMachine::ChessStateMachineConfig*, ::Class_2_EF10ADA6B197DAB5*))((::PBYTE)hIl2Cpp + CLASS_1_0217AFCE2CF29437_METHOD_1_0E2CF5C03F29B632_OFFSET))(a1, a2);
	}

	::System::Void Method_1_918D047ACA2C14CD(::Class_2_EF10ADA6B197DAB5* a1, ::MoleMole::ChessStateMachine::ChessStateMachineConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_EF10ADA6B197DAB5*, ::MoleMole::ChessStateMachine::ChessStateMachineConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0217AFCE2CF29437_METHOD_1_918D047ACA2C14CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C550D8BCDAF3A581(::Class_2_3B99BD6E50089267* a1, ::Class_2_3B99BD6E50089267* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_0B01610F9F860761*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_87F676A6DEA77C54*>* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3B99BD6E50089267*, ::Class_2_3B99BD6E50089267*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_0B01610F9F860761*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_87F676A6DEA77C54*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_0217AFCE2CF29437_METHOD_1_C550D8BCDAF3A581_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_4E2CB03B71119CB3(::MoleMole::ChessStateMachine::ChessStateMachineConfig* a1, ::Class_2_EF10ADA6B197DAB5* a2, ::Class_1_0217AFCE2CF29437_Struct_2_A5B9ECBADD91D66C& a3)
	{
		return ((::System::Void(*)(::MoleMole::ChessStateMachine::ChessStateMachineConfig*, ::Class_2_EF10ADA6B197DAB5*, ::Class_1_0217AFCE2CF29437_Struct_2_A5B9ECBADD91D66C&))((::PBYTE)hIl2Cpp + CLASS_1_0217AFCE2CF29437_METHOD_1_4E2CB03B71119CB3_OFFSET))(a1, a2, a3);
	}
};
