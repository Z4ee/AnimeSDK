#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightProjection; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98A9EC0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS12_0__GETPROJBYID_B__0_OFFSET UNITYSDK_OFFSET(0x98ABFC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c__DisplayClass12_0_TypeDefinitionIndex = 52951;

	class GridFightSettleRecord___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetProjByID_b__0(::RPG::Client::GridFightProjection* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightProjection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS12_0__GETPROJBYID_B__0_OFFSET))(this, x);
		}
	};
}
