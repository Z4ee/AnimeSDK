#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E577B5580A99D425_3;
namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98AAF90)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS43_0___SYNCTRAITS_B__0_OFFSET UNITYSDK_OFFSET(0x98AC1E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c__DisplayClass43_0_TypeDefinitionIndex = 52957;

	class GridFightSettleRecord___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::Class_1_E577B5580A99D425_3* trait; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTraits_b__0(::RPG::Client::GridFightTrait* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS43_0___SYNCTRAITS_B__0_OFFSET))(this, t);
		}
	};
}
