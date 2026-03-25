#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RollingSubtitlesPageType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESCONTENT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1749E010)
#define RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1749E200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceRollingSubtitlesContent_TypeDefinitionIndex = 22458;

	class PerformanceRollingSubtitlesContent : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RollingSubtitlesPageType pageType; // 0x10
		::RPG::Client::TextID pageText; // 0x18
		::Il2CppArray<::RPG::Client::TextID>* pageTextList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESCONTENT__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PerformanceRollingSubtitlesContent*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceRollingSubtitlesContent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEROLLINGSUBTITLESCONTENT_FROMBINARY_OFFSET))(array, val);
		}
	};
}
