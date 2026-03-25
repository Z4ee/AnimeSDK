#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98AA050)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS25_0__GETMEMBERSBYTRAITID_B__0_OFFSET UNITYSDK_OFFSET(0x98AC000)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c__DisplayClass25_0_TypeDefinitionIndex = 52952;

	class GridFightSettleRecord___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMembersByTraitID_b__0(::RPG::Client::GridFightGridMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS25_0__GETMEMBERSBYTRAITID_B__0_OFFSET))(this, x);
		}
	};
}
