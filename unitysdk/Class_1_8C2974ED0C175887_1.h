#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_8C2974ED0C175887_1_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x1D9F9DD0)
#define CLASS_1_8C2974ED0C175887_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FA1B0)

inline static constexpr unsigned int Class_1_8C2974ED0C175887_1_TypeDefinitionIndex = 14127;

class Class_1_8C2974ED0C175887_1 : public ::System::Object
{
public:
	::System::String* FBKAMIHGLFK; // 0x10
	::Il2CppArray<::System::UInt32>* PCFNMMOAGLA; // 0x18
	::Il2CppArray<::System::UInt32>* OFABOLACEEN; // 0x20
	::System::String* LDIHBHDHOMF; // 0x28
	::System::UInt32 PHFMCACHFIJ; // 0x30
	::System::UInt32 JMEJCLEBFHN; // 0x34
	::RPG::Client::TextID LGPDIDLJFOI; // 0x38
	::RPG::Client::TextID GFOGDOBBJAF; // 0x48
	::System::UInt32 KEMBKKLCPBD; // 0x58
	::System::UInt32 FPGMJLNEJCF; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C2974ED0C175887_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_8C2974ED0C175887_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_8C2974ED0C175887_1*&))((::PBYTE)hIl2Cpp + CLASS_1_8C2974ED0C175887_1_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
