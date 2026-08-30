#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_AAB3B6B2986BC437_METHOD_1_F6FF3DE94D09C840_OFFSET UNITYSDK_OFFSET(0xCA417F0)
#define CLASS_1_AAB3B6B2986BC437__CTOR_OFFSET UNITYSDK_OFFSET(0xCA41B20)

inline static constexpr unsigned int Class_1_AAB3B6B2986BC437_TypeDefinitionIndex = 13856;

class Class_1_AAB3B6B2986BC437 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* KPNIGDPANOC; // 0x10
	::Il2CppArray<::System::UInt32>* KOAGHJCOOGA; // 0x18
	::System::String* ONDPOGOJIID; // 0x20
	::System::UInt32 GGKPLJJMBBA; // 0x28
	::System::UInt32 AEONKNDCDKN; // 0x2C
	::System::UInt32 LHCNEHAHKHM; // 0x30
	::System::UInt32 GDEOCHKAEMO; // 0x34
	::RPG::Client::TextID LLLJACLJAEP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAB3B6B2986BC437__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F6FF3DE94D09C840(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_AAB3B6B2986BC437*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_AAB3B6B2986BC437*&))((::PBYTE)hIl2Cpp + CLASS_1_AAB3B6B2986BC437_METHOD_1_F6FF3DE94D09C840_OFFSET))(a1, a2);
	}
};
