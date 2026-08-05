#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }

#define CLASS_1_9CCB1E121B59E45A_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171C8C60)
#define CLASS_1_9CCB1E121B59E45A_FROMFLX_OFFSET UNITYSDK_OFFSET(0x171C9080)
#define CLASS_1_9CCB1E121B59E45A_METHOD_1_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x171C9100)
#define CLASS_1_9CCB1E121B59E45A_METHOD_1_92953CB5B7300582_OFFSET UNITYSDK_OFFSET(0x171C8CC0)
#define CLASS_1_9CCB1E121B59E45A__CTOR_OFFSET UNITYSDK_OFFSET(0x171C9B30)

inline static constexpr unsigned int Class_1_9CCB1E121B59E45A_TypeDefinitionIndex = 63806;

class Class_1_9CCB1E121B59E45A : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* Field_1_1; // 0x10
	::MoleMole::Config::DynamicFloat* Field_1_7; // 0x18
	::MoleMole::Config::DynamicFloat* Field_1_0; // 0x20
	::MoleMole::Config::DynamicFloat* Field_1_2; // 0x28
	::MoleMole::Config::DynamicFloat* Field_1_3; // 0x30
	::MoleMole::Config::DynamicInt* Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CCB1E121B59E45A__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CCB1E121B59E45A_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_9CCB1E121B59E45A_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_92953CB5B7300582(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CCB1E121B59E45A_METHOD_1_92953CB5B7300582_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_9CCB1E121B59E45A_METHOD_1_00531776927FE5B6_OFFSET))(this, a1);
	}
};
