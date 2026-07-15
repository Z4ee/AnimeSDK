#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MeshBound; }
namespace System { class String; }

#define CLASS_1_43BD383C98B4C0C5_185__CTOR_OFFSET UNITYSDK_OFFSET(0x14D7C390)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_185_TypeDefinitionIndex = 70507;

class Class_1_43BD383C98B4C0C5_185 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::RPG::GameCore::MeshBound* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x3C
	::System::Single Field_1_7; // 0x40
	::System::Single Field_1_8; // 0x44
	::System::Single Field_1_9; // 0x48
	::System::Int32 Field_1_10; // 0x4C
	::System::Single Field_1_11; // 0x50
	::System::Single Field_1_12; // 0x54
	::System::Single Field_1_13; // 0x58
	::System::Boolean Field_1_14; // 0x5C
	::System::Boolean Field_1_15; // 0x5D
	::System::Boolean Field_1_16; // 0x5E
	::System::Single Field_1_17; // 0x60
	::System::Single Field_1_18; // 0x64
	::System::Int32 Field_1_19; // 0x68
	::System::Single Field_1_20; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_185__CTOR_OFFSET))(this);
	}
};
