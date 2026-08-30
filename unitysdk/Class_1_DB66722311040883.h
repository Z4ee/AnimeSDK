#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_DB66722311040883_METHOD_1_F6FF3DE94D09C840_OFFSET UNITYSDK_OFFSET(0x1B4AB2F0)
#define CLASS_1_DB66722311040883__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AB6F0)

inline static constexpr unsigned int Class_1_DB66722311040883_TypeDefinitionIndex = 11288;

class Class_1_DB66722311040883 : public ::System::Object
{
public:
	::System::String* PPEBOKHAFNL; // 0x10
	::System::String* HMFPPOIIKHL; // 0x18
	::System::String* GNCEJNFIOJP; // 0x20
	::System::UInt32 LEIDKFJDHMM; // 0x28
	::System::UInt32 CKOIGMMCPKH; // 0x2C
	::System::UInt32 DGHMGKCJAAF; // 0x30
	::System::UInt32 LIIPLGLNPGB; // 0x34
	::RPG::Client::TextID PPCOMAHNFOL; // 0x38
	::System::UInt32 PHFMCACHFIJ; // 0x48
	::System::UInt32 BGDFEPFLGOC; // 0x4C
	::System::Boolean GNDCCBNILML; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB66722311040883__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F6FF3DE94D09C840(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_DB66722311040883*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_DB66722311040883*&))((::PBYTE)hIl2Cpp + CLASS_1_DB66722311040883_METHOD_1_F6FF3DE94D09C840_OFFSET))(a1, a2);
	}
};
