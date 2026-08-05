#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96472A087C9608F3.h"
#include "unitysdk/Enum_3_D683D7EE2072834D.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOUIENABLESOUNDPLAYER_METHOD_5_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x136E0440)
#define MOLEMOLE_MONOUIENABLESOUNDPLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x136E03F0)
#define MOLEMOLE_MONOUIENABLESOUNDPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x136E06B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIEnableSoundPlayer_TypeDefinitionIndex = 40331;

	class MonoUIEnableSoundPlayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean isCustom; // 0x18
		::Enum_3_D683D7EE2072834D enableSoundType; // 0x1C
		::System::Int32 enableSoundID; // 0x20
		::System::Int32 soundSystemID; // 0x24
		::Enum_3_96472A087C9608F3 soundSystemType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIENABLESOUNDPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIENABLESOUNDPLAYER_ONENABLE_OFFSET))(this);
		}

		::System::Void Method_5_E11AC65AA0DC2249()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIENABLESOUNDPLAYER_METHOD_5_E11AC65AA0DC2249_OFFSET))(this);
		}
	};
}
