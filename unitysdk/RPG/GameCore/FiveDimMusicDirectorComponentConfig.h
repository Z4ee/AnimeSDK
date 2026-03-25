#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEffectPreloadConfig; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMUSICDIRECTORCOMPONENTCONFIG_METHOD_3_0E5558229A8ED0AF_OFFSET UNITYSDK_OFFSET(0x171FF1E0)
#define RPG_GAMECORE_FIVEDIMMUSICDIRECTORCOMPONENTCONFIG_METHOD_3_D5600382010E3B4D_OFFSET UNITYSDK_OFFSET(0x171FF250)
#define RPG_GAMECORE_FIVEDIMMUSICDIRECTORCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171FF230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMusicDirectorComponentConfig_TypeDefinitionIndex = 17272;

	class FiveDimMusicDirectorComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::String* ConfigPath; // 0x10
		::System::Boolean StartOnPlayerEnter; // 0x18
		::System::Boolean ResumeUIMenuBGMOnStop; // 0x19
		::System::Boolean SupportLoop; // 0x1A
		::RPG::GameCore::LittleGameEvent* OnMusicStart; // 0x20
		::RPG::GameCore::LittleGameEvent* OnMusicStop; // 0x28
		::RPG::GameCore::LittleGameEvent* OnMusicFinish; // 0x30
		::RPG::GameCore::LittleGameEvent* OnMusicPause; // 0x38
		::RPG::GameCore::LittleGameEvent* OnMusicResume; // 0x40
		::Il2CppArray<::RPG::GameCore::FiveDimEffectPreloadConfig*>* EffectPreloadConfigList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICDIRECTORCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0E5558229A8ED0AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMusicDirectorComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMusicDirectorComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICDIRECTORCOMPONENTCONFIG_METHOD_3_0E5558229A8ED0AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D5600382010E3B4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMusicDirectorComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMusicDirectorComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICDIRECTORCOMPONENTCONFIG_METHOD_3_D5600382010E3B4D_OFFSET))(a1, a2);
		}
	};
}
