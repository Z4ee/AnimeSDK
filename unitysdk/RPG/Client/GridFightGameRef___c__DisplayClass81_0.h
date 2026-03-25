#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_36;
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { template <typename T> class GridFightGameRefHttpRspBody_1; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS81_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9827AE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS81_0__REQSHARECODEINFO_B__0_OFFSET UNITYSDK_OFFSET(0x982A2C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass81_0_TypeDefinitionIndex = 52537;

	class GridFightGameRef___c__DisplayClass81_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::GridFightGameRefData*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS81_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReqShareCodeInfo_b__0(::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_47EB23CB5C4B2615_36*>* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_47EB23CB5C4B2615_36*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS81_0__REQSHARECODEINFO_B__0_OFFSET))(this, rsp);
		}
	};
}
