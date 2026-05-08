#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F40B865AC61AB8D7.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGTIMEDRIVENATTACKCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x16B42CD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTimeDrivenAttackCollider_TypeDefinitionIndex = 58636;

	class ConfigTimeDrivenAttackCollider : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 PosOffset; // 0x10
		::UnityEngine::Vector3 AngleOffset; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTIMEDRIVENATTACKCOLLIDER__CTOR_OFFSET))(this);
		}
	};
}
