#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_FF6D62D5D7B9A27D_METHOD_1_70FC9BA3400F387E_OFFSET UNITYSDK_OFFSET(0x1B47C1E0)
#define CLASS_1_FF6D62D5D7B9A27D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B47C660)

inline static constexpr unsigned int Class_1_FF6D62D5D7B9A27D_TypeDefinitionIndex = 11100;

class Class_1_FF6D62D5D7B9A27D : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::String* Field_1_5; // 0x38
	::System::String* Field_1_6; // 0x40
	::RPG::Client::TextID Field_1_7; // 0x48
	::System::UInt32 Field_1_8; // 0x58
	::RPG::Client::TextID Field_1_9; // 0x60
	::RPG::Client::TextID Field_1_10; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF6D62D5D7B9A27D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_70FC9BA3400F387E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_FF6D62D5D7B9A27D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_FF6D62D5D7B9A27D*&))((::PBYTE)hIl2Cpp + CLASS_1_FF6D62D5D7B9A27D_METHOD_1_70FC9BA3400F387E_OFFSET))(a1, a2);
	}
};
