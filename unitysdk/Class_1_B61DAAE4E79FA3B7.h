#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleShowBubbleTalk; }

#define CLASS_1_B61DAAE4E79FA3B7_METHOD_1_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x17867280)
#define CLASS_1_B61DAAE4E79FA3B7_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x178677B0)
#define CLASS_1_B61DAAE4E79FA3B7__CTOR_OFFSET UNITYSDK_OFFSET(0x17867220)

inline static constexpr unsigned int Class_1_B61DAAE4E79FA3B7_TypeDefinitionIndex = 74447;

class Class_1_B61DAAE4E79FA3B7 : public ::System::Object
{
public:
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_0; // 0x10
	::RPG::GameCore::ChimeraBattleShowBubbleTalk* Field_1_1; // 0x18
	::RPG::Client::Promises::Promise* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ChimeraBattleShowBubbleTalk* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleShowBubbleTalk*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B61DAAE4E79FA3B7__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_821BBDC04720A2EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B61DAAE4E79FA3B7_METHOD_1_821BBDC04720A2EB_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B61DAAE4E79FA3B7_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}
};
