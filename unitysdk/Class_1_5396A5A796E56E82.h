#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_CE2E7DC9D5241F3C;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }

#define CLASS_1_5396A5A796E56E82_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17286910)
#define CLASS_1_5396A5A796E56E82_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17286E70)
#define CLASS_1_5396A5A796E56E82_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x17286EF0)
#define CLASS_1_5396A5A796E56E82_METHOD_1_41430AFD3BF44B19_OFFSET UNITYSDK_OFFSET(0x17286970)
#define CLASS_1_5396A5A796E56E82__CTOR_OFFSET UNITYSDK_OFFSET(0x17287E00)

inline static constexpr unsigned int Class_1_5396A5A796E56E82_TypeDefinitionIndex = 55039;

class Class_1_5396A5A796E56E82 : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* Field_1_4; // 0x10
	::MoleMole::Config::DynamicFloat* Field_1_6; // 0x18
	::MoleMole::Config::DynamicFloat* Field_1_8; // 0x20
	::MoleMole::Config::DynamicFloat* Field_1_5; // 0x28
	::MoleMole::Config::DynamicFloat* Field_1_7; // 0x30
	::Class_1_CE2E7DC9D5241F3C* Field_1_1; // 0x38
	::MoleMole::Config::DynamicInt* Field_1_3; // 0x40
	::System::Boolean Field_1_0; // 0x48
	::UnityEngine::Vector3 Field_1_2; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5396A5A796E56E82__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5396A5A796E56E82_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_5396A5A796E56E82_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_5396A5A796E56E82_METHOD_1_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_41430AFD3BF44B19(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5396A5A796E56E82_METHOD_1_41430AFD3BF44B19_OFFSET))(this, a1, a2);
	}
};
