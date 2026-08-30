#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinPrepareFightTalker.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_61FB8D394B353477_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x188B0820)
#define CLASS_1_61FB8D394B353477_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x188B0240)
#define CLASS_1_61FB8D394B353477_EQUALS_OFFSET UNITYSDK_OFFSET(0x188B0780)
#define CLASS_1_61FB8D394B353477_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x188B04C0)
#define CLASS_1_61FB8D394B353477_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x188AFE30)
#define CLASS_1_61FB8D394B353477_GET_TALKER_OFFSET UNITYSDK_OFFSET(0x188AFE60)
#define CLASS_1_61FB8D394B353477_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x188AFE80)
#define CLASS_1_61FB8D394B353477_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x188B0220)
#define CLASS_1_61FB8D394B353477_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x188B01F0)
#define CLASS_1_61FB8D394B353477_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x188B0060)
#define CLASS_1_61FB8D394B353477_SET_TALKER_OFFSET UNITYSDK_OFFSET(0x188AFE70)
#define CLASS_1_61FB8D394B353477_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x188AFE90)
#define CLASS_1_61FB8D394B353477_TOSTRING_OFFSET UNITYSDK_OFFSET(0x188AFEA0)
#define CLASS_1_61FB8D394B353477__CLONE___OFFSET UNITYSDK_OFFSET(0x188B07B0)
#define CLASS_1_61FB8D394B353477__CTOR_1_OFFSET UNITYSDK_OFFSET(0x188B07F0)
#define CLASS_1_61FB8D394B353477__CTOR_OFFSET UNITYSDK_OFFSET(0x188AFE20)

inline static constexpr unsigned int Class_1_61FB8D394B353477_TypeDefinitionIndex = 79428;

class Class_1_61FB8D394B353477 : public ::System::Object
{
public:
	::RPG::Client::TextID _Text_k__BackingField; // 0x10
	::RPG::GameCore::FateRinPrepareFightTalker _Talker_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::FateRinPrepareFightTalker a1, ::RPG::Client::TextID a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinPrepareFightTalker, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_61FB8D394B353477__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_1_61FB8D394B353477* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_61FB8D394B353477*))((::PBYTE)hIl2Cpp + CLASS_1_61FB8D394B353477__CTOR_1_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61FB8D394B353477_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::RPG::GameCore::FateRinPrepareFightTalker get_Talker()
	{
		return ((::RPG::GameCore::FateRinPrepareFightTalker(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61FB8D394B353477_GET_TALKER_OFFSET))(this);
	}

	::System::Void set_Talker(::RPG::GameCore::FateRinPrepareFightTalker a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinPrepareFightTalker))((::PBYTE)hIl2Cpp + CLASS_1_61FB8D394B353477_SET_TALKER_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Text()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61FB8D394B353477_GET_TEXT_OFFSET))(this);
	}

	::System::Void set_Text(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_61FB8D394B353477_SET_TEXT_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61FB8D394B353477_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_61FB8D394B353477_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_61FB8D394B353477* a1, ::Class_1_61FB8D394B353477* a2)
	{
		return ((::System::Boolean(*)(::Class_1_61FB8D394B353477*, ::Class_1_61FB8D394B353477*))((::PBYTE)hIl2Cpp + CLASS_1_61FB8D394B353477_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_61FB8D394B353477* a1, ::Class_1_61FB8D394B353477* a2)
	{
		return ((::System::Boolean(*)(::Class_1_61FB8D394B353477*, ::Class_1_61FB8D394B353477*))((::PBYTE)hIl2Cpp + CLASS_1_61FB8D394B353477_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61FB8D394B353477_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_61FB8D394B353477_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_61FB8D394B353477* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_61FB8D394B353477*))((::PBYTE)hIl2Cpp + CLASS_1_61FB8D394B353477_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_61FB8D394B353477* _Clone__()
	{
		return ((::Class_1_61FB8D394B353477*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61FB8D394B353477__CLONE___OFFSET))(this);
	}

	::System::Void Deconstruct(::RPG::GameCore::FateRinPrepareFightTalker& a1, ::RPG::Client::TextID& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinPrepareFightTalker&, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + CLASS_1_61FB8D394B353477_DECONSTRUCT_OFFSET))(this, a1, a2);
	}
};
