#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TIMEREWINDGLOBALUNSELECTABLE_METHOD_3_784135F9FB750B95_OFFSET UNITYSDK_OFFSET(0x1909BB00)
#define RPG_GAMECORE_TIMEREWINDGLOBALUNSELECTABLE_METHOD_3_CDDDCAB258594664_OFFSET UNITYSDK_OFFSET(0x1909BB80)
#define RPG_GAMECORE_TIMEREWINDGLOBALUNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1909BB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindGlobalUnselectable_TypeDefinitionIndex = 19656;

	class TimeRewindGlobalUnselectable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDGLOBALUNSELECTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_784135F9FB750B95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindGlobalUnselectable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindGlobalUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDGLOBALUNSELECTABLE_METHOD_3_784135F9FB750B95_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CDDDCAB258594664(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindGlobalUnselectable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindGlobalUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDGLOBALUNSELECTABLE_METHOD_3_CDDDCAB258594664_OFFSET))(a1, a2);
		}
	};
}
