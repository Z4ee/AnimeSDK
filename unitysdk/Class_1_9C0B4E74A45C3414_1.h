#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_9C0B4E74A45C3414_1_METHOD_1_F6FF3DE94D09C840_OFFSET UNITYSDK_OFFSET(0x1CB6AC60)
#define CLASS_1_9C0B4E74A45C3414_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB6AFD0)

inline static constexpr unsigned int Class_1_9C0B4E74A45C3414_1_TypeDefinitionIndex = 12385;

class Class_1_9C0B4E74A45C3414_1 : public ::System::Object
{
public:
	::System::String* EBLHFPKFNOB; // 0x10
	::System::String* IOLJNBOEIPI; // 0x18
	::System::String* OHANIOHKHMG; // 0x20
	::System::UInt32 GMCBNNKJAGJ; // 0x28
	::System::UInt32 PHFMCACHFIJ; // 0x2C
	::RPG::Client::TextID OENAMINOLLF; // 0x30
	::System::UInt32 DIFINBBBPHM; // 0x40
	::System::UInt32 HPJHKACDIMB; // 0x44
	::RPG::Client::TextID HKPPAJKICII; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C0B4E74A45C3414_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F6FF3DE94D09C840(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_9C0B4E74A45C3414_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_9C0B4E74A45C3414_1*&))((::PBYTE)hIl2Cpp + CLASS_1_9C0B4E74A45C3414_1_METHOD_1_F6FF3DE94D09C840_OFFSET))(a1, a2);
	}
};
