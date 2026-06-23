#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_4ED21A115C97704D;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicString; }

#define CLASS_1_BD2E5F64784FE078_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x114B2650)
#define CLASS_1_BD2E5F64784FE078_FROMFLX_OFFSET UNITYSDK_OFFSET(0x114B2AF0)
#define CLASS_1_BD2E5F64784FE078_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x114B2B70)
#define CLASS_1_BD2E5F64784FE078_METHOD_1_6A03C0134352525C_OFFSET UNITYSDK_OFFSET(0x114B26B0)
#define CLASS_1_BD2E5F64784FE078__CTOR_OFFSET UNITYSDK_OFFSET(0x114B3A50)

inline static constexpr unsigned int Class_1_BD2E5F64784FE078_TypeDefinitionIndex = 47677;

class Class_1_BD2E5F64784FE078 : public ::System::Object
{
public:
	::Class_1_4ED21A115C97704D* Field_1_4; // 0x10
	::Class_1_4ED21A115C97704D* Field_1_6; // 0x18
	::Class_1_4ED21A115C97704D* Field_1_3; // 0x20
	::Class_1_4ED21A115C97704D* Field_1_7; // 0x28
	::MoleMole::Config::DynamicFloat* Field_1_8; // 0x30
	::MoleMole::Config::DynamicString* Field_1_0; // 0x38
	::Class_1_4ED21A115C97704D* Field_1_5; // 0x40
	::MoleMole::Config::DynamicFloat* Field_1_2; // 0x48
	::MoleMole::Config::AbilityTargetting Field_1_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD2E5F64784FE078__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD2E5F64784FE078_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_BD2E5F64784FE078_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6A03C0134352525C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD2E5F64784FE078_METHOD_1_6A03C0134352525C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_BD2E5F64784FE078_METHOD_1_0578713EDB32B89E_OFFSET))(this, a1);
	}
};
