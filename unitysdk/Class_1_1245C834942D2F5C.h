#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityFinalityBattle::Level { class FinalityBattleMazeBuffItem; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_1245C834942D2F5C_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x16445070)
#define CLASS_1_1245C834942D2F5C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x16444DE0)
#define CLASS_1_1245C834942D2F5C_EQUALS_OFFSET UNITYSDK_OFFSET(0x16444CE0)
#define CLASS_1_1245C834942D2F5C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16444AE0)
#define CLASS_1_1245C834942D2F5C_GET_BUFFITEM_OFFSET UNITYSDK_OFFSET(0x16444630)
#define CLASS_1_1245C834942D2F5C_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x16444600)
#define CLASS_1_1245C834942D2F5C_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x16444A40)
#define CLASS_1_1245C834942D2F5C_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x164449A0)
#define CLASS_1_1245C834942D2F5C_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x16444890)
#define CLASS_1_1245C834942D2F5C_SET_BUFFITEM_OFFSET UNITYSDK_OFFSET(0x16444640)
#define CLASS_1_1245C834942D2F5C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16444650)
#define CLASS_1_1245C834942D2F5C__CLONE___OFFSET UNITYSDK_OFFSET(0x16444FF0)
#define CLASS_1_1245C834942D2F5C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16445050)
#define CLASS_1_1245C834942D2F5C__CTOR_OFFSET UNITYSDK_OFFSET(0x164445F0)

inline static constexpr unsigned int Class_1_1245C834942D2F5C_TypeDefinitionIndex = 82066;

class Class_1_1245C834942D2F5C : public ::System::Object
{
public:
	::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem* _BuffItem_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*))((::PBYTE)hIl2Cpp + CLASS_1_1245C834942D2F5C__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_1245C834942D2F5C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1245C834942D2F5C*))((::PBYTE)hIl2Cpp + CLASS_1_1245C834942D2F5C__CTOR_1_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1245C834942D2F5C_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem* get_BuffItem()
	{
		return ((::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1245C834942D2F5C_GET_BUFFITEM_OFFSET))(this);
	}

	::System::Void set_BuffItem(::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*))((::PBYTE)hIl2Cpp + CLASS_1_1245C834942D2F5C_SET_BUFFITEM_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1245C834942D2F5C_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_1245C834942D2F5C_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_1245C834942D2F5C* a1, ::Class_1_1245C834942D2F5C* a2)
	{
		return ((::System::Boolean(*)(::Class_1_1245C834942D2F5C*, ::Class_1_1245C834942D2F5C*))((::PBYTE)hIl2Cpp + CLASS_1_1245C834942D2F5C_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_1245C834942D2F5C* a1, ::Class_1_1245C834942D2F5C* a2)
	{
		return ((::System::Boolean(*)(::Class_1_1245C834942D2F5C*, ::Class_1_1245C834942D2F5C*))((::PBYTE)hIl2Cpp + CLASS_1_1245C834942D2F5C_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1245C834942D2F5C_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1245C834942D2F5C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1245C834942D2F5C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1245C834942D2F5C*))((::PBYTE)hIl2Cpp + CLASS_1_1245C834942D2F5C_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_1245C834942D2F5C* _Clone__()
	{
		return ((::Class_1_1245C834942D2F5C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1245C834942D2F5C__CLONE___OFFSET))(this);
	}

	::System::Void Deconstruct(::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*&))((::PBYTE)hIl2Cpp + CLASS_1_1245C834942D2F5C_DECONSTRUCT_OFFSET))(this, a1);
	}
};
