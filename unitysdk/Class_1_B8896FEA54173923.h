#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraPostSoundEvent; }

#define CLASS_1_B8896FEA54173923_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x13D25A10)
#define CLASS_1_B8896FEA54173923_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x13D25A50)
#define CLASS_1_B8896FEA54173923__CTOR_OFFSET UNITYSDK_OFFSET(0x13D259C0)

inline static constexpr unsigned int Class_1_B8896FEA54173923_TypeDefinitionIndex = 72933;

class Class_1_B8896FEA54173923 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* Field_1_0; // 0x10
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_1; // 0x18
	::RPG::GameCore::ChimeraPostSoundEvent* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ChimeraPostSoundEvent* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraPostSoundEvent*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_B8896FEA54173923__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8896FEA54173923_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8896FEA54173923_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}
};
