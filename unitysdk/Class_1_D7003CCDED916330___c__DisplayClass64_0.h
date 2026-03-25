#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_D7003CCDED916330___C__DISPLAYCLASS64_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11599400)
#define CLASS_1_D7003CCDED916330___C__DISPLAYCLASS64_0__PRELOADMOTIONCLIPS_B__0_OFFSET UNITYSDK_OFFSET(0x1159B2E0)

inline static constexpr unsigned int Class_1_D7003CCDED916330___c__DisplayClass64_0_TypeDefinitionIndex = 46137;

class Class_1_D7003CCDED916330___c__DisplayClass64_0 : public ::System::Object
{
public:
	::System::Action* onLoadFinish; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330___C__DISPLAYCLASS64_0__CTOR_OFFSET))(this);
	}

	::System::Void _PreloadMotionClips_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330___C__DISPLAYCLASS64_0__PRELOADMOTIONCLIPS_B__0_OFFSET))(this);
	}
};
