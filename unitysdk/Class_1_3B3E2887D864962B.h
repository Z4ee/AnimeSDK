#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_3B3E2887D864962B_METHOD_1_13A4856CD0BBDB3F_OFFSET UNITYSDK_OFFSET(0x1CE4C430)
#define CLASS_1_3B3E2887D864962B__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE4C640)

inline static constexpr unsigned int Class_1_3B3E2887D864962B_TypeDefinitionIndex = 11313;

class Class_1_3B3E2887D864962B : public ::System::Object
{
public:
	::System::String* OOLEAPLDIEA; // 0x10
	::RPG::Client::TextID PEPOHJHNFHF; // 0x18
	::Enum_3_0A3761FE34514D6C LLBDOPKHHEB; // 0x28
	::System::UInt32 PHFMCACHFIJ; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B3E2887D864962B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_13A4856CD0BBDB3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_3B3E2887D864962B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_3B3E2887D864962B*&))((::PBYTE)hIl2Cpp + CLASS_1_3B3E2887D864962B_METHOD_1_13A4856CD0BBDB3F_OFFSET))(a1, a2);
	}
};
