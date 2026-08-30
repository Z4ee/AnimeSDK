#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRoleChangeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTROLETRANSFEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD310D30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleTransferEvent_TypeDefinitionIndex = 65257;

	class GridFightRoleTransferEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* NewRole; // 0x10
		::RPG::Client::GridFightRole* PreviousRole; // 0x18
		::System::UInt32 UID; // 0x20
		::RPG::Client::GridFightRoleChangeType ChangeType; // 0x24
		::System::UInt32 PosIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLETRANSFEREVENT__CTOR_OFFSET))(this);
		}
	};
}
