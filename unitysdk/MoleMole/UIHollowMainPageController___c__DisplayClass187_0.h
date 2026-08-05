#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_DCFF91E03A93C03C_Enum_3_AE3AC209555CEF94.h"
#include "unitysdk/System/Object.h"

class Class_5_DCFF91E03A93C03C;

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS187_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18997E80)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS187_0__PAUSEBGVIDEO_B__0_OFFSET UNITYSDK_OFFSET(0x18997E90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass187_0_TypeDefinitionIndex = 73675;

	class UIHollowMainPageController___c__DisplayClass187_0 : public ::System::Object
	{
	public:
		::System::Boolean pause; // 0x10
		::Class_5_DCFF91E03A93C03C_Enum_3_AE3AC209555CEF94 pauseVideoReason; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS187_0__CTOR_OFFSET))(this);
		}

		::System::Void _PauseBGVideo_b__0(::Class_5_DCFF91E03A93C03C* chessboard)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS187_0__PAUSEBGVIDEO_B__0_OFFSET))(this, chessboard);
		}
	};
}
