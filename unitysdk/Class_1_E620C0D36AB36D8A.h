#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6E7CE7203DFFA724.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TrainCakeCatchGameModule; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_E620C0D36AB36D8A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169D4870)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_096C7F7C8EC87129_OFFSET UNITYSDK_OFFSET(0x169D45E0)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_2917BB48A903B3F0_1_OFFSET UNITYSDK_OFFSET(0x169D5050)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_2917BB48A903B3F0_OFFSET UNITYSDK_OFFSET(0x169D4EA0)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x169D49A0)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x169D49F0)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_6747250BC2D13457_OFFSET UNITYSDK_OFFSET(0x169D4590)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_A5CB745FCEAC9303_1_OFFSET UNITYSDK_OFFSET(0x169D4930)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_A5CB745FCEAC9303_OFFSET UNITYSDK_OFFSET(0x169D48C0)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_DB6AE91A68719504_1_OFFSET UNITYSDK_OFFSET(0x169D4E20)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_DB6AE91A68719504_OFFSET UNITYSDK_OFFSET(0x169D4CC0)
#define CLASS_1_E620C0D36AB36D8A_METHOD_1_E01406ED37757F06_OFFSET UNITYSDK_OFFSET(0x169D4D40)
#define CLASS_1_E620C0D36AB36D8A__CTOR_OFFSET UNITYSDK_OFFSET(0x169D44F0)

inline static constexpr unsigned int Class_1_E620C0D36AB36D8A_TypeDefinitionIndex = 57508;

class Class_1_E620C0D36AB36D8A : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	::Struct_2_6E7CE7203DFFA724 Field_1_3; // 0x10
	::RPG::Client::TrainCakeCatchGameModule* Field_1_4; // 0x20
	::System::UInt32 Field_1_5; // 0x28
	::System::UInt32 Field_1_6; // 0x2C
	::System::UInt32 Field_1_7; // 0x30
	::System::UInt32 Field_1_8; // 0x34

	::System::Void _ctor(::RPG::Client::TrainCakeCatchGameModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchGameModule*))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A5CB745FCEAC9303(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_A5CB745FCEAC9303_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5CB745FCEAC9303_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_A5CB745FCEAC9303_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_1_096C7F7C8EC87129()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_096C7F7C8EC87129_OFFSET))(this);
	}

	::System::Void Method_1_E01406ED37757F06(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_E01406ED37757F06_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* Method_1_DB6AE91A68719504()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_DB6AE91A68719504_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_DB6AE91A68719504_1()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_DB6AE91A68719504_1_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_6747250BC2D13457()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_6747250BC2D13457_OFFSET))(this);
	}

	::System::Void Method_1_2917BB48A903B3F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_2917BB48A903B3F0_OFFSET))(this);
	}

	::System::Void Method_1_2917BB48A903B3F0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E620C0D36AB36D8A_METHOD_1_2917BB48A903B3F0_1_OFFSET))(this);
	}
};
