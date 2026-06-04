#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarServantSkillRow; }
namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { class BattleEventSkillRow; }
namespace RPG::GameCore { class GridFightSkillSubIconConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_CONDITIONDESC_OFFSET UNITYSDK_OFFSET(0xBBED940)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0xBBED780)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBBEDB30)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xBBEDA70)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_ISREPLACE_OFFSET UNITYSDK_OFFSET(0xBBEDAD0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0xBBEDB50)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_SIMPLECONDITIONDESC_OFFSET UNITYSDK_OFFSET(0xBBED820)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xBBED6E0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_SKILLTYPETEXTID_OFFSET UNITYSDK_OFFSET(0xBBEDB70)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBBEDB40)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_SET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0xBBEDB60)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_SET_SKILLTYPETEXTID_OFFSET UNITYSDK_OFFSET(0xBBEDB80)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBBED560)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG__CTOR_2_OFFSET UNITYSDK_OFFSET(0xBBED650)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBBED4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleSkillDescConfig_TypeDefinitionIndex = 60888;

	class GridFightRoleSkillDescConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* _SimpleSkillDescParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParamList; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ConditionParamList; // 0x28
		::RPG::GameCore::GridFightSkillSubIconConfigRow* _SubIconRow; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* _SimpleConditionParamList; // 0x38
		::RPG::Client::TextID _SimpleConditionTextID; // 0x40
		::RPG::Client::TextID _SimpleSkillDescTextID; // 0x50
		::RPG::Client::TextID _DescTextID; // 0x60
		::RPG::Client::TextID _SkillTypeTextID_k__BackingField; // 0x70
		::RPG::Client::TextID _NameTextID_k__BackingField; // 0x80
		::RPG::Client::TextID _ConditionTextID; // 0x90

		::System::Void _ctor(::RPG::GameCore::AvatarSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::GameCore::BattleEventSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::RPG::GameCore::AvatarServantSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG__CTOR_2_OFFSET))(this, a1);
		}

		::System::String* get_SimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_SIMPLEDESC_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_DESC_OFFSET))(this);
		}

		::System::String* get_SimpleConditionDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_SIMPLECONDITIONDESC_OFFSET))(this);
		}

		::System::String* get_ConditionDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_CONDITIONDESC_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_ISNEW_OFFSET))(this);
		}

		::System::Boolean get_IsReplace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_ISREPLACE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_SET_ICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::Void set_NameTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_SET_NAMETEXTID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SkillTypeTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_SKILLTYPETEXTID_OFFSET))(this);
		}

		::System::Void set_SkillTypeTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_SET_SKILLTYPETEXTID_OFFSET))(this, a1);
		}
	};
}
