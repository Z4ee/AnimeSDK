#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateAffixRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_09E0962946DC82E9_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1DA2E670)
#define CLASS_1_09E0962946DC82E9__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2EA90)

inline static constexpr unsigned int Class_1_09E0962946DC82E9_TypeDefinitionIndex = 11517;

class Class_1_09E0962946DC82E9 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* BEOGEKDEPLO; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* MDEBFIFOKHH; // 0x18
	::System::String* LBLJLNPBDPB; // 0x20
	::System::UInt32 BELHHHIHCEF; // 0x28
	::RPG::GameCore::FateAffixRarityType PMIEAEGJNMJ; // 0x2C
	::RPG::Client::TextID IDABEFMAPFE; // 0x30
	::RPG::Client::TextID KBNHPKIOGLH; // 0x40
	::System::UInt32 EFAIIOHKFGD; // 0x50
	::RPG::Client::TextID HEDNBIABAKP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09E0962946DC82E9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_09E0962946DC82E9*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_09E0962946DC82E9*&))((::PBYTE)hIl2Cpp + CLASS_1_09E0962946DC82E9_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
