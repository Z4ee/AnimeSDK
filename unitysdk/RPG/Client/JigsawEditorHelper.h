#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/JigsawEditorHelper_JigsawPoseType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_JIGSAWEDITORHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x194F47D0)

namespace RPG::Client
{
	inline static constexpr unsigned int JigsawEditorHelper_TypeDefinitionIndex = 68469;

	class JigsawEditorHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single StartTime; // 0x0
		// static const ::System::Single EndTime; // 0x0
		// static const ::System::String* TEXTURE_PATH; // 0x0
		// static const ::System::String* PUZZLE_PATH; // 0x0
		// static const ::System::String* POSECLIP_PATH; // 0x0
		// static const ::System::String* PreviewFramePath; // 0x0
		::RPG::Client::JigsawEditorHelper_JigsawPoseType PoseType; // 0x18
		::UnityEngine::GameObject* PuzzleBoard; // 0x20
		::System::String* PicturePath; // 0x28
		::UnityEngine::Texture2D* Picture; // 0x30
		::UnityEngine::Texture2D* BackgroundPicture; // 0x38
		::System::Boolean AutoMaskForTreasureBox; // 0x40
		::System::Boolean SaveOriginalPicToDisk; // 0x41
		::System::String* OriginalPicSavePath; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEDITORHELPER__CTOR_OFFSET))(this);
		}
	};
}
