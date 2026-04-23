#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E577B5580A99D425_4;
namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA58B420)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS50_0___SYNCTRAITS_B__0_OFFSET UNITYSDK_OFFSET(0xA58E320)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c__DisplayClass50_0_TypeDefinitionIndex = 60043;

	class GridFightSettleRecord___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::Class_1_E577B5580A99D425_4* trait; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTraits_b__0(::RPG::Client::GridFightTrait* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS50_0___SYNCTRAITS_B__0_OFFSET))(this, t);
		}
	};
}
