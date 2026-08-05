#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Photo/PlayableGraphAttributeSource.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"
#include "unitysdk/Struct_2_D0A3658446FCD9A2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_PLAYABLEGRAPHFLOATATTRIBUTECONFIG_APPLY_OFFSET UNITYSDK_OFFSET(0x18094E20)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHFLOATATTRIBUTECONFIG_GETMULTIPLIERCURVENAME_OFFSET UNITYSDK_OFFSET(0x18094D90)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHFLOATATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x180951D0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphFloatAttributeConfig_TypeDefinitionIndex = 64000;

	class PlayableGraphFloatAttributeConfig : public ::System::Object
	{
	public:
		::System::Single baseValue; // 0x10
		::MoleMole::Photo::PlayableGraphAttributeSource source; // 0x14
		::System::Single multiplierValue; // 0x18
		::System::String* multiplierProperty; // 0x20
		::System::Boolean blendShapeProperty; // 0x28
		::PipelineCamera::SerializableHashString multiplierCurve; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHFLOATATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		::Foundation::Unreal::FName GetMultiplierCurveName()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHFLOATATTRIBUTECONFIG_GETMULTIPLIERCURVENAME_OFFSET))(this);
		}

		::System::Void Apply(::Struct_2_D0A3658446FCD9A2& attribute, ::UnityEngine::Animator* animator)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_D0A3658446FCD9A2&, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHFLOATATTRIBUTECONFIG_APPLY_OFFSET))(this, attribute, animator);
		}
	};
}
