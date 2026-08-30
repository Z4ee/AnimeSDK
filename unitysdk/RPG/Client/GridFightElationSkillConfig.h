#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleEventSkillRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTELATIONSKILLCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD163140)
#define RPG_CLIENT_GRIDFIGHTELATIONSKILLCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD162F60)
#define RPG_CLIENT_GRIDFIGHTELATIONSKILLCONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0xD162FB0)
#define RPG_CLIENT_GRIDFIGHTELATIONSKILLCONFIG_GET_SHORTDESC_OFFSET UNITYSDK_OFFSET(0xD163090)
#define RPG_CLIENT_GRIDFIGHTELATIONSKILLCONFIG_GET_SKILLTYPETEXTID_OFFSET UNITYSDK_OFFSET(0xD163020)
#define RPG_CLIENT_GRIDFIGHTELATIONSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xD162F20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationSkillConfig_TypeDefinitionIndex = 65435;

	class GridFightElationSkillConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleEventSkillRow* _Row; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONSKILLCONFIG__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONSKILLCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONSKILLCONFIG_GET_NAMETEXTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillTypeTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONSKILLCONFIG_GET_SKILLTYPETEXTID_OFFSET))(this);
		}

		::System::String* get_ShortDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONSKILLCONFIG_GET_SHORTDESC_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONSKILLCONFIG_GET_DESC_OFFSET))(this);
		}
	};
}
