#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MoveToPositionUpdateMode.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_3C72212260A8C076.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_EF7A5DF238C10B96_METHOD_1_B5EA5DD8B4C0957C_OFFSET UNITYSDK_OFFSET(0xECCAEE0)
#define CLASS_1_EF7A5DF238C10B96__CTOR_OFFSET UNITYSDK_OFFSET(0xECCAF60)

inline static constexpr unsigned int Class_1_EF7A5DF238C10B96_TypeDefinitionIndex = 52483;

class Class_1_EF7A5DF238C10B96 : public ::System::Object
{
public:
	::System::Single Field_1_3; // 0x10
	::System::Single Field_1_4; // 0x14
	::Struct_2_3C72212260A8C076 Field_1_5; // 0x18
	::System::Single Field_1_2; // 0x38
	::RPG::MVector3 Field_1_1; // 0x3C
	::RPG::GameCore::MoveToPositionUpdateMode Field_1_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF7A5DF238C10B96__CTOR_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_B5EA5DD8B4C0957C()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF7A5DF238C10B96_METHOD_1_B5EA5DD8B4C0957C_OFFSET))(this);
	}
};
