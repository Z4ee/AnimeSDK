#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/PoseDataType.h"
#include "unitysdk/System/Object.h"

namespace RPGTools::Timeline::Emotion { class EmoBakedPoseData; }
namespace RPGTools::Timeline::Emotion { class EmoData; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_EMOTION_POSEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB61ED0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int PoseData_TypeDefinitionIndex = 39518;

	class PoseData : public ::System::Object
	{
	public:
		::RPGTools::Timeline::Emotion::PoseDataType DataType; // 0x10
		::System::String* SpecificClipPath; // 0x18
		::System::Single Length; // 0x20
		::System::String* BakeDataPath; // 0x28
		::Il2CppArray<::RPGTools::Timeline::Emotion::EmoData*>* EmoLst; // 0x30
		::System::Boolean WithGender; // 0x38
		::RPGTools::Timeline::Emotion::EmoBakedPoseData* BakeData; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_POSEDATA__CTOR_OFFSET))(this);
		}
	};
}
