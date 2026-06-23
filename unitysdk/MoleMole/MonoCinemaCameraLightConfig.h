#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18300C90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCinemaCameraLightConfig_TypeDefinitionIndex = 66648;

	class MonoCinemaCameraLightConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::UnityEngine::GameObject*>* lightDict; // 0x58
		::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::UnityEngine::GameObject*>* darkDict; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::CinemaCameraPosEnum, ::UnityEngine::GameObject*>* effectDict; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
