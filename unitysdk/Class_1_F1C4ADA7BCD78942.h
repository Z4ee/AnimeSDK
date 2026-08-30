#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateTraitType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_F1C4ADA7BCD78942_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x1CA8D540)
#define CLASS_1_F1C4ADA7BCD78942__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA8DD40)

inline static constexpr unsigned int Class_1_F1C4ADA7BCD78942_TypeDefinitionIndex = 11505;

class Class_1_F1C4ADA7BCD78942 : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* CCBONMNIPPL; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x18
	::System::String* MFGKFAMKMFH; // 0x20
	::Il2CppArray<::System::UInt32>* KCBDHKEKNHD; // 0x28
	::Il2CppArray<::System::UInt32>* BEOGEKDEPLO; // 0x30
	::System::String* ELNGIJIGJOO; // 0x38
	::System::String* AJLLAEEDBJL; // 0x40
	::RPG::Client::TextID NHLFBFKBOEK; // 0x48
	::RPG::Client::TextID PDDPFOBKIEN; // 0x58
	::RPG::Client::TextID KBNHPKIOGLH; // 0x68
	::RPG::Client::TextID HCCMEBGFMCE; // 0x78
	::System::UInt32 BNCKFPAGOMF; // 0x88
	::System::UInt32 PDMDDELEAAG; // 0x8C
	::RPG::GameCore::FateTraitType FBFCPNADPKB; // 0x90
	::System::UInt32 ODEKADIBFAO; // 0x94
	::RPG::Client::TextID DFMLAIADNGI; // 0x98
	::RPG::Client::TextID DHKNKNGGJCK; // 0xA8
	::RPG::Client::TextID NLIPGMKKIED; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1C4ADA7BCD78942__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_F1C4ADA7BCD78942*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_F1C4ADA7BCD78942*&))((::PBYTE)hIl2Cpp + CLASS_1_F1C4ADA7BCD78942_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};
