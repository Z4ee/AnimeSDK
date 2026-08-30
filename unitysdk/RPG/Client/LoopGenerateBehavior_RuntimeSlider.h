#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_RUNTIMESLIDER_METHOD_1_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x18641520)
#define RPG_CLIENT_LOOPGENERATEBEHAVIOR_RUNTIMESLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18641B70)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateBehavior_RuntimeSlider_TypeDefinitionIndex = 70876;

	class LoopGenerateBehavior_RuntimeSlider : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* TargetGo; // 0x10
		::System::Single Length; // 0x18
		::UnityEngine::Vector2 Extents; // 0x1C
		::System::Boolean IsUsed; // 0x24
		::System::Int32 TemplateIndex; // 0x28
		::System::Int32 ConfigIndex; // 0x2C
		::System::Boolean IsEndpoint; // 0x30
		::System::Int32 EndpointGroupId; // 0x34
		::System::Single PositionOnTrack; // 0x38
		::System::Single HomePosition; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_RUNTIMESLIDER__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_32B2368221A04800(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEBEHAVIOR_RUNTIMESLIDER_METHOD_1_32B2368221A04800_OFFSET))(this, a1);
		}
	};
}
