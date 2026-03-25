#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_118;
class Class_1_2CF216D11FB56512;
namespace RPG::GameCore { class MiniGameCollectCoinConfig; }

#define CLASS_1_AABEA64A2553532E_CLEAR_OFFSET UNITYSDK_OFFSET(0x1677D380)
#define CLASS_1_AABEA64A2553532E__CTOR_OFFSET UNITYSDK_OFFSET(0x1677D460)

inline static constexpr unsigned int Class_1_AABEA64A2553532E_TypeDefinitionIndex = 33411;

class Class_1_AABEA64A2553532E : public ::System::Object
{
public:
	::RPG::GameCore::MiniGameCollectCoinConfig* Field_1_1; // 0x10
	::Class_1_2CF216D11FB56512* Field_1_2; // 0x18
	::Class_0_16E4307DCC419505_118* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AABEA64A2553532E__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AABEA64A2553532E_CLEAR_OFFSET))(this);
	}
};
