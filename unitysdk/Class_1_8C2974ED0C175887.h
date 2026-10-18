#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_8C2974ED0C175887_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x1D2ABA80)
#define CLASS_1_8C2974ED0C175887__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B3DB0)

inline static constexpr unsigned int Class_1_8C2974ED0C175887_TypeDefinitionIndex = 14432;

class Class_1_8C2974ED0C175887 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* ACECCFPKEHJ; // 0x10
	::System::String* OLOIFNNLKJP; // 0x18
	::System::String* KILFKBDMJGI; // 0x20
	::RPG::Client::TextID NMAHGFAPENI; // 0x28
	::System::UInt32 PHFMCACHFIJ; // 0x38
	::System::UInt32 CANEJABOMFI; // 0x3C
	::RPG::Client::TextID OENAMINOLLF; // 0x40
	::System::UInt32 HDFPMFOJCLD; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C2974ED0C175887__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_8C2974ED0C175887*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_8C2974ED0C175887*&))((::PBYTE)hIl2Cpp + CLASS_1_8C2974ED0C175887_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
