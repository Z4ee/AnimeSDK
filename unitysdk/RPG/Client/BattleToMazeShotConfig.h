#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_BATTLETOMAZESHOTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19FC2190)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleToMazeShotConfig_TypeDefinitionIndex = 66596;

	class BattleToMazeShotConfig : public ::System::Object
	{
	public:
		::System::Single LifeTime; // 0x10
		::UnityEngine::Vector3 PosOffset; // 0x14
		::UnityEngine::Vector3 AimOffset; // 0x20
		::System::Single BlendTime; // 0x2C
		::System::String* BlendCurve; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLETOMAZESHOTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
