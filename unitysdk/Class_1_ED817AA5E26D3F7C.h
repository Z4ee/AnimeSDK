#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleShowDither; }

#define CLASS_1_ED817AA5E26D3F7C_METHOD_1_40E03D354D1ACC85_OFFSET UNITYSDK_OFFSET(0x88C5BE0)
#define CLASS_1_ED817AA5E26D3F7C_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x88C5F90)
#define CLASS_1_ED817AA5E26D3F7C__CTOR_OFFSET UNITYSDK_OFFSET(0x88C5B80)

inline static constexpr unsigned int Class_1_ED817AA5E26D3F7C_TypeDefinitionIndex = 63855;

class Class_1_ED817AA5E26D3F7C : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraBattleShowDither* Field_1_1; // 0x10
	::RPG::Client::Promises::Promise* Field_1_0; // 0x18
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_2; // 0x20
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_3; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ChimeraBattleShowDither* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleShowDither*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED817AA5E26D3F7C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_40E03D354D1ACC85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED817AA5E26D3F7C_METHOD_1_40E03D354D1ACC85_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED817AA5E26D3F7C_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}
};
