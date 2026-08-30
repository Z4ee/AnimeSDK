#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LOOPGENERATOR_RUNTIMESLIDER_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD58E7B0)
#define RPG_CLIENT_LOOPGENERATOR_RUNTIMESLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD58F1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerator_RuntimeSlider_TypeDefinitionIndex = 72891;

	class LoopGenerator_RuntimeSlider : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* TargetGo; // 0x10
		::System::Single Length; // 0x18
		::UnityEngine::Vector2 Extents; // 0x1C
		::System::Boolean IsUsed; // 0x24
		::System::Int32 TemplateIndex; // 0x28
		::System::Single PositionOnTrack; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_RUNTIMESLIDER__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATOR_RUNTIMESLIDER_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}
	};
}
