#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_4770AAB4DD7D317C_2_METHOD_1_1FA67F2466ED59EC_OFFSET UNITYSDK_OFFSET(0x183CF830)
#define CLASS_1_4770AAB4DD7D317C_2__CTOR_OFFSET UNITYSDK_OFFSET(0x183CFA30)

inline static constexpr unsigned int Class_1_4770AAB4DD7D317C_2_TypeDefinitionIndex = 13200;

class Class_1_4770AAB4DD7D317C_2 : public ::System::Object
{
public:
	::RPG::Client::TextID Field_1_2; // 0x10
	::System::UInt32 Field_1_1; // 0x20
	::System::UInt32 Field_1_0; // 0x24
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4770AAB4DD7D317C_2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FA67F2466ED59EC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_4770AAB4DD7D317C_2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_4770AAB4DD7D317C_2*&))((::PBYTE)hIl2Cpp + CLASS_1_4770AAB4DD7D317C_2_METHOD_1_1FA67F2466ED59EC_OFFSET))(a1, a2);
	}
};
