#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_DD4EF16B0F76A8E1__CTOR_OFFSET UNITYSDK_OFFSET(0x19F65A90)

inline static constexpr unsigned int Class_1_DD4EF16B0F76A8E1_TypeDefinitionIndex = 88832;

class Class_1_DD4EF16B0F76A8E1 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_7; // 0x18
	::System::String* Field_1_2; // 0x28
	::System::UInt32 Field_1_5; // 0x30
	::System::Boolean Field_1_6; // 0x34
	::System::Boolean Field_1_4; // 0x35
	::System::Boolean Field_1_0; // 0x36

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD4EF16B0F76A8E1__CTOR_OFFSET))(this);
	}
};
