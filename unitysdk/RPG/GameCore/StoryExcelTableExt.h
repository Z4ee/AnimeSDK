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

#define RPG_GAMECORE_STORYEXCELTABLEEXT_ENCRYPTION_1_OFFSET UNITYSDK_OFFSET(0xCEFBBA0)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_ENCRYPTION_OFFSET UNITYSDK_OFFSET(0xCEFBA00)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_1_OFFSET UNITYSDK_OFFSET(0xCEFBA90)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_2_OFFSET UNITYSDK_OFFSET(0xCEFBC30)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_3_OFFSET UNITYSDK_OFFSET(0xCEFBD40)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_4_OFFSET UNITYSDK_OFFSET(0xCEFBDE0)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_OFFSET UNITYSDK_OFFSET(0xCEFB800)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_MODIFIEDCUTSCENEPATHBYGENDER_1_OFFSET UNITYSDK_OFFSET(0xCEFBF80)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_MODIFIEDCUTSCENEPATHBYGENDER_OFFSET UNITYSDK_OFFSET(0xCEFBE80)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_PREFABORCONFIGENTITYPATH_OFFSET UNITYSDK_OFFSET(0xCEFC040)
#define RPG_GAMECORE_STORYEXCELTABLEEXT__GETPLAYERGENDER_OFFSET UNITYSDK_OFFSET(0xCEFB910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryExcelTableExt_TypeDefinitionIndex = 52753;

	class StoryExcelTableExt : public ::System::Object
	{
	public:
		static ::System::String* GetModifiedFileNameByPlayerGender(::RPG::GameCore::VideoConfigRow* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::VideoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_OFFSET))(a1);
		}

		static ::System::Boolean Encryption(::RPG::GameCore::VideoConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::VideoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_ENCRYPTION_OFFSET))(a1);
		}

		static ::System::String* GetModifiedFileNameByPlayerGender_1(::RPG::GameCore::LoopCGConfigRow* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::LoopCGConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_1_OFFSET))(a1);
		}

		static ::System::Boolean Encryption_1(::RPG::GameCore::LoopCGConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LoopCGConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_ENCRYPTION_1_OFFSET))(a1);
		}

		static ::System::String* GetModifiedFileNameByPlayerGender_2(::RPG::GameCore::GuideVideoConfigRow* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::GuideVideoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_2_OFFSET))(a1);
		}

		static ::System::String* GetModifiedFileNameByPlayerGender_3(::RPG::GameCore::VoiceConfigRow* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_3_OFFSET))(a1);
		}

		static ::System::String* GetModifiedFileNameByPlayerGender_4(::RPG::GameCore::SFXConfigRow* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::SFXConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_4_OFFSET))(a1);
		}

		static ::System::String* ModifiedCutScenePathByGender(::RPG::GameCore::CutSceneConfigRow* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::CutSceneConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_MODIFIEDCUTSCENEPATHBYGENDER_OFFSET))(a1);
		}

		static ::System::String* ModifiedCutScenePathByGender_1(::RPG::GameCore::CutSceneConfigRow* a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::CutSceneConfigRow*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_MODIFIEDCUTSCENEPATHBYGENDER_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GenderType _GetPlayerGender()
		{
			return ((::RPG::GameCore::GenderType(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT__GETPLAYERGENDER_OFFSET))();
		}

		static ::System::String* PrefabOrConfigEntityPath(::RPG::GameCore::StoryPropRow* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::StoryPropRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_PREFABORCONFIGENTITYPATH_OFFSET))(a1);
		}
	};
}
