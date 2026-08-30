#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleShowDither; }

#define CLASS_1_ED817AA5E26D3F7C_METHOD_1_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x16924D70)
#define CLASS_1_ED817AA5E26D3F7C_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x16925120)
#define CLASS_1_ED817AA5E26D3F7C__CTOR_OFFSET UNITYSDK_OFFSET(0x16924D10)

inline static constexpr unsigned int Class_1_ED817AA5E26D3F7C_TypeDefinitionIndex = 77934;

class Class_1_ED817AA5E26D3F7C : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraBattleShowDither* IGHAHBNLIJA; // 0x10
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x18
	::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x20
	::System::UInt32 LEKGODGIMCH; // 0x28
	::System::UInt32 AJLJMGEEKOJ; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ChimeraBattleShowDither* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleShowDither*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED817AA5E26D3F7C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED817AA5E26D3F7C_METHOD_1_4857357D5C1BFCE8_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED817AA5E26D3F7C_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}
};
