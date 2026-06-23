#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class DynamicFloat; }

#define CLASS_1_A66346B6C03CAFE9_METHOD_1_0128AC2F1B19C084_OFFSET UNITYSDK_OFFSET(0x11DA5CA0)
#define CLASS_1_A66346B6C03CAFE9_METHOD_1_A760E63D5276C63F_OFFSET UNITYSDK_OFFSET(0x11DA65A0)
#define CLASS_1_A66346B6C03CAFE9_METHOD_1_A7FD4B676C8A33C1_OFFSET UNITYSDK_OFFSET(0x11DA5D50)
#define CLASS_1_A66346B6C03CAFE9_METHOD_1_EC2633ACA90C9D13_OFFSET UNITYSDK_OFFSET(0x11DA6000)
#define CLASS_1_A66346B6C03CAFE9__CTOR_OFFSET UNITYSDK_OFFSET(0x11DA5C90)

inline static constexpr unsigned int Class_1_A66346B6C03CAFE9_TypeDefinitionIndex = 39552;

class Class_1_A66346B6C03CAFE9 : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* Field_1_1; // 0x10
	::MoleMole::Config::DynamicFloat* Field_1_0; // 0x18
	::MoleMole::Config::DynamicFloat* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66346B6C03CAFE9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_0128AC2F1B19C084(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A66346B6C03CAFE9_METHOD_1_0128AC2F1B19C084_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EC2633ACA90C9D13(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_A66346B6C03CAFE9_METHOD_1_EC2633ACA90C9D13_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A7FD4B676C8A33C1(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A66346B6C03CAFE9_METHOD_1_A7FD4B676C8A33C1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A760E63D5276C63F(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_A66346B6C03CAFE9_METHOD_1_A760E63D5276C63F_OFFSET))(this, a1);
	}
};
