#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTCOPYROLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x97EE110)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightCopyRoleEvent_TypeDefinitionIndex = 52928;

	class GridFightCopyRoleEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* CopiedRole; // 0x10
		::RPG::Client::GridFightRole* SrcRole; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOPYROLEEVENT__CTOR_OFFSET))(this);
		}
	};
}
