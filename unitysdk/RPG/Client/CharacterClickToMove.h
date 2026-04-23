#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_A0580152EB393340;

#define RPG_CLIENT_CHARACTERCLICKTOMOVE_START_OFFSET UNITYSDK_OFFSET(0x9F67C30)
#define RPG_CLIENT_CHARACTERCLICKTOMOVE_UPDATE_OFFSET UNITYSDK_OFFSET(0x9F67D40)
#define RPG_CLIENT_CHARACTERCLICKTOMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F68130)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterClickToMove_TypeDefinitionIndex = 63050;

	class CharacterClickToMove : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_2_A0580152EB393340* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCLICKTOMOVE__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCLICKTOMOVE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERCLICKTOMOVE_UPDATE_OFFSET))(this);
		}
	};
}
