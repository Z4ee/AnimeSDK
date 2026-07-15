#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPGTOOLS_TIMELINE_BLUSHERDATA_METHOD_1_0039B43FD4E0E048_OFFSET UNITYSDK_OFFSET(0x1B34B0B0)
#define RPGTOOLS_TIMELINE_BLUSHERDATA_METHOD_1_0E36A5F5CC6CF609_OFFSET UNITYSDK_OFFSET(0x1B34AD40)
#define RPGTOOLS_TIMELINE_BLUSHERDATA_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1B34ACC0)
#define RPGTOOLS_TIMELINE_BLUSHERDATA_METHOD_1_33796CF18653C823_OFFSET UNITYSDK_OFFSET(0x1B34AE30)
#define RPGTOOLS_TIMELINE_BLUSHERDATA_METHOD_1_B6B434482276FBDF_OFFSET UNITYSDK_OFFSET(0x1B34B1A0)
#define RPGTOOLS_TIMELINE_BLUSHERDATA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B34AFE0)
#define RPGTOOLS_TIMELINE_BLUSHERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B34AE20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int BlusherData_TypeDefinitionIndex = 46345;

	class BlusherData : public ::System::Object
	{
	public:
		::System::Boolean EnableExpressionCheekColor; // 0x10
		::UnityEngine::Color ExpressionCheekColor; // 0x14
		::System::Boolean EnableExpressionMapThreshold; // 0x24
		::System::Single ExpressionMapThreshold; // 0x28
		::System::Boolean EnableExpressionSpecularIntensity; // 0x2C
		::System::Single ExpressionSpecularIntensity; // 0x30
		::System::Boolean EnableExpressionCheekIntensity; // 0x34
		::System::Single ExpressionCheekIntensity; // 0x38
		::System::Boolean EnableExpressionShyColor; // 0x3C
		::UnityEngine::Color ExpressionShyColor; // 0x40
		::System::Boolean EnableExpressionShyIntensity; // 0x50
		::System::Single ExpressionShyIntensity; // 0x54
		::System::Boolean EnableExpressionShadowColor; // 0x58
		::UnityEngine::Color ExpressionShadowColor; // 0x5C
		::System::Boolean EnableExpressionShadowIntensity; // 0x6C
		::System::Single ExpressionShadowIntensity; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLUSHERDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLUSHERDATA_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		::RPGTools::Timeline::BlusherData* Method_1_0E36A5F5CC6CF609()
		{
			return ((::RPGTools::Timeline::BlusherData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLUSHERDATA_METHOD_1_0E36A5F5CC6CF609_OFFSET))(this);
		}

		::RPGTools::Timeline::BlusherData* Method_1_33796CF18653C823(::RPGTools::Timeline::BlusherData* a1)
		{
			return ((::RPGTools::Timeline::BlusherData*(*)(::PVOID, ::RPGTools::Timeline::BlusherData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLUSHERDATA_METHOD_1_33796CF18653C823_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::BlusherData* Method_1_0039B43FD4E0E048(::RPGTools::Timeline::BlusherData* a1)
		{
			return ((::RPGTools::Timeline::BlusherData*(*)(::PVOID, ::RPGTools::Timeline::BlusherData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLUSHERDATA_METHOD_1_0039B43FD4E0E048_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::BlusherData* Method_1_B6B434482276FBDF(::System::Single a1)
		{
			return ((::RPGTools::Timeline::BlusherData*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLUSHERDATA_METHOD_1_B6B434482276FBDF_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLUSHERDATA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
