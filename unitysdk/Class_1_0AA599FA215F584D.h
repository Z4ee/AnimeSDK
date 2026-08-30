#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateReijuType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_0AA599FA215F584D_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1CA7C430)
#define CLASS_1_0AA599FA215F584D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA7C960)

inline static constexpr unsigned int Class_1_0AA599FA215F584D_TypeDefinitionIndex = 11514;

class Class_1_0AA599FA215F584D : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* PHFPFCALNDJ; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* MDEBFIFOKHH; // 0x18
	::System::String* LBLJLNPBDPB; // 0x20
	::Il2CppArray<::System::UInt32>* BEOGEKDEPLO; // 0x28
	::System::UInt32 EFAIIOHKFGD; // 0x30
	::System::UInt32 GDLLGLFCEHC; // 0x34
	::RPG::GameCore::FateReijuType KJOAJDBDOBN; // 0x38
	::System::UInt32 IGOAKKNPDKK; // 0x3C
	::RPG::Client::TextID KBNHPKIOGLH; // 0x40
	::RPG::Client::TextID ENHOJEFAFNM; // 0x50
	::RPG::Client::TextID BACLIEMHMDK; // 0x60
	::RPG::Client::TextID GDLBCMFFGOI; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AA599FA215F584D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_0AA599FA215F584D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_0AA599FA215F584D*&))((::PBYTE)hIl2Cpp + CLASS_1_0AA599FA215F584D_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
