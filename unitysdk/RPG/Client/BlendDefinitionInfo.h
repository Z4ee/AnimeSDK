#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CameraBlendCurve; }

#define RPG_CLIENT_BLENDDEFINITIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC95D6B0)

namespace RPG::Client
{
	inline static constexpr unsigned int BlendDefinitionInfo_TypeDefinitionIndex = 69494;

	class BlendDefinitionInfo : public ::System::Object
	{
	public:
		::System::Int32 ID; // 0x10
		::Cinemachine::CinemachineBlendDefinition_Style Style; // 0x14
		::System::Single Time; // 0x18
		::RPG::Client::CameraBlendCurve* CurveObject; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLENDDEFINITIONINFO__CTOR_OFFSET))(this);
		}
	};
}
