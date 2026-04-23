#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightRoleConfigRow; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ROLEAVATARCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4B7710)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ROLEAVATARCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA4B7870)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ROLEAVATARCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B4730)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_RoleAvatarComparer_TypeDefinitionIndex = 59504;

	class GridFightGameFormationEditor_RoleAvatarComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ROLEAVATARCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::GridFightRoleConfigRow* x, ::RPG::GameCore::GridFightRoleConfigRow* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ROLEAVATARCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::RPG::GameCore::GridFightRoleConfigRow* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ROLEAVATARCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
