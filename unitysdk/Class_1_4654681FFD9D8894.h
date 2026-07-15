#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraWorkFireBullet; }

#define CLASS_1_4654681FFD9D8894_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x15254D10)
#define CLASS_1_4654681FFD9D8894_METHOD_1_CD28994AFE636FFF_OFFSET UNITYSDK_OFFSET(0x15254D50)
#define CLASS_1_4654681FFD9D8894__CTOR_OFFSET UNITYSDK_OFFSET(0x15254CC0)
#define CLASS_1_4654681FFD9D8894__START_B__2_0_OFFSET UNITYSDK_OFFSET(0x15254F70)

inline static constexpr unsigned int Class_1_4654681FFD9D8894_TypeDefinitionIndex = 74455;

class Class_1_4654681FFD9D8894 : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraWorkFireBullet* Field_1_0; // 0x10
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_1; // 0x18
	::RPG::Client::Promises::Promise* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ChimeraWorkFireBullet* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraWorkFireBullet*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_4654681FFD9D8894__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4654681FFD9D8894_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::System::Void Method_1_CD28994AFE636FFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4654681FFD9D8894_METHOD_1_CD28994AFE636FFF_OFFSET))(this);
	}

	::System::Void _Start_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4654681FFD9D8894__START_B__2_0_OFFSET))(this);
	}
};
