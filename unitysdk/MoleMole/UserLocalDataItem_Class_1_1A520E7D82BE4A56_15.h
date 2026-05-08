#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_1A520E7D82BE4A56_15__CTOR_OFFSET UNITYSDK_OFFSET(0x10D8C8D0)

namespace MoleMole
{
	inline static constexpr unsigned int UserLocalDataItem_Class_1_1A520E7D82BE4A56_15_TypeDefinitionIndex = 78280;

	class UserLocalDataItem_Class_1_1A520E7D82BE4A56_15 : public ::System::Object
	{
	public:
		::System::Boolean Field_1_1; // 0x10
		::System::Boolean Field_1_0; // 0x11
		::System::Boolean Field_1_2; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_1A520E7D82BE4A56_15__CTOR_OFFSET))(this);
		}
	};
}
