#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_0A511EC341C76F1D___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D05550)
#define CLASS_1_0A511EC341C76F1D___C__DISPLAYCLASS21_0__REQUESTRELICDATAREFRESH_B__0_OFFSET UNITYSDK_OFFSET(0x15D07440)
#define CLASS_1_0A511EC341C76F1D___C__DISPLAYCLASS21_0__REQUESTRELICDATAREFRESH_B__1_OFFSET UNITYSDK_OFFSET(0x15D07460)
#define CLASS_1_0A511EC341C76F1D___C__DISPLAYCLASS21_0__REQUESTRELICDATAREFRESH_B__2_OFFSET UNITYSDK_OFFSET(0x15D07480)

inline static constexpr unsigned int Class_1_0A511EC341C76F1D___c__DisplayClass21_0_TypeDefinitionIndex = 66726;

class Class_1_0A511EC341C76F1D___c__DisplayClass21_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* getRecommendBigDataPromise; // 0x10
	::RPG::Client::Promises::Promise* getRecommendDataPromise; // 0x18
	::RPG::Client::Promises::Promise* promise; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A511EC341C76F1D___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
	}

	::System::Void _RequestRelicDataRefresh_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A511EC341C76F1D___C__DISPLAYCLASS21_0__REQUESTRELICDATAREFRESH_B__0_OFFSET))(this);
	}

	::System::Void _RequestRelicDataRefresh_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A511EC341C76F1D___C__DISPLAYCLASS21_0__REQUESTRELICDATAREFRESH_B__1_OFFSET))(this);
	}

	::System::Void _RequestRelicDataRefresh_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A511EC341C76F1D___C__DISPLAYCLASS21_0__REQUESTRELICDATAREFRESH_B__2_OFFSET))(this);
	}
};
