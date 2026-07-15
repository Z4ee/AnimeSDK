#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/VCMask.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_CUSTOMCRPSAMPLESETINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18085270)

namespace RPG::Client
{
	inline static constexpr unsigned int CustomCRPSampleSetings_TypeDefinitionIndex = 66972;

	class CustomCRPSampleSetings : public ::System::Object
	{
	public:
		::System::String* RenderMaskEffectUniqueName; // 0x10
		::System::Boolean UseSampleCamera; // 0x18
		::UnityEngine::Camera* SampleCamera; // 0x20
		::System::String* SampleCameraAnimPath; // 0x28
		::RPG::CustomRP::VCMask BindVCMask; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMCRPSAMPLESETINGS__CTOR_OFFSET))(this);
		}
	};
}
