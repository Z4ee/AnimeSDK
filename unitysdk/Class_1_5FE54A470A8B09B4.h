#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5FE54A470A8B09B4__CTOR_OFFSET UNITYSDK_OFFSET(0x14B5DDF0)

inline static constexpr unsigned int Class_1_5FE54A470A8B09B4_TypeDefinitionIndex = 81396;

class Class_1_5FE54A470A8B09B4 : public ::System::Object
{
public:
	::Foundation::ViewObject::SuiteInfo Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18
	::System::Boolean Field_1_7; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FE54A470A8B09B4__CTOR_OFFSET))(this);
	}
};
