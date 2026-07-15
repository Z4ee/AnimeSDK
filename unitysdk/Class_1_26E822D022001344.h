#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MiniGameCollectCoin_CurveConfig; }

#define CLASS_1_26E822D022001344_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A8F4AB0)
#define CLASS_1_26E822D022001344__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F4B10)

inline static constexpr unsigned int Class_1_26E822D022001344_TypeDefinitionIndex = 40902;

class Class_1_26E822D022001344 : public ::System::Object
{
public:
	::RPG::GameCore::MiniGameCollectCoin_CurveConfig* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Single Field_1_3; // 0x20
	::System::Single Field_1_4; // 0x24
	::System::Single Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26E822D022001344__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26E822D022001344_CLEAR_OFFSET))(this);
	}
};
