#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattlePlayDestruction; }

#define CLASS_1_F10412671F374FAE_METHOD_1_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x12AA7E80)
#define CLASS_1_F10412671F374FAE_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x12AA82E0)
#define CLASS_1_F10412671F374FAE__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA7E20)

inline static constexpr unsigned int Class_1_F10412671F374FAE_TypeDefinitionIndex = 71897;

class Class_1_F10412671F374FAE : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraBattlePlayDestruction* Field_1_1; // 0x10
	::RPG::Client::Promises::Promise* Field_1_0; // 0x18
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_2; // 0x20
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_3; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ChimeraBattlePlayDestruction* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattlePlayDestruction*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F10412671F374FAE__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F10412671F374FAE_METHOD_1_146E6E50FAF07D8F_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F10412671F374FAE_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}
};
