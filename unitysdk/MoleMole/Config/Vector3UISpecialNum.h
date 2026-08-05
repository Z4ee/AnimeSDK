#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseObjectUISpecialNum.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class UISpecialNumGroup; }

#define MOLEMOLE_CONFIG_VECTOR3UISPECIALNUM_GET_OFFSET UNITYSDK_OFFSET(0x1B4F4D90)
#define MOLEMOLE_CONFIG_VECTOR3UISPECIALNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D9D40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int Vector3UISpecialNum_TypeDefinitionIndex = 71495;

	class Vector3UISpecialNum : public ::MoleMole::Config::BaseObjectUISpecialNum
	{
	public:
		::UnityEngine::Vector3 value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VECTOR3UISPECIALNUM__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Get(::MoleMole::Config::UISpecialNumGroup* uiSpecialNumGroup)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Config::UISpecialNumGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VECTOR3UISPECIALNUM_GET_OFFSET))(this, uiSpecialNumGroup);
		}
	};
}
