#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_8427E1359F2A63E4_METHOD_1_1F29F81CADD13A09_OFFSET UNITYSDK_OFFSET(0x1D6C9890)
#define CLASS_1_8427E1359F2A63E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C9C70)

inline static constexpr unsigned int Class_1_8427E1359F2A63E4_TypeDefinitionIndex = 11237;

class Class_1_8427E1359F2A63E4 : public ::System::Object
{
public:
	::System::String* OLOIFNNLKJP; // 0x10
	::System::UInt32 LKOIJINLBBK; // 0x18
	::System::UInt32 BOKJJKFCFME; // 0x1C
	::System::UInt32 OBDINDDLCIO; // 0x20
	::System::UInt32 PNEIDAGEBOC; // 0x24
	::RPG::Client::TextID OENAMINOLLF; // 0x28
	::RPG::Client::TextID NMAHGFAPENI; // 0x38
	::RPG::Client::TextID NHALJPDONCP; // 0x48
	::System::UInt32 NIDFIGFJJLL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8427E1359F2A63E4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1F29F81CADD13A09(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_8427E1359F2A63E4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_8427E1359F2A63E4*&))((::PBYTE)hIl2Cpp + CLASS_1_8427E1359F2A63E4_METHOD_1_1F29F81CADD13A09_OFFSET))(a1, a2);
	}
};
