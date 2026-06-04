#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightRoleConfigRow; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ROLEAVATARCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0xBB5B470)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ROLEAVATARCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xBB5B510)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ROLEAVATARCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xBB582B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_RoleAvatarComparer_TypeDefinitionIndex = 60439;

	class GridFightGameFormationEditor_RoleAvatarComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ROLEAVATARCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::GridFightRoleConfigRow* a1, ::RPG::GameCore::GridFightRoleConfigRow* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ROLEAVATARCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::RPG::GameCore::GridFightRoleConfigRow* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ROLEAVATARCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
