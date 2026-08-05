#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_84DA6BF769CDC90D_METHOD_1_0128AC2F1B19C084_OFFSET UNITYSDK_OFFSET(0x1199E110)
#define CLASS_1_84DA6BF769CDC90D_METHOD_1_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x1199DAB0)
#define CLASS_1_84DA6BF769CDC90D_METHOD_1_A760E63D5276C63F_OFFSET UNITYSDK_OFFSET(0x1199E040)
#define CLASS_1_84DA6BF769CDC90D_METHOD_1_FC98BB22B7077EE4_OFFSET UNITYSDK_OFFSET(0x1199DE30)
#define CLASS_1_84DA6BF769CDC90D__CTOR_OFFSET UNITYSDK_OFFSET(0x1199DAA0)

inline static constexpr unsigned int Class_1_84DA6BF769CDC90D_TypeDefinitionIndex = 61453;

class Class_1_84DA6BF769CDC90D : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84DA6BF769CDC90D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_84DA6BF769CDC90D_METHOD_1_3DC6B5AAFA39829C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FC98BB22B7077EE4(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_84DA6BF769CDC90D_METHOD_1_FC98BB22B7077EE4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A760E63D5276C63F(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_84DA6BF769CDC90D_METHOD_1_A760E63D5276C63F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0128AC2F1B19C084(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_84DA6BF769CDC90D_METHOD_1_0128AC2F1B19C084_OFFSET))(this, a1, a2);
	}
};
