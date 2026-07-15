#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OVERRIDEPERFORMANCEENDSCREENCUT_METHOD_3_832E75E2D8D45FEB_OFFSET UNITYSDK_OFFSET(0x1BB089F0)
#define RPG_GAMECORE_OVERRIDEPERFORMANCEENDSCREENCUT_METHOD_3_A59BE0778272B158_OFFSET UNITYSDK_OFFSET(0x1BB089B0)
#define RPG_GAMECORE_OVERRIDEPERFORMANCEENDSCREENCUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB089E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverridePerformanceEndScreenCut_TypeDefinitionIndex = 21112;

	class OverridePerformanceEndScreenCut : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean EndWithScreenCut; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEPERFORMANCEENDSCREENCUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A59BE0778272B158(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverridePerformanceEndScreenCut*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverridePerformanceEndScreenCut*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEPERFORMANCEENDSCREENCUT_METHOD_3_A59BE0778272B158_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_832E75E2D8D45FEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverridePerformanceEndScreenCut* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverridePerformanceEndScreenCut*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEPERFORMANCEENDSCREENCUT_METHOD_3_832E75E2D8D45FEB_OFFSET))(a1, a2);
		}
	};
}
