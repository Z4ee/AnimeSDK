#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }

#define CLASS_1_1DF96C60D012843F_METHOD_1_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x8CC0CF0)
#define CLASS_1_1DF96C60D012843F__CTOR_OFFSET UNITYSDK_OFFSET(0x8CC0DD0)

inline static constexpr unsigned int Class_1_1DF96C60D012843F_TypeDefinitionIndex = 42910;

class Class_1_1DF96C60D012843F : public ::System::Object
{
public:
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* Field_1_3; // 0x10
	::System::Single Field_1_2; // 0x18
	::System::Single Field_1_0; // 0x1C
	::System::Single Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DF96C60D012843F__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_FC5102551AF3CB1A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DF96C60D012843F_METHOD_1_FC5102551AF3CB1A_OFFSET))(this);
	}
};
