#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo; }

#define CLASS_1_B33BAF81033C55CD_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x101117E0)
#define CLASS_1_B33BAF81033C55CD_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x101117D0)
#define CLASS_1_B33BAF81033C55CD__CTOR_OFFSET UNITYSDK_OFFSET(0x101117F0)

inline static constexpr unsigned int Class_1_B33BAF81033C55CD_TypeDefinitionIndex = 69520;

class Class_1_B33BAF81033C55CD : public ::System::Object
{
public:
	::MoleMole::UIAbyssS2InlevelMapAreaWidgetController_IconTipInfo* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B33BAF81033C55CD__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B33BAF81033C55CD_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B33BAF81033C55CD_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
