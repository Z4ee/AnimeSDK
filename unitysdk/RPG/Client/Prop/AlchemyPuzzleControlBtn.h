#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/AlchemyPuzzleControlBtnOperation.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PROP_ALCHEMYPUZZLECONTROLBTN__CTOR_OFFSET UNITYSDK_OFFSET(0xDBD2F90)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AlchemyPuzzleControlBtn_TypeDefinitionIndex = 77737;

	class AlchemyPuzzleControlBtn : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::AlchemyPuzzleControlBtnOperation ButtonType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYPUZZLECONTROLBTN__CTOR_OFFSET))(this);
		}
	};
}
