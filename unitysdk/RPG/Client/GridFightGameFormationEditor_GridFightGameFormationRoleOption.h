#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONROLEOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD642B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_GridFightGameFormationRoleOption_TypeDefinitionIndex = 64702;

	class GridFightGameFormationEditor_GridFightGameFormationRoleOption : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* Role; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONROLEOPTION__CTOR_OFFSET))(this);
		}
	};
}
