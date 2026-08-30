#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PerformanceRollingSubtitlesPage; }

#define RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D31F5B0)
#define RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D31F750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceRollingSubtitlesConfig_TypeDefinitionIndex = 24133;

	class PerformanceRollingSubtitlesConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID ActThePartTextmap; // 0x10
		::Il2CppArray<::RPG::GameCore::PerformanceRollingSubtitlesPage*>* pageList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceRollingSubtitlesConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceRollingSubtitlesConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
