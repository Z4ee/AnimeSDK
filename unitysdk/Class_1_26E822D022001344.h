#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MiniGameCollectCoin_CurveConfig; }

#define CLASS_1_26E822D022001344_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C4AB9C0)
#define CLASS_1_26E822D022001344__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4ABA20)

inline static constexpr unsigned int Class_1_26E822D022001344_TypeDefinitionIndex = 41861;

class Class_1_26E822D022001344 : public ::System::Object
{
public:
	::RPG::GameCore::MiniGameCollectCoin_CurveConfig* LBAJEKMJFHH; // 0x10
	::System::Single NHJMKDHJNJE; // 0x18
	::System::Boolean FPDBMNIGPCB; // 0x1C
	::System::Single JJBOJONHNHJ; // 0x20
	::System::Single JEJEAABCFLB; // 0x24
	::System::Single EAGMNGIMPNG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26E822D022001344__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26E822D022001344_CLEAR_OFFSET))(this);
	}
};
