#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_4770AAB4DD7D317C_1_METHOD_1_1FA67F2466ED59EC_OFFSET UNITYSDK_OFFSET(0x1DA1E0E0)
#define CLASS_1_4770AAB4DD7D317C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1E330)

inline static constexpr unsigned int Class_1_4770AAB4DD7D317C_1_TypeDefinitionIndex = 11654;

class Class_1_4770AAB4DD7D317C_1 : public ::System::Object
{
public:
	::System::UInt32 AEONKNDCDKN; // 0x10
	::System::UInt32 PHFMCACHFIJ; // 0x14
	::RPG::Client::TextID MONJPEJECGL; // 0x18
	::RPG::Client::TextID LOGJBKBLNEM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4770AAB4DD7D317C_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FA67F2466ED59EC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_4770AAB4DD7D317C_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_4770AAB4DD7D317C_1*&))((::PBYTE)hIl2Cpp + CLASS_1_4770AAB4DD7D317C_1_METHOD_1_1FA67F2466ED59EC_OFFSET))(a1, a2);
	}
};
