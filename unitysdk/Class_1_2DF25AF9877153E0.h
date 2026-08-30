#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AchievementSeriesRow; }

#define CLASS_1_2DF25AF9877153E0_METHOD_1_0941DCC41E3BEF54_OFFSET UNITYSDK_OFFSET(0x15A4D9E0)
#define CLASS_1_2DF25AF9877153E0_METHOD_1_CA679CD4C9212BFC_OFFSET UNITYSDK_OFFSET(0x15A4D9A0)
#define CLASS_1_2DF25AF9877153E0_METHOD_1_D3B7E4F5CEA0567D_OFFSET UNITYSDK_OFFSET(0x15A4D8E0)
#define CLASS_1_2DF25AF9877153E0__CTOR_OFFSET UNITYSDK_OFFSET(0x15A4D990)

inline static constexpr unsigned int Class_1_2DF25AF9877153E0_TypeDefinitionIndex = 61458;

class Class_1_2DF25AF9877153E0 : public ::System::Object
{
public:
	::RPG::GameCore::AchievementSeriesRow* IBPBJBOKKMF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DF25AF9877153E0__CTOR_OFFSET))(this);
	}

	static ::Class_1_2DF25AF9877153E0* Method_1_D3B7E4F5CEA0567D(::System::UInt32 a1)
	{
		return ((::Class_1_2DF25AF9877153E0*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2DF25AF9877153E0_METHOD_1_D3B7E4F5CEA0567D_OFFSET))(a1);
	}

	::RPG::GameCore::AchievementSeriesRow* Method_1_CA679CD4C9212BFC()
	{
		return ((::RPG::GameCore::AchievementSeriesRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DF25AF9877153E0_METHOD_1_CA679CD4C9212BFC_OFFSET))(this);
	}

	::System::Void Method_1_0941DCC41E3BEF54(::RPG::GameCore::AchievementSeriesRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AchievementSeriesRow*))((::PBYTE)hIl2Cpp + CLASS_1_2DF25AF9877153E0_METHOD_1_0941DCC41E3BEF54_OFFSET))(this, a1);
	}
};
