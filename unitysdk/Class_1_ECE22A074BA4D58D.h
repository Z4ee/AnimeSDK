#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinSwitchDayTalker.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_ECE22A074BA4D58D_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x161545F0)
#define CLASS_1_ECE22A074BA4D58D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x16153DD0)
#define CLASS_1_ECE22A074BA4D58D_EQUALS_OFFSET UNITYSDK_OFFSET(0x16154500)
#define CLASS_1_ECE22A074BA4D58D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16154140)
#define CLASS_1_ECE22A074BA4D58D_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x16153970)
#define CLASS_1_ECE22A074BA4D58D_GET_TALKER_OFFSET UNITYSDK_OFFSET(0x161539C0)
#define CLASS_1_ECE22A074BA4D58D_GET_TALKNO_OFFSET UNITYSDK_OFFSET(0x161539A0)
#define CLASS_1_ECE22A074BA4D58D_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x161539E0)
#define CLASS_1_ECE22A074BA4D58D_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x16153DB0)
#define CLASS_1_ECE22A074BA4D58D_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x16153D80)
#define CLASS_1_ECE22A074BA4D58D_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x16153BC0)
#define CLASS_1_ECE22A074BA4D58D_SET_TALKER_OFFSET UNITYSDK_OFFSET(0x161539D0)
#define CLASS_1_ECE22A074BA4D58D_SET_TALKNO_OFFSET UNITYSDK_OFFSET(0x161539B0)
#define CLASS_1_ECE22A074BA4D58D_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x161539F0)
#define CLASS_1_ECE22A074BA4D58D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16153A00)
#define CLASS_1_ECE22A074BA4D58D__CLONE___OFFSET UNITYSDK_OFFSET(0x16154560)
#define CLASS_1_ECE22A074BA4D58D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x161545C0)
#define CLASS_1_ECE22A074BA4D58D__CTOR_OFFSET UNITYSDK_OFFSET(0x16153960)

inline static constexpr unsigned int Class_1_ECE22A074BA4D58D_TypeDefinitionIndex = 76109;

class Class_1_ECE22A074BA4D58D : public ::System::Object
{
public:
	::RPG::GameCore::FateRinSwitchDayTalker _Talker_k__BackingField; // 0x10
	::System::UInt32 _TalkNo_k__BackingField; // 0x14
	::RPG::Client::TextID _Text_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::FateRinSwitchDayTalker a2, ::RPG::Client::TextID a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FateRinSwitchDayTalker, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_ECE22A074BA4D58D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::Class_1_ECE22A074BA4D58D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECE22A074BA4D58D*))((::PBYTE)hIl2Cpp + CLASS_1_ECE22A074BA4D58D__CTOR_1_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECE22A074BA4D58D_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::System::UInt32 get_TalkNo()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECE22A074BA4D58D_GET_TALKNO_OFFSET))(this);
	}

	::System::Void set_TalkNo(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ECE22A074BA4D58D_SET_TALKNO_OFFSET))(this, a1);
	}

	::RPG::GameCore::FateRinSwitchDayTalker get_Talker()
	{
		return ((::RPG::GameCore::FateRinSwitchDayTalker(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECE22A074BA4D58D_GET_TALKER_OFFSET))(this);
	}

	::System::Void set_Talker(::RPG::GameCore::FateRinSwitchDayTalker a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinSwitchDayTalker))((::PBYTE)hIl2Cpp + CLASS_1_ECE22A074BA4D58D_SET_TALKER_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Text()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECE22A074BA4D58D_GET_TEXT_OFFSET))(this);
	}

	::System::Void set_Text(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_ECE22A074BA4D58D_SET_TEXT_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECE22A074BA4D58D_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_ECE22A074BA4D58D_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_ECE22A074BA4D58D* a1, ::Class_1_ECE22A074BA4D58D* a2)
	{
		return ((::System::Boolean(*)(::Class_1_ECE22A074BA4D58D*, ::Class_1_ECE22A074BA4D58D*))((::PBYTE)hIl2Cpp + CLASS_1_ECE22A074BA4D58D_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_ECE22A074BA4D58D* a1, ::Class_1_ECE22A074BA4D58D* a2)
	{
		return ((::System::Boolean(*)(::Class_1_ECE22A074BA4D58D*, ::Class_1_ECE22A074BA4D58D*))((::PBYTE)hIl2Cpp + CLASS_1_ECE22A074BA4D58D_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECE22A074BA4D58D_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ECE22A074BA4D58D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_ECE22A074BA4D58D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_ECE22A074BA4D58D*))((::PBYTE)hIl2Cpp + CLASS_1_ECE22A074BA4D58D_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_ECE22A074BA4D58D* _Clone__()
	{
		return ((::Class_1_ECE22A074BA4D58D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECE22A074BA4D58D__CLONE___OFFSET))(this);
	}

	::System::Void Deconstruct(::System::UInt32& a1, ::RPG::GameCore::FateRinSwitchDayTalker& a2, ::RPG::Client::TextID& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::RPG::GameCore::FateRinSwitchDayTalker&, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + CLASS_1_ECE22A074BA4D58D_DECONSTRUCT_OFFSET))(this, a1, a2, a3);
	}
};
