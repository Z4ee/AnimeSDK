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

#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_CONDITIONDESC_OFFSET UNITYSDK_OFFSET(0xA57E7B0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA57E5F0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA57E980)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xA57E8C0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_ISREPLACE_OFFSET UNITYSDK_OFFSET(0xA57E920)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0xA57E9A0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_SIMPLECONDITIONDESC_OFFSET UNITYSDK_OFFSET(0xA57E690)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xA57E550)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_SKILLTYPETEXTID_OFFSET UNITYSDK_OFFSET(0xA57E9C0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA57E990)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_SET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0xA57E9B0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_SET_SKILLTYPETEXTID_OFFSET UNITYSDK_OFFSET(0xA57E9D0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA57E3D0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA57E4C0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA57E340)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleSkillDescConfig_TypeDefinitionIndex = 59953;

	class GridFightRoleSkillDescConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* _SimpleSkillDescParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParamList; // 0x18
		::RPG::GameCore::GridFightSkillSubIconConfigRow* _SubIconRow; // 0x20
		::System::String* _IconPath_k__BackingField; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* _SimpleConditionParamList; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ConditionParamList; // 0x38
		::RPG::Client::TextID _ConditionTextID; // 0x40
		::RPG::Client::TextID _SimpleSkillDescTextID; // 0x50
		::RPG::Client::TextID _DescTextID; // 0x60
		::RPG::Client::TextID _NameTextID_k__BackingField; // 0x70
		::RPG::Client::TextID _SkillTypeTextID_k__BackingField; // 0x80
		::RPG::Client::TextID _SimpleConditionTextID; // 0x90

		::System::Void _ctor(::RPG::GameCore::AvatarSkillRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG__CTOR_OFFSET))(this, row);
		}

		::System::Void _ctor_1(::RPG::GameCore::BattleEventSkillRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG__CTOR_1_OFFSET))(this, row);
		}

		::System::Void _ctor_2(::RPG::GameCore::AvatarServantSkillRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG__CTOR_2_OFFSET))(this, row);
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

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_SET_ICONPATH_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::Void set_NameTextID(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_SET_NAMETEXTID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_SkillTypeTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_GET_SKILLTYPETEXTID_OFFSET))(this);
		}

		::System::Void set_SkillTypeTextID(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLDESCCONFIG_SET_SKILLTYPETEXTID_OFFSET))(this, value);
		}
	};
}
