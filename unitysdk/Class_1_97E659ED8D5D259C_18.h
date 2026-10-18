#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_1195;
namespace RPG::GameCore { class TrainPartySkillConfigRow; }
namespace System { class String; }

#define CLASS_1_97E659ED8D5D259C_18_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB765BA0)
#define CLASS_1_97E659ED8D5D259C_18_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB765BC0)
#define CLASS_1_97E659ED8D5D259C_18_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xB765B80)
#define CLASS_1_97E659ED8D5D259C_18_METHOD_1_8B6B88BB55BEE3B0_OFFSET UNITYSDK_OFFSET(0xB765910)
#define CLASS_1_97E659ED8D5D259C_18_METHOD_1_A869725C00DD7185_OFFSET UNITYSDK_OFFSET(0xB765B20)
#define CLASS_1_97E659ED8D5D259C_18_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB765BB0)
#define CLASS_1_97E659ED8D5D259C_18_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB765BD0)
#define CLASS_1_97E659ED8D5D259C_18_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xB765B90)
#define CLASS_1_97E659ED8D5D259C_18__CTOR_OFFSET UNITYSDK_OFFSET(0xB7658E0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_18_TypeDefinitionIndex = 74348;

class Class_1_97E659ED8D5D259C_18 : public ::System::Object
{
public:
	::System::UInt32 _Level_k__BackingField; // 0x10
	::System::UInt32 _MaxLevel_k__BackingField; // 0x14
	::System::UInt32 _SkillID_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_D17272E82AE804C2_1195* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1195*))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_18__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_1_8B6B88BB55BEE3B0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_18_METHOD_1_8B6B88BB55BEE3B0_OFFSET))(this);
	}

	::System::UInt32 get_SkillID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_18_GET_SKILLID_OFFSET))(this);
	}

	::System::Void set_SkillID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_18_SET_SKILLID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_18_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_18_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_MaxLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_18_GET_MAXLEVEL_OFFSET))(this);
	}

	::System::Void set_MaxLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_18_SET_MAXLEVEL_OFFSET))(this, a1);
	}

	::RPG::GameCore::TrainPartySkillConfigRow* Method_1_A869725C00DD7185()
	{
		return ((::RPG::GameCore::TrainPartySkillConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_18_METHOD_1_A869725C00DD7185_OFFSET))(this);
	}
};
