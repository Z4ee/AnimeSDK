#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraSetAttachPointActive; }

#define CLASS_1_20D6F7AF5B3DC318_METHOD_1_8E9E3E0D1D6E6E24_OFFSET UNITYSDK_OFFSET(0x10B16150)
#define CLASS_1_20D6F7AF5B3DC318_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x10B16110)
#define CLASS_1_20D6F7AF5B3DC318__CTOR_OFFSET UNITYSDK_OFFSET(0x10B160D0)

inline static constexpr unsigned int Class_1_20D6F7AF5B3DC318_TypeDefinitionIndex = 63866;

class Class_1_20D6F7AF5B3DC318 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* Field_1_4; // 0x10
	::RPG::GameCore::ChimeraSetAttachPointActive* Field_1_0; // 0x18
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_1; // 0x20
	::System::UInt32 Field_1_2; // 0x28
	::System::UInt32 Field_1_3; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ChimeraSetAttachPointActive* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraSetAttachPointActive*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_20D6F7AF5B3DC318__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D6F7AF5B3DC318_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::System::Void Method_1_8E9E3E0D1D6E6E24()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D6F7AF5B3DC318_METHOD_1_8E9E3E0D1D6E6E24_OFFSET))(this);
	}
};
