#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_OPENWORLD_PVSRUNTIMEREPLAYSAMPLERCHECKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC312BE0)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int PVSRuntimeReplaySamplerCheckInfo_TypeDefinitionIndex = 68856;

	class PVSRuntimeReplaySamplerCheckInfo : public ::System::Object
	{
	public:
		::System::String* samplerName; // 0x10
		::System::Boolean hasTargetVisibilityInfo; // 0x18
		::System::Single visibility; // 0x1C
		::System::String* samplerType; // 0x20
		::System::Int32 samplerIDInVolume; // 0x28
		::System::String* volumeName; // 0x30
		::UnityEngine::Vector3 samplerPosition; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_PVSRUNTIMEREPLAYSAMPLERCHECKINFO__CTOR_OFFSET))(this);
		}
	};
}
