#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A5DB3A79343C7D5B_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xE889F70)
#define CLASS_1_A5DB3A79343C7D5B_METHOD_1_1AD3CAF2B0982C3F_1_OFFSET UNITYSDK_OFFSET(0xE88AA80)
#define CLASS_1_A5DB3A79343C7D5B_METHOD_1_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0xE88A0C0)
#define CLASS_1_A5DB3A79343C7D5B_METHOD_1_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0xE889FB0)
#define CLASS_1_A5DB3A79343C7D5B_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE889A70)
#define CLASS_1_A5DB3A79343C7D5B__CTOR_OFFSET UNITYSDK_OFFSET(0xE889F60)

inline static constexpr unsigned int Class_1_A5DB3A79343C7D5B_TypeDefinitionIndex = 78592;

class Class_1_A5DB3A79343C7D5B : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0xFA1; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xFA2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	::System::String* Field_1_14; // 0x10
	::MiHoYo::SDK::JSONNode* Field_1_20; // 0x18
	::System::String* Field_1_23; // 0x20
	::MiHoYo::SDK::JSONNode* Field_1_21; // 0x28
	::System::String* Field_1_15; // 0x30
	::System::String* Field_1_12; // 0x38
	::System::String* Field_1_17; // 0x40
	::System::String* Field_1_11; // 0x48
	::System::String* Field_1_8; // 0x50
	::System::String* Field_1_18; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_19; // 0x60
	::System::String* Field_1_22; // 0x68
	::System::String* Field_1_13; // 0x70
	::System::String* Field_1_7; // 0x78
	::System::Int32 Field_1_5; // 0x80
	::System::Boolean Field_1_10; // 0x84
	::System::Boolean Field_1_9; // 0x85
	::System::Boolean Field_1_6; // 0x86
	::System::Boolean Field_1_16; // 0x87
	::System::Int32 Field_1_4; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5DB3A79343C7D5B__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5DB3A79343C7D5B_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5DB3A79343C7D5B_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5DB3A79343C7D5B_METHOD_1_464B80C09A37526F_OFFSET))(this);
	}

	::System::Void Method_1_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5DB3A79343C7D5B_METHOD_1_1AD3CAF2B0982C3F_OFFSET))(this);
	}

	::System::Void Method_1_1AD3CAF2B0982C3F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5DB3A79343C7D5B_METHOD_1_1AD3CAF2B0982C3F_1_OFFSET))(this);
	}
};
