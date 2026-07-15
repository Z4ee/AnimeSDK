#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_CAMERASOMATODYNAMICANCHOROFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC5B5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraSomatoDynamicAnchorOffset_TypeDefinitionIndex = 66595;

	class CameraSomatoDynamicAnchorOffset : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterSomatoType SomatoType; // 0x10
		::UnityEngine::Vector3 AnchorOffset; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERASOMATODYNAMICANCHOROFFSET__CTOR_OFFSET))(this);
		}
	};
}
