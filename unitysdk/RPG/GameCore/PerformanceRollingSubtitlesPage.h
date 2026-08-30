#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RollingSubtitlesDisplayType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PerformanceRollingSubtitlesContent; }
namespace RPG::GameCore { class PerformanceRollingSubtitlesFullScreenEffectParam; }
namespace RPG::GameCore { class PerformanceRollingSubtitlesScrollEffectParam; }

#define RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESPAGE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D31FB20)
#define RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D31FCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceRollingSubtitlesPage_TypeDefinitionIndex = 24132;

	class PerformanceRollingSubtitlesPage : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RollingSubtitlesDisplayType displayMode; // 0x10
		::RPG::GameCore::PerformanceRollingSubtitlesFullScreenEffectParam* fullScreenEffectParam; // 0x18
		::RPG::GameCore::PerformanceRollingSubtitlesScrollEffectParam* scrollEffectParam; // 0x20
		::Il2CppArray<::RPG::GameCore::PerformanceRollingSubtitlesContent*>* pageContent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceRollingSubtitlesPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceRollingSubtitlesPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESPAGE_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
