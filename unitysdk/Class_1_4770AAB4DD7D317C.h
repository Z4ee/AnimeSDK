#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_4770AAB4DD7D317C_METHOD_1_1FA67F2466ED59EC_OFFSET UNITYSDK_OFFSET(0x1CB4E250)
#define CLASS_1_4770AAB4DD7D317C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB4E4F0)

inline static constexpr unsigned int Class_1_4770AAB4DD7D317C_TypeDefinitionIndex = 11471;

class Class_1_4770AAB4DD7D317C : public ::System::Object
{
public:
	::System::UInt32 JIDGCHINCKC; // 0x10
	::RPG::Client::TextID GAOMJHOKMMG; // 0x18
	::RPG::Client::TextID IODFDGLGOJI; // 0x28
	::RPG::Client::TextID FMCNCMENCFF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4770AAB4DD7D317C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FA67F2466ED59EC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_4770AAB4DD7D317C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_4770AAB4DD7D317C*&))((::PBYTE)hIl2Cpp + CLASS_1_4770AAB4DD7D317C_METHOD_1_1FA67F2466ED59EC_OFFSET))(a1, a2);
	}
};
