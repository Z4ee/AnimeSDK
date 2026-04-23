#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_127;
namespace RPG::GameCore { class TrainPartySkillConfigRow; }
namespace System { class String; }

#define CLASS_1_1B7044A592B17773_11_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x962B820)
#define CLASS_1_1B7044A592B17773_11_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x962B840)
#define CLASS_1_1B7044A592B17773_11_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x962B800)
#define CLASS_1_1B7044A592B17773_11_METHOD_1_74111764BB87DBB6_OFFSET UNITYSDK_OFFSET(0x962B7A0)
#define CLASS_1_1B7044A592B17773_11_METHOD_1_B7EDD769B79C6563_OFFSET UNITYSDK_OFFSET(0x962B580)
#define CLASS_1_1B7044A592B17773_11_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x962B830)
#define CLASS_1_1B7044A592B17773_11_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x962B850)
#define CLASS_1_1B7044A592B17773_11_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x962B810)
#define CLASS_1_1B7044A592B17773_11__CTOR_OFFSET UNITYSDK_OFFSET(0x962B550)

inline static constexpr unsigned int Class_1_1B7044A592B17773_11_TypeDefinitionIndex = 68617;

class Class_1_1B7044A592B17773_11 : public ::System::Object
{
public:
	::System::UInt32 _Level_k__BackingField; // 0x10
	::System::UInt32 _SkillID_k__BackingField; // 0x14
	::System::UInt32 _MaxLevel_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_D1E0AD3915BCCF29_127* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_127*))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_11__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_1_B7EDD769B79C6563()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_11_METHOD_1_B7EDD769B79C6563_OFFSET))(this);
	}

	::System::UInt32 get_SkillID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_11_GET_SKILLID_OFFSET))(this);
	}

	::System::Void set_SkillID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_11_SET_SKILLID_OFFSET))(this, value);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_11_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_11_SET_LEVEL_OFFSET))(this, value);
	}

	::System::UInt32 get_MaxLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_11_GET_MAXLEVEL_OFFSET))(this);
	}

	::System::Void set_MaxLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_11_SET_MAXLEVEL_OFFSET))(this, value);
	}

	::RPG::GameCore::TrainPartySkillConfigRow* Method_1_74111764BB87DBB6()
	{
		return ((::RPG::GameCore::TrainPartySkillConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_11_METHOD_1_74111764BB87DBB6_OFFSET))(this);
	}
};
