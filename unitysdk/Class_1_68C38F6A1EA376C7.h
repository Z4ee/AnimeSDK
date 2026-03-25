#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class PlayChimeraAnimation; }

#define CLASS_1_68C38F6A1EA376C7_METHOD_1_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0xC50AD50)
#define CLASS_1_68C38F6A1EA376C7_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0xC50AD10)
#define CLASS_1_68C38F6A1EA376C7__CTOR_OFFSET UNITYSDK_OFFSET(0xC50ACC0)

inline static constexpr unsigned int Class_1_68C38F6A1EA376C7_TypeDefinitionIndex = 63863;

class Class_1_68C38F6A1EA376C7 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* Field_1_4; // 0x10
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_3; // 0x18
	::RPG::GameCore::PlayChimeraAnimation* Field_1_0; // 0x20
	::System::UInt32 Field_1_2; // 0x28
	::System::UInt32 Field_1_1; // 0x2C

	::System::Void _ctor(::RPG::GameCore::PlayChimeraAnimation* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayChimeraAnimation*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_68C38F6A1EA376C7__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68C38F6A1EA376C7_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::System::Void Method_1_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68C38F6A1EA376C7_METHOD_1_6E6682ED9FD6F719_OFFSET))(this);
	}
};
