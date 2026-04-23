#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimMusicCueInfo; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMUSICINFO_METHOD_2_3CFD533F0A3F9422_OFFSET UNITYSDK_OFFSET(0x18910670)
#define RPG_GAMECORE_FIVEDIMMUSICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18910950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMusicInfo_TypeDefinitionIndex = 17878;

	class FiveDimMusicInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MusicEventName; // 0x10
		::System::String* MusicBeginEventName; // 0x18
		::System::String* MusicEndEventName; // 0x20
		::System::Single MusicTime; // 0x28
		::System::Single MusicLength; // 0x2C
		::System::Single BeginTrimOffset; // 0x30
		::System::Single BPM; // 0x34
		::Il2CppArray<::RPG::GameCore::FiveDimMusicCueInfo*>* CueInfos; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3CFD533F0A3F9422(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMusicInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMusicInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICINFO_METHOD_2_3CFD533F0A3F9422_OFFSET))(a1, a2);
		}
	};
}
