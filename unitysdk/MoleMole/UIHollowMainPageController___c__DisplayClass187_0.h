#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_FCAF801AC482D3B5_Enum_3_AE3AC209555CEF94.h"
#include "unitysdk/System/Object.h"

class Class_5_FCAF801AC482D3B5;

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS187_0__CTOR_OFFSET UNITYSDK_OFFSET(0x169158C0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS187_0__PAUSEBGVIDEO_B__0_OFFSET UNITYSDK_OFFSET(0x169158D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass187_0_TypeDefinitionIndex = 78286;

	class UIHollowMainPageController___c__DisplayClass187_0 : public ::System::Object
	{
	public:
		::Class_5_FCAF801AC482D3B5_Enum_3_AE3AC209555CEF94 pauseVideoReason; // 0x10
		::System::Boolean pause; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS187_0__CTOR_OFFSET))(this);
		}

		::System::Void _PauseBGVideo_b__0(::Class_5_FCAF801AC482D3B5* chessboard)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS187_0__PAUSEBGVIDEO_B__0_OFFSET))(this, chessboard);
		}
	};
}
