#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_131;
namespace RPG::GameCore { class TrainPartySkillConfigRow; }
namespace System { class String; }

#define CLASS_1_97E659ED8D5D259C_16_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA5E1F60)
#define CLASS_1_97E659ED8D5D259C_16_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xA5E1F80)
#define CLASS_1_97E659ED8D5D259C_16_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xA5E1F40)
#define CLASS_1_97E659ED8D5D259C_16_METHOD_1_A869725C00DD7185_OFFSET UNITYSDK_OFFSET(0xA5E1EE0)
#define CLASS_1_97E659ED8D5D259C_16_METHOD_1_B7EDD769B79C6563_OFFSET UNITYSDK_OFFSET(0xA5E1CC0)
#define CLASS_1_97E659ED8D5D259C_16_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA5E1F70)
#define CLASS_1_97E659ED8D5D259C_16_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xA5E1F90)
#define CLASS_1_97E659ED8D5D259C_16_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xA5E1F50)
#define CLASS_1_97E659ED8D5D259C_16__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E1C90)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_16_TypeDefinitionIndex = 69429;

class Class_1_97E659ED8D5D259C_16 : public ::System::Object
{
public:
	::System::UInt32 _SkillID_k__BackingField; // 0x10
	::System::UInt32 _MaxLevel_k__BackingField; // 0x14
	::System::UInt32 _Level_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_D1E0AD3915BCCF29_131* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_131*))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_16__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_1_B7EDD769B79C6563()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_16_METHOD_1_B7EDD769B79C6563_OFFSET))(this);
	}

	::System::UInt32 get_SkillID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_16_GET_SKILLID_OFFSET))(this);
	}

	::System::Void set_SkillID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_16_SET_SKILLID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_16_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_16_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_MaxLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_16_GET_MAXLEVEL_OFFSET))(this);
	}

	::System::Void set_MaxLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_16_SET_MAXLEVEL_OFFSET))(this, a1);
	}

	::RPG::GameCore::TrainPartySkillConfigRow* Method_1_A869725C00DD7185()
	{
		return ((::RPG::GameCore::TrainPartySkillConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_16_METHOD_1_A869725C00DD7185_OFFSET))(this);
	}
};
