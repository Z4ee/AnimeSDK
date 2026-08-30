#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AB730)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS8_0__GETROLESBYID_B__0_OFFSET UNITYSDK_OFFSET(0x1C5AF080)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c__DisplayClass8_0_TypeDefinitionIndex = 65280;

	class GridFightSettleRecord___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRolesByID_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS8_0__GETROLESBYID_B__0_OFFSET))(this, a1);
		}
	};
}
