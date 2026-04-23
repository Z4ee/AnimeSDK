#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleCheckWorkFinish; }

#define CLASS_1_94D4383B73886880_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x1195B3C0)
#define CLASS_1_94D4383B73886880_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x1195B310)
#define CLASS_1_94D4383B73886880__CTOR_OFFSET UNITYSDK_OFFSET(0x1195B2B0)

inline static constexpr unsigned int Class_1_94D4383B73886880_TypeDefinitionIndex = 71895;

class Class_1_94D4383B73886880 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* Field_1_0; // 0x10
	::RPG::GameCore::ChimeraBattleCheckWorkFinish* Field_1_1; // 0x18
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ChimeraBattleCheckWorkFinish* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleCheckWorkFinish*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_94D4383B73886880__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94D4383B73886880_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94D4383B73886880_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}
};
