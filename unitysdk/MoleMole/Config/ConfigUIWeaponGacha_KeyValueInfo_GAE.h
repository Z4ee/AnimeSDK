#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_CONFIGUIWEAPONGACHA_KEYVALUEINFO_GAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5621E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIWeaponGacha_KeyValueInfo_GAE_TypeDefinitionIndex = 40968;

	class ConfigUIWeaponGacha_KeyValueInfo_GAE : public ::System::Object
	{
	public:
		::System::Int32 keyInst; // 0x10
		::UnityEngine::Vector3 valueInst; // 0x14

		::System::Void _ctor(::System::Int32 _keyInst, ::UnityEngine::Vector3 _valueInst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIWEAPONGACHA_KEYVALUEINFO_GAE__CTOR_OFFSET))(this, _keyInst, _valueInst);
		}
	};
}
