#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_48AADA497C3F117F_3;
class Class_1_5092E2281751B550_1;
class Class_2_FEC6BB1C109A969B_5;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define CLASS_2_FEC6BB1C109A969B_5___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC0C9AC0)
#define CLASS_2_FEC6BB1C109A969B_5___C__DISPLAYCLASS4_0__SENDTEAMTOWERSFINISHPVESTAGECSREQ_B__0_OFFSET UNITYSDK_OFFSET(0xC0C9C60)

inline static constexpr unsigned int Class_2_FEC6BB1C109A969B_5___c__DisplayClass4_0_TypeDefinitionIndex = 78577;

class Class_2_FEC6BB1C109A969B_5___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_1_5092E2281751B550_1* resultData; // 0x10
	::Class_2_FEC6BB1C109A969B_5* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEC6BB1C109A969B_5___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_5092E2281751B550_1*>* _SendTeamTowersFinishPveStageCsReq_b__0(::Class_1_48AADA497C3F117F_3* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_5092E2281751B550_1*>*(*)(::PVOID, ::Class_1_48AADA497C3F117F_3*))((::PBYTE)hIl2Cpp + CLASS_2_FEC6BB1C109A969B_5___C__DISPLAYCLASS4_0__SENDTEAMTOWERSFINISHPVESTAGECSREQ_B__0_OFFSET))(this, a1);
	}
};
