#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateAffixRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_09E0962946DC82E9_1_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1C96E050)
#define CLASS_1_09E0962946DC82E9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C96E470)

inline static constexpr unsigned int Class_1_09E0962946DC82E9_1_TypeDefinitionIndex = 11519;

class Class_1_09E0962946DC82E9_1 : public ::System::Object
{
public:
	::System::String* LBLJLNPBDPB; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* MDEBFIFOKHH; // 0x18
	::Il2CppArray<::System::UInt32>* BEOGEKDEPLO; // 0x20
	::RPG::Client::TextID KBNHPKIOGLH; // 0x28
	::RPG::Client::TextID IDABEFMAPFE; // 0x38
	::RPG::Client::TextID HEDNBIABAKP; // 0x48
	::System::UInt32 HNIMELBCBBJ; // 0x58
	::RPG::GameCore::FateAffixRarityType PMIEAEGJNMJ; // 0x5C
	::System::UInt32 EFAIIOHKFGD; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09E0962946DC82E9_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_09E0962946DC82E9_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_09E0962946DC82E9_1*&))((::PBYTE)hIl2Cpp + CLASS_1_09E0962946DC82E9_1_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
