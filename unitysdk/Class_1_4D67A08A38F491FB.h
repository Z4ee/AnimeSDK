#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_4D67A08A38F491FB_CLEAR_OFFSET UNITYSDK_OFFSET(0x17A1FD80)
#define CLASS_1_4D67A08A38F491FB__CTOR_OFFSET UNITYSDK_OFFSET(0x17A1FDD0)

inline static constexpr unsigned int Class_1_4D67A08A38F491FB_TypeDefinitionIndex = 46636;

class Class_1_4D67A08A38F491FB : public ::System::Object
{
public:
	::System::Nullable_1<::System::Boolean> Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D67A08A38F491FB__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D67A08A38F491FB_CLEAR_OFFSET))(this);
	}
};
