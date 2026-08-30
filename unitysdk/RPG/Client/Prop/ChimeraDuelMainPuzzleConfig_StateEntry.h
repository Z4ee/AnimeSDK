#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleStateType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLECONFIG_STATEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xDC1C560)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleConfig_StateEntry_TypeDefinitionIndex = 77833;

	class ChimeraDuelMainPuzzleConfig_StateEntry : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType State; // 0x10
		::UnityEngine::GameObject* Prefab; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLECONFIG_STATEENTRY__CTOR_OFFSET))(this);
		}
	};
}
