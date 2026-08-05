#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAdaptData_Enum_3_6B1E252B0D6C7258.h"
#include "unitysdk/MoleMole/UIAdaptData_Enum_3_7F749845F1B2356D.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIADAPTDATA_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x193445D0)
#define MOLEMOLE_UIADAPTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x193445C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAdaptData_TypeDefinitionIndex = 69011;

	class UIAdaptData : public ::System::Object
	{
	public:
		::MoleMole::UIAdaptData_Enum_3_7F749845F1B2356D ipadAdjustMode; // 0x10
		::System::Boolean ipadAdjustNeedUniqueBlackEdge; // 0x14
		::MoleMole::UIAdaptData_Enum_3_6B1E252B0D6C7258 iphoneXAdjustMode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTDATA_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}
	};
}
