#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ElationConfig; }
namespace RPG::GameCore { class ElationSkillRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }

#define CLASS_1_83D980B81C9B9AFA_GET_ELATIONCONFIG_OFFSET UNITYSDK_OFFSET(0xC24BA20)
#define CLASS_1_83D980B81C9B9AFA_GET_ELATIONSKILLROW_OFFSET UNITYSDK_OFFSET(0xC24BA40)
#define CLASS_1_83D980B81C9B9AFA_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xC24BA60)
#define CLASS_1_83D980B81C9B9AFA_GET_SKILLDATA_OFFSET UNITYSDK_OFFSET(0xC24B990)
#define CLASS_1_83D980B81C9B9AFA_METHOD_1_63094002BA6D39A9_OFFSET UNITYSDK_OFFSET(0xC24B9B0)
#define CLASS_1_83D980B81C9B9AFA_METHOD_1_FEDE09C198114DBE_OFFSET UNITYSDK_OFFSET(0xC24BA80)
#define CLASS_1_83D980B81C9B9AFA_SET_ELATIONCONFIG_OFFSET UNITYSDK_OFFSET(0xC24BA30)
#define CLASS_1_83D980B81C9B9AFA_SET_ELATIONSKILLROW_OFFSET UNITYSDK_OFFSET(0xC24BA50)
#define CLASS_1_83D980B81C9B9AFA_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xC24BA70)
#define CLASS_1_83D980B81C9B9AFA_SET_SKILLDATA_OFFSET UNITYSDK_OFFSET(0xC24B9A0)
#define CLASS_1_83D980B81C9B9AFA__CTOR_OFFSET UNITYSDK_OFFSET(0xC24B8E0)

inline static constexpr unsigned int Class_1_83D980B81C9B9AFA_TypeDefinitionIndex = 57664;

class Class_1_83D980B81C9B9AFA : public ::System::Object
{
public:
	::RPG::GameCore::SkillCharacterComponent* _Owner_k__BackingField; // 0x10
	::RPG::GameCore::ElationSkillRow* _ElationSkillRow_k__BackingField; // 0x18
	::RPG::GameCore::ElationConfig* _ElationConfig_k__BackingField; // 0x20
	::RPG::GameCore::SkillData* _SkillData_k__BackingField; // 0x28

	::System::Void _ctor(::RPG::GameCore::SkillCharacterComponent* a1, ::RPG::GameCore::ElationConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillCharacterComponent*, ::RPG::GameCore::ElationConfig*))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::SkillData* get_SkillData()
	{
		return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_GET_SKILLDATA_OFFSET))(this);
	}

	::System::Void set_SkillData(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_SET_SKILLDATA_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_63094002BA6D39A9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_METHOD_1_63094002BA6D39A9_OFFSET))(this);
	}

	::RPG::GameCore::ElationConfig* get_ElationConfig()
	{
		return ((::RPG::GameCore::ElationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_GET_ELATIONCONFIG_OFFSET))(this);
	}

	::System::Void set_ElationConfig(::RPG::GameCore::ElationConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationConfig*))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_SET_ELATIONCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::ElationSkillRow* get_ElationSkillRow()
	{
		return ((::RPG::GameCore::ElationSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_GET_ELATIONSKILLROW_OFFSET))(this);
	}

	::System::Void set_ElationSkillRow(::RPG::GameCore::ElationSkillRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationSkillRow*))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_SET_ELATIONSKILLROW_OFFSET))(this, a1);
	}

	::RPG::GameCore::SkillCharacterComponent* get_Owner()
	{
		return ((::RPG::GameCore::SkillCharacterComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::RPG::GameCore::SkillCharacterComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillCharacterComponent*))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_SET_OWNER_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_FEDE09C198114DBE()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83D980B81C9B9AFA_METHOD_1_FEDE09C198114DBE_OFFSET))(this);
	}
};
