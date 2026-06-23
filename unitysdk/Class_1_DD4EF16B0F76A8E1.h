#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_DD4EF16B0F76A8E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1078B000)

inline static constexpr unsigned int Class_1_DD4EF16B0F76A8E1_TypeDefinitionIndex = 65957;

class Class_1_DD4EF16B0F76A8E1 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_2; // 0x10
	::System::String* Field_1_1; // 0x20
	::System::String* Field_1_0; // 0x28
	::System::Boolean Field_1_5; // 0x30
	::System::Boolean Field_1_3; // 0x31
	::System::UInt32 Field_1_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD4EF16B0F76A8E1__CTOR_OFFSET))(this);
	}
};
