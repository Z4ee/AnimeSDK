#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattlePostEvent; }

#define CLASS_1_684F9F87C2815688_METHOD_1_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0xA769A60)
#define CLASS_1_684F9F87C2815688_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0xA769A20)
#define CLASS_1_684F9F87C2815688__CTOR_OFFSET UNITYSDK_OFFSET(0xA7699E0)

inline static constexpr unsigned int Class_1_684F9F87C2815688_TypeDefinitionIndex = 72920;

class Class_1_684F9F87C2815688 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* Field_1_0; // 0x10
	::RPG::GameCore::ChimeraBattlePostEvent* Field_1_1; // 0x18
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ChimeraBattlePostEvent* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattlePostEvent*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_684F9F87C2815688__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_684F9F87C2815688_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::System::Void Method_1_7F29568EA964E563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_684F9F87C2815688_METHOD_1_7F29568EA964E563_OFFSET))(this);
	}
};
