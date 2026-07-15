#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE51A_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MiniGameFlappyBirdConfig; }

#define CLASS_1_BB597C5921B42F68_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B1090C0)
#define CLASS_1_BB597C5921B42F68__CTOR_OFFSET UNITYSDK_OFFSET(0x1B109110)

inline static constexpr unsigned int Class_1_BB597C5921B42F68_TypeDefinitionIndex = 40793;

class Class_1_BB597C5921B42F68 : public ::System::Object
{
public:
	::RPG::GameCore::MiniGameFlappyBirdConfig* Field_1_0; // 0x10
	::Struct_2_52A902145F5BE51A_2 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB597C5921B42F68__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB597C5921B42F68_CLEAR_OFFSET))(this);
	}
};
