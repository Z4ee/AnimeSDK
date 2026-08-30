#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_576F4DC5F5A776FC;
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13F16E80)
#define CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS8_0__REQUESTDATAANDSHOWMAINPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x13F19AA0)

inline static constexpr unsigned int Class_1_A0E7B93CE3D1C3B3___c__DisplayClass8_0_TypeDefinitionIndex = 80424;

class Class_1_A0E7B93CE3D1C3B3___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_1_576F4DC5F5A776FC* activityService; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _RequestDataAndShowMainPageAsync_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS8_0__REQUESTDATAANDSHOWMAINPAGEASYNC_B__0_OFFSET))(this);
	}
};
