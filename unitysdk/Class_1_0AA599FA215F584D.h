#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateReijuType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_0AA599FA215F584D_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1CEFC810)
#define CLASS_1_0AA599FA215F584D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEFCD40)

inline static constexpr unsigned int Class_1_0AA599FA215F584D_TypeDefinitionIndex = 11514;

class Class_1_0AA599FA215F584D : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* PHFPFCALNDJ; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* MDEBFIFOKHH; // 0x18
	::Il2CppArray<::System::UInt32>* BEOGEKDEPLO; // 0x20
	::System::String* LBLJLNPBDPB; // 0x28
	::RPG::Client::TextID BACLIEMHMDK; // 0x30
	::RPG::Client::TextID GDLBCMFFGOI; // 0x40
	::System::UInt32 IGOAKKNPDKK; // 0x50
	::RPG::GameCore::FateReijuType KJOAJDBDOBN; // 0x54
	::RPG::Client::TextID KBNHPKIOGLH; // 0x58
	::System::UInt32 GDLLGLFCEHC; // 0x68
	::System::UInt32 EFAIIOHKFGD; // 0x6C
	::RPG::Client::TextID ENHOJEFAFNM; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AA599FA215F584D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_0AA599FA215F584D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_0AA599FA215F584D*&))((::PBYTE)hIl2Cpp + CLASS_1_0AA599FA215F584D_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
