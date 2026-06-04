#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_117;
class Class_1_AEF88F1677ADBBD5;
namespace RPG::GameCore { class MiniGameCollectCoinConfig; }

#define CLASS_1_AABEA64A2553532E_CLEAR_OFFSET UNITYSDK_OFFSET(0x18E4C250)
#define CLASS_1_AABEA64A2553532E__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4C340)

inline static constexpr unsigned int Class_1_AABEA64A2553532E_TypeDefinitionIndex = 39971;

class Class_1_AABEA64A2553532E : public ::System::Object
{
public:
	::RPG::GameCore::MiniGameCollectCoinConfig* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_117* Field_1_1; // 0x18
	::Class_1_AEF88F1677ADBBD5* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AABEA64A2553532E__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AABEA64A2553532E_CLEAR_OFFSET))(this);
	}
};
