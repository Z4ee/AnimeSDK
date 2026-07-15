#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightProjection; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD72010)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS12_0__GETPROJBYUID_B__0_OFFSET UNITYSDK_OFFSET(0x1AD752E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c__DisplayClass12_0_TypeDefinitionIndex = 62286;

	class GridFightSettleRecord___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetProjByUID_b__0(::RPG::Client::GridFightProjection* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightProjection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS12_0__GETPROJBYUID_B__0_OFFSET))(this, a1);
		}
	};
}
