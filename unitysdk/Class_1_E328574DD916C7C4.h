#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_E328574DD916C7C4_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x1D5C61D0)
#define CLASS_1_E328574DD916C7C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C6430)

inline static constexpr unsigned int Class_1_E328574DD916C7C4_TypeDefinitionIndex = 15223;

class Class_1_E328574DD916C7C4 : public ::System::Object
{
public:
	::System::String* FIFINLKGEAC; // 0x10
	::System::UInt32 HBEDCNGOIMI; // 0x18
	::System::UInt32 OPFOHDKJNJI; // 0x1C
	::RPG::Client::TextID OENAMINOLLF; // 0x20
	::System::UInt32 LBJFALJAINI; // 0x30
	::System::UInt32 IECMJPALEOA; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E328574DD916C7C4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_E328574DD916C7C4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_E328574DD916C7C4*&))((::PBYTE)hIl2Cpp + CLASS_1_E328574DD916C7C4_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
