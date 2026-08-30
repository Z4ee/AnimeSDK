#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }

#define CLASS_1_1DF96C60D012843F_METHOD_1_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x15713630)
#define CLASS_1_1DF96C60D012843F__CTOR_OFFSET UNITYSDK_OFFSET(0x15713710)

inline static constexpr unsigned int Class_1_1DF96C60D012843F_TypeDefinitionIndex = 53296;

class Class_1_1DF96C60D012843F : public ::System::Object
{
public:
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* EABKOHGCHFP; // 0x10
	::System::Single ENHAHMOIFEI; // 0x18
	::System::Single BFPEKOGAALP; // 0x1C
	::System::Single PMEDPCIPCIH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DF96C60D012843F__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_FC5102551AF3CB1A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DF96C60D012843F_METHOD_1_FC5102551AF3CB1A_OFFSET))(this);
	}
};
