#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CRPCAMERABLENDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCFE3AB0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraBlendConfig_TypeDefinitionIndex = 45188;

	class CRPCameraBlendConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::VCameraBlendType BlendType; // 0x10
		::System::String* CustomCurveName; // 0x18
		::System::Single BlendTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABLENDCONFIG__CTOR_OFFSET))(this);
		}
	};
}
