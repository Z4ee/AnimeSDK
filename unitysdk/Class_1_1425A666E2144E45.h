#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraWorkLeave; }

#define CLASS_1_1425A666E2144E45_METHOD_1_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0xE469D10)
#define CLASS_1_1425A666E2144E45_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0xE469CD0)
#define CLASS_1_1425A666E2144E45__CTOR_OFFSET UNITYSDK_OFFSET(0xE469C90)

inline static constexpr unsigned int Class_1_1425A666E2144E45_TypeDefinitionIndex = 63871;

class Class_1_1425A666E2144E45 : public ::System::Object
{
public:
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_1; // 0x10
	::RPG::GameCore::ChimeraWorkLeave* Field_1_0; // 0x18
	::RPG::Client::Promises::Promise* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::ChimeraWorkLeave* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraWorkLeave*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_1425A666E2144E45__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1425A666E2144E45_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::System::Void Method_1_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1425A666E2144E45_METHOD_1_704FAC4600717444_OFFSET))(this);
	}
};
