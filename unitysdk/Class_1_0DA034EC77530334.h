#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateTraitMode.h"
#include "unitysdk/RPG/GameCore/FateTraitTag.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_0DA034EC77530334_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1D07F400)
#define CLASS_1_0DA034EC77530334__CTOR_OFFSET UNITYSDK_OFFSET(0x1D07F8B0)

inline static constexpr unsigned int Class_1_0DA034EC77530334_TypeDefinitionIndex = 11523;

class Class_1_0DA034EC77530334 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x10
	::Il2CppArray<::System::UInt32>* EPHLMOECOHP; // 0x18
	::System::String* LBLJLNPBDPB; // 0x20
	::RPG::Client::TextID KBNHPKIOGLH; // 0x28
	::RPG::Client::TextID GODMIEOJGAE; // 0x38
	::RPG::Client::TextID JFKADAONNOD; // 0x48
	::System::UInt32 BNCKFPAGOMF; // 0x58
	::System::UInt32 PDMPABKDHDI; // 0x5C
	::RPG::GameCore::FateTraitMode FCGFFAJIBKA; // 0x60
	::RPG::GameCore::FateTraitTag NHALJPDONCP; // 0x64
	::System::UInt32 ENJOALLODBG; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DA034EC77530334__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_0DA034EC77530334*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_0DA034EC77530334*&))((::PBYTE)hIl2Cpp + CLASS_1_0DA034EC77530334_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
