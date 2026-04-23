#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimMusicInfo; }

#define RPG_GAMECORE_FIVEDIMMUSICDIRECTORCONFIG_METHOD_2_9DBC7427C243D652_OFFSET UNITYSDK_OFFSET(0x18910400)
#define RPG_GAMECORE_FIVEDIMMUSICDIRECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18910500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMusicDirectorConfig_TypeDefinitionIndex = 17879;

	class FiveDimMusicDirectorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimMusicInfo*>* MusicInfos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICDIRECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9DBC7427C243D652(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMusicDirectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMusicDirectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICDIRECTORCONFIG_METHOD_2_9DBC7427C243D652_OFFSET))(a1, a2);
		}
	};
}
