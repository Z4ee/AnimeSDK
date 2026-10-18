#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateTraitType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_F1C4ADA7BCD78942_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x1D0143E0)
#define CLASS_1_F1C4ADA7BCD78942__CTOR_OFFSET UNITYSDK_OFFSET(0x1D014BE0)

inline static constexpr unsigned int Class_1_F1C4ADA7BCD78942_TypeDefinitionIndex = 11521;

class Class_1_F1C4ADA7BCD78942 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* BEOGEKDEPLO; // 0x10
	::Il2CppArray<::System::String*>* CCBONMNIPPL; // 0x18
	::System::String* MFGKFAMKMFH; // 0x20
	::System::String* ELNGIJIGJOO; // 0x28
	::System::String* AJLLAEEDBJL; // 0x30
	::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x38
	::Il2CppArray<::System::UInt32>* KCBDHKEKNHD; // 0x40
	::RPG::Client::TextID NLIPGMKKIED; // 0x48
	::RPG::Client::TextID HCCMEBGFMCE; // 0x58
	::System::UInt32 BNCKFPAGOMF; // 0x68
	::RPG::GameCore::FateTraitType FBFCPNADPKB; // 0x6C
	::RPG::Client::TextID NHLFBFKBOEK; // 0x70
	::RPG::Client::TextID DHKNKNGGJCK; // 0x80
	::RPG::Client::TextID PDDPFOBKIEN; // 0x90
	::RPG::Client::TextID KBNHPKIOGLH; // 0xA0
	::System::UInt32 ODEKADIBFAO; // 0xB0
	::System::UInt32 PDMDDELEAAG; // 0xB4
	::RPG::Client::TextID DFMLAIADNGI; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1C4ADA7BCD78942__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_F1C4ADA7BCD78942*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_F1C4ADA7BCD78942*&))((::PBYTE)hIl2Cpp + CLASS_1_F1C4ADA7BCD78942_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};
