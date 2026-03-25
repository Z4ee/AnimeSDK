#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CutSceneConfigRow; }
namespace RPG::GameCore { class GuideVideoConfigRow; }
namespace RPG::GameCore { class LoopCGConfigRow; }
namespace RPG::GameCore { class SFXConfigRow; }
namespace RPG::GameCore { class StoryPropRow; }
namespace RPG::GameCore { class VideoConfigRow; }
namespace RPG::GameCore { class VoiceConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_STORYEXCELTABLEEXT_ENCRYPTION_1_OFFSET UNITYSDK_OFFSET(0xAA50940)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_ENCRYPTION_OFFSET UNITYSDK_OFFSET(0xAA507A0)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_1_OFFSET UNITYSDK_OFFSET(0xAA50830)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_2_OFFSET UNITYSDK_OFFSET(0xAA509D0)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_3_OFFSET UNITYSDK_OFFSET(0xAA50AE0)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_4_OFFSET UNITYSDK_OFFSET(0xAA50B80)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_OFFSET UNITYSDK_OFFSET(0xAA505A0)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_MODIFIEDCUTSCENEPATHBYGENDER_1_OFFSET UNITYSDK_OFFSET(0xAA50D20)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_MODIFIEDCUTSCENEPATHBYGENDER_OFFSET UNITYSDK_OFFSET(0xAA50C20)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_PREFABORCONFIGENTITYPATH_OFFSET UNITYSDK_OFFSET(0xAA50DE0)
#define RPG_GAMECORE_STORYEXCELTABLEEXT__GETPLAYERGENDER_OFFSET UNITYSDK_OFFSET(0xAA506B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryExcelTableExt_TypeDefinitionIndex = 45435;

	class StoryExcelTableExt : public ::System::Object
	{
	public:
		static ::System::String* GetModifiedFileNameByPlayerGender(::RPG::GameCore::VideoConfigRow* row)
		{
			return ((::System::String*(*)(::RPG::GameCore::VideoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_OFFSET))(row);
		}

		static ::System::Boolean Encryption(::RPG::GameCore::VideoConfigRow* row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::VideoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_ENCRYPTION_OFFSET))(row);
		}

		static ::System::String* GetModifiedFileNameByPlayerGender_1(::RPG::GameCore::LoopCGConfigRow* row)
		{
			return ((::System::String*(*)(::RPG::GameCore::LoopCGConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_1_OFFSET))(row);
		}

		static ::System::Boolean Encryption_1(::RPG::GameCore::LoopCGConfigRow* row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LoopCGConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_ENCRYPTION_1_OFFSET))(row);
		}

		static ::System::String* GetModifiedFileNameByPlayerGender_2(::RPG::GameCore::GuideVideoConfigRow* row)
		{
			return ((::System::String*(*)(::RPG::GameCore::GuideVideoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_2_OFFSET))(row);
		}

		static ::System::String* GetModifiedFileNameByPlayerGender_3(::RPG::GameCore::VoiceConfigRow* row)
		{
			return ((::System::String*(*)(::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_3_OFFSET))(row);
		}

		static ::System::String* GetModifiedFileNameByPlayerGender_4(::RPG::GameCore::SFXConfigRow* row)
		{
			return ((::System::String*(*)(::RPG::GameCore::SFXConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_4_OFFSET))(row);
		}

		static ::System::String* ModifiedCutScenePathByGender(::RPG::GameCore::CutSceneConfigRow* row)
		{
			return ((::System::String*(*)(::RPG::GameCore::CutSceneConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_MODIFIEDCUTSCENEPATHBYGENDER_OFFSET))(row);
		}

		static ::System::String* ModifiedCutScenePathByGender_1(::RPG::GameCore::CutSceneConfigRow* row, ::RPG::GameCore::GenderType myGender)
		{
			return ((::System::String*(*)(::RPG::GameCore::CutSceneConfigRow*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_MODIFIEDCUTSCENEPATHBYGENDER_1_OFFSET))(row, myGender);
		}

		static ::RPG::GameCore::GenderType _GetPlayerGender()
		{
			return ((::RPG::GameCore::GenderType(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT__GETPLAYERGENDER_OFFSET))();
		}

		static ::System::String* PrefabOrConfigEntityPath(::RPG::GameCore::StoryPropRow* row)
		{
			return ((::System::String*(*)(::RPG::GameCore::StoryPropRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_PREFABORCONFIGENTITYPATH_OFFSET))(row);
		}
	};
}
