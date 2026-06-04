#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBBFB510)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS32_0__GETMEMBERSBYTRAITID_B__0_OFFSET UNITYSDK_OFFSET(0xBBFD720)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c__DisplayClass32_0_TypeDefinitionIndex = 60973;

	class GridFightSettleRecord___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMembersByTraitID_b__0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS32_0__GETMEMBERSBYTRAITID_B__0_OFFSET))(this, a1);
		}
	};
}
