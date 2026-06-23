#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E6CE432AB5E8A11E;
namespace MoleMole::Config { class GamepadRumbleEntry; }
namespace System { class String; }

#define CLASS_3_E6CE432AB5E8A11E_CLASS_1_B83AC74E3E40269A_METHOD_1_493DED06C3285F69_OFFSET UNITYSDK_OFFSET(0x11F9AEE0)
#define CLASS_3_E6CE432AB5E8A11E_CLASS_1_B83AC74E3E40269A_METHOD_1_E43380364C59013E_OFFSET UNITYSDK_OFFSET(0x11F9AEB0)
#define CLASS_3_E6CE432AB5E8A11E_CLASS_1_B83AC74E3E40269A__CTOR_OFFSET UNITYSDK_OFFSET(0x11F9AEA0)

inline static constexpr unsigned int Class_3_E6CE432AB5E8A11E_Class_1_B83AC74E3E40269A_TypeDefinitionIndex = 49269;

class Class_3_E6CE432AB5E8A11E_Class_1_B83AC74E3E40269A : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::MoleMole::Config::GamepadRumbleEntry* Field_1_2; // 0x18
	::Class_3_E6CE432AB5E8A11E* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_CLASS_1_B83AC74E3E40269A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E43380364C59013E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_CLASS_1_B83AC74E3E40269A_METHOD_1_E43380364C59013E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_493DED06C3285F69(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E6CE432AB5E8A11E_CLASS_1_B83AC74E3E40269A_METHOD_1_493DED06C3285F69_OFFSET))(this, a1, a2);
	}
};
