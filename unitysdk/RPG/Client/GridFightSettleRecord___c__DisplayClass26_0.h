#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98AA200)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS26_0__GETMEMBERBYPOS_B__0_OFFSET UNITYSDK_OFFSET(0x98AC100)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c__DisplayClass26_0_TypeDefinitionIndex = 52953;

	class GridFightSettleRecord___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::UInt32 pos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMemberByPos_b__0(::RPG::Client::GridFightGridMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS26_0__GETMEMBERBYPOS_B__0_OFFSET))(this, x);
		}
	};
}
