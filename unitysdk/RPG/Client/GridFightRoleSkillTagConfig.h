#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillTag.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightRoleTagInfoConfigRow; }

#define RPG_CLIENT_GRIDFIGHTROLESKILLTAGCONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0xBBEED20)
#define RPG_CLIENT_GRIDFIGHTROLESKILLTAGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBBEECE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleSkillTagConfig_TypeDefinitionIndex = 60887;

	class GridFightRoleSkillTagConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightRoleTagInfoConfigRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::GridFightRoleSkillTag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightRoleSkillTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLTAGCONFIG__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLTAGCONFIG_GET_NAMETEXTID_OFFSET))(this);
		}
	};
}
