#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MoveToPositionUpdateMode.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_3C72212260A8C076.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_EF7A5DF238C10B96_METHOD_1_B5EA5DD8B4C0957C_OFFSET UNITYSDK_OFFSET(0x18A697F0)
#define CLASS_1_EF7A5DF238C10B96__CTOR_OFFSET UNITYSDK_OFFSET(0x18A69870)

inline static constexpr unsigned int Class_1_EF7A5DF238C10B96_TypeDefinitionIndex = 57119;

class Class_1_EF7A5DF238C10B96 : public ::System::Object
{
public:
	::System::Single FMHMAHCNDGB; // 0x10
	::System::Single CKIBNLPPIMG; // 0x14
	::RPG::MVector3 FJBPOFJPFNP; // 0x18
	::RPG::GameCore::MoveToPositionUpdateMode HGDKNBJHDAP; // 0x24
	::System::Single NNNAGHMNFKB; // 0x28
	::Struct_2_3C72212260A8C076 AAKHOJDBHPH; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF7A5DF238C10B96__CTOR_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_B5EA5DD8B4C0957C()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF7A5DF238C10B96_METHOD_1_B5EA5DD8B4C0957C_OFFSET))(this);
	}
};
