#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F40B865AC61AB8D7.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class String; }

#define CLASS_1_E795C5D5DDF30620_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xB4E9790)
#define CLASS_1_E795C5D5DDF30620_FROMFLX_OFFSET UNITYSDK_OFFSET(0xB4E9E00)
#define CLASS_1_E795C5D5DDF30620_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0xB4E9E80)
#define CLASS_1_E795C5D5DDF30620_METHOD_1_6A03C0134352525C_OFFSET UNITYSDK_OFFSET(0xB4E97F0)
#define CLASS_1_E795C5D5DDF30620__CTOR_OFFSET UNITYSDK_OFFSET(0xB4EB4B0)

inline static constexpr unsigned int Class_1_E795C5D5DDF30620_TypeDefinitionIndex = 64090;

class Class_1_E795C5D5DDF30620 : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* Field_1_9; // 0x10
	::MoleMole::Config::DynamicFloat* Field_1_1; // 0x18
	::MoleMole::Config::DynamicFloat* Field_1_6; // 0x20
	::System::String* Field_1_13; // 0x28
	::MoleMole::Config::DynamicFloat* Field_1_10; // 0x30
	::MoleMole::Config::DynamicFloat* Field_1_7; // 0x38
	::MoleMole::Config::DynamicFloat* Field_1_8; // 0x40
	::MoleMole::Config::DynamicInt* Field_1_3; // 0x48
	::MoleMole::Config::DynamicFloat* Field_1_2; // 0x50
	::MoleMole::Config::DynamicInt* Field_1_4; // 0x58
	::MoleMole::Config::DynamicFloat* Field_1_5; // 0x60
	::UnityEngine::Vector3 Field_1_12; // 0x68
	::UnityEngine::Vector3 Field_1_11; // 0x74
	::Enum_3_F40B865AC61AB8D7 Field_1_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E795C5D5DDF30620__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E795C5D5DDF30620_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_E795C5D5DDF30620_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6A03C0134352525C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E795C5D5DDF30620_METHOD_1_6A03C0134352525C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_E795C5D5DDF30620_METHOD_1_0578713EDB32B89E_OFFSET))(this, a1);
	}
};
