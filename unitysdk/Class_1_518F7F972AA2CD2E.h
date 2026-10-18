#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_518F7F972AA2CD2E_METHOD_1_1FAE1389D4EFD9B1_OFFSET UNITYSDK_OFFSET(0x1D0AAB90)
#define CLASS_1_518F7F972AA2CD2E__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0AAE90)

inline static constexpr unsigned int Class_1_518F7F972AA2CD2E_TypeDefinitionIndex = 14404;

class Class_1_518F7F972AA2CD2E : public ::System::Object
{
public:
	::System::String* CHMJNLMHJBA; // 0x10
	::System::String* OLOIFNNLKJP; // 0x18
	::System::String* OLJDOBFJLOM; // 0x20
	::System::String* EGBGCKNLHDH; // 0x28
	::System::UInt32 IODLAAIECIG; // 0x30
	::RPG::Client::TextID GEANMKLMFEI; // 0x38
	::System::UInt32 PBLDLDIEFNC; // 0x48
	::System::UInt32 FNBGMDDOHEA; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_518F7F972AA2CD2E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FAE1389D4EFD9B1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_518F7F972AA2CD2E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_518F7F972AA2CD2E*&))((::PBYTE)hIl2Cpp + CLASS_1_518F7F972AA2CD2E_METHOD_1_1FAE1389D4EFD9B1_OFFSET))(a1, a2);
	}
};
