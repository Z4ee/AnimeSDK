#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4E9110768996F21A.h"
#include "unitysdk/Enum_3_8C789BDFE3338D17.h"
#include "unitysdk/Enum_3_E4990BCC4AFB696A.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_7545BEE9CDEE9B07__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E2BD0)

inline static constexpr unsigned int Class_2_7545BEE9CDEE9B07_TypeDefinitionIndex = 29620;

class Class_2_7545BEE9CDEE9B07 : public ::System::Attribute
{
public:
	::System::String* Field_2_7; // 0x10
	::Enum_3_8C789BDFE3338D17 Field_2_5; // 0x18
	::Enum_3_E4990BCC4AFB696A Field_2_1; // 0x1C
	::Enum_3_4E9110768996F21A Field_2_0; // 0x1E
	::Enum_3_8C789BDFE3338D17 Field_2_4; // 0x20
	::Enum_3_8C789BDFE3338D17 Field_2_6; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7545BEE9CDEE9B07__CTOR_OFFSET))(this);
	}
};
