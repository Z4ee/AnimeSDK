#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_4770AAB4DD7D317C_3_METHOD_1_1FA67F2466ED59EC_OFFSET UNITYSDK_OFFSET(0x1CE83DA0)
#define CLASS_1_4770AAB4DD7D317C_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE83FA0)

inline static constexpr unsigned int Class_1_4770AAB4DD7D317C_3_TypeDefinitionIndex = 13924;

class Class_1_4770AAB4DD7D317C_3 : public ::System::Object
{
public:
	::System::UInt32 HFFBGDNDBHC; // 0x10
	::System::UInt32 JAKLCIIEDON; // 0x14
	::System::UInt32 AHCGOKDLKHM; // 0x18
	::RPG::Client::TextID DNJCIDFBHPC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4770AAB4DD7D317C_3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FA67F2466ED59EC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_4770AAB4DD7D317C_3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_4770AAB4DD7D317C_3*&))((::PBYTE)hIl2Cpp + CLASS_1_4770AAB4DD7D317C_3_METHOD_1_1FA67F2466ED59EC_OFFSET))(a1, a2);
	}
};
