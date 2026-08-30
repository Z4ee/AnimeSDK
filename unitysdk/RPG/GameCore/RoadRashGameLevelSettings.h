#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelSettings.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROADRASHGAMELEVELSETTINGS_METHOD_3_5D42FCD333AB9F5B_OFFSET UNITYSDK_OFFSET(0x1D3B60D0)
#define RPG_GAMECORE_ROADRASHGAMELEVELSETTINGS_METHOD_3_EBF47CE000ED4958_OFFSET UNITYSDK_OFFSET(0x1D3B6100)
#define RPG_GAMECORE_ROADRASHGAMELEVELSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B61F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoadRashGameLevelSettings_TypeDefinitionIndex = 16811;

	class RoadRashGameLevelSettings : public ::RPG::GameCore::LittleGameLevelSettings
	{
	public:
		::System::UInt32 TrackID; // 0x10
		::System::String* PrefabPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMELEVELSETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5D42FCD333AB9F5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoadRashGameLevelSettings*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoadRashGameLevelSettings*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMELEVELSETTINGS_METHOD_3_5D42FCD333AB9F5B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EBF47CE000ED4958(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoadRashGameLevelSettings* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoadRashGameLevelSettings*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROADRASHGAMELEVELSETTINGS_METHOD_3_EBF47CE000ED4958_OFFSET))(a1, a2);
		}
	};
}
