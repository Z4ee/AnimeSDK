#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MoveToPositionUpdateMode.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_3C72212260A8C076.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_EF7A5DF238C10B96_METHOD_1_B5EA5DD8B4C0957C_OFFSET UNITYSDK_OFFSET(0x13FFBC00)
#define CLASS_1_EF7A5DF238C10B96__CTOR_OFFSET UNITYSDK_OFFSET(0x13FFBC80)

inline static constexpr unsigned int Class_1_EF7A5DF238C10B96_TypeDefinitionIndex = 53183;

class Class_1_EF7A5DF238C10B96 : public ::System::Object
{
public:
	::Struct_2_3C72212260A8C076 Field_1_0; // 0x10
	::RPG::GameCore::MoveToPositionUpdateMode Field_1_1; // 0x30
	::System::Single Field_1_2; // 0x34
	::System::Single Field_1_3; // 0x38
	::System::Single Field_1_4; // 0x3C
	::RPG::MVector3 Field_1_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF7A5DF238C10B96__CTOR_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_B5EA5DD8B4C0957C()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF7A5DF238C10B96_METHOD_1_B5EA5DD8B4C0957C_OFFSET))(this);
	}
};
