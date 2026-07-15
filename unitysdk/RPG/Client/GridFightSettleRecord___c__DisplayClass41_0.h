#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD72E90)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS41_0__GETTRAITBYID_B__0_OFFSET UNITYSDK_OFFSET(0x1AD755A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c__DisplayClass41_0_TypeDefinitionIndex = 62292;

	class GridFightSettleRecord___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTraitByID_b__0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS41_0__GETTRAITBYID_B__0_OFFSET))(this, a1);
		}
	};
}
