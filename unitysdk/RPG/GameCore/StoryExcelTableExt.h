#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/RPG/GameCore/VideoEncryptionMethod.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CutSceneConfigRow; }
namespace RPG::GameCore { class GuideVideoConfigRow; }
namespace RPG::GameCore { class LoopCGConfigRow; }
namespace RPG::GameCore { class SFXConfigRow; }
namespace RPG::GameCore { class StoryPropRow; }
namespace RPG::GameCore { class VideoConfigRow; }
namespace RPG::GameCore { class VoiceConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_STORYEXCELTABLEEXT_ENCRYPTION_1_OFFSET UNITYSDK_OFFSET(0x119C57C0)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_ENCRYPTION_OFFSET UNITYSDK_OFFSET(0x119C5590)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_GETENCRYPTIONMETHOD_1_OFFSET UNITYSDK_OFFSET(0x119C5850)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_GETENCRYPTIONMETHOD_OFFSET UNITYSDK_OFFSET(0x119C5620)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_1_OFFSET UNITYSDK_OFFSET(0x119C56B0)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_2_OFFSET UNITYSDK_OFFSET(0x119C58E0)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_3_OFFSET UNITYSDK_OFFSET(0x119C59F0)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_4_OFFSET UNITYSDK_OFFSET(0x119C5A90)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_OFFSET UNITYSDK_OFFSET(0x119C5390)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_MODIFIEDCUTSCENEPATHBYGENDER_1_OFFSET UNITYSDK_OFFSET(0x119C5C30)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_MODIFIEDCUTSCENEPATHBYGENDER_OFFSET UNITYSDK_OFFSET(0x119C5B30)
#define RPG_GAMECORE_STORYEXCELTABLEEXT_PREFABORCONFIGENTITYPATH_OFFSET UNITYSDK_OFFSET(0x119C5CF0)
#define RPG_GAMECORE_STORYEXCELTABLEEXT__GETPLAYERGENDER_OFFSET UNITYSDK_OFFSET(0x119C54A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryExcelTableExt_TypeDefinitionIndex = 56685;

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

		static ::RPG::GameCore::VideoEncryptionMethod GetEncryptionMethod(::RPG::GameCore::VideoConfigRow* a1)
		{
			return ((::RPG::GameCore::VideoEncryptionMethod(*)(::RPG::GameCore::VideoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_GETENCRYPTIONMETHOD_OFFSET))(a1);
		}

		static ::System::String* GetModifiedFileNameByPlayerGender_1(::RPG::GameCore::LoopCGConfigRow* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::LoopCGConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_GETMODIFIEDFILENAMEBYPLAYERGENDER_1_OFFSET))(a1);
		}

		static ::System::Boolean Encryption_1(::RPG::GameCore::LoopCGConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LoopCGConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_ENCRYPTION_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::VideoEncryptionMethod GetEncryptionMethod_1(::RPG::GameCore::LoopCGConfigRow* a1)
		{
			return ((::RPG::GameCore::VideoEncryptionMethod(*)(::RPG::GameCore::LoopCGConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYEXCELTABLEEXT_GETENCRYPTIONMETHOD_1_OFFSET))(a1);
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
