#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightForgeFuncType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTFORGEADDROLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xBB3E6E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeAddRoleEvent_TypeDefinitionIndex = 60705;

	class GridFightForgeAddRoleEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* AddRole; // 0x10
		::System::UInt32 ForgeSelectIndex; // 0x18
		::RPG::GameCore::GridFightForgeFuncType FuncType; // 0x1C
		::System::Boolean IsUnlockExpert; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEADDROLEEVENT__CTOR_OFFSET))(this);
		}
	};
}
