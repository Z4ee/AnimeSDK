#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FadeAnimationData.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_23007A01AA84D4D9;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOUIEXPANDANDSHRINKSELFCONFIG_AWAKE_OFFSET UNITYSDK_OFFSET(0x12FA98D0)
#define MOLEMOLE_MONOUIEXPANDANDSHRINKSELFCONFIG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12FA9A40)
#define MOLEMOLE_MONOUIEXPANDANDSHRINKSELFCONFIG_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x12FA9830)
#define MOLEMOLE_MONOUIEXPANDANDSHRINKSELFCONFIG_SETSIZERATIOBYPROCESSOR_OFFSET UNITYSDK_OFFSET(0x12FA9B60)
#define MOLEMOLE_MONOUIEXPANDANDSHRINKSELFCONFIG_SETSIZERATIOBYSIZEDELTA_OFFSET UNITYSDK_OFFSET(0x12FA9A90)
#define MOLEMOLE_MONOUIEXPANDANDSHRINKSELFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12FA9C20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIExpandAndShrinkSelfConfig_TypeDefinitionIndex = 80629;

	class MonoUIExpandAndShrinkSelfConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Vector2 _initialSizeDelta; // 0x58
		::UnityEngine::RectTransform* _rectTransform; // 0x60
		::Class_2_23007A01AA84D4D9* _sizeProcessor; // 0x68
		::System::Action* _setSizeRatio; // 0x70
		::UnityEngine::Vector2 sizeRatio; // 0x78
		::UnityEngine::Vector2 _lastSizeRatio; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::FadeAnimationData>* FadeConfig; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIEXPANDANDSHRINKSELFCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIEXPANDANDSHRINKSELFCONFIG_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIEXPANDANDSHRINKSELFCONFIG_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIEXPANDANDSHRINKSELFCONFIG_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetSizeRatioBySizeDelta()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIEXPANDANDSHRINKSELFCONFIG_SETSIZERATIOBYSIZEDELTA_OFFSET))(this);
		}

		::System::Void SetSizeRatioByProcessor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIEXPANDANDSHRINKSELFCONFIG_SETSIZERATIOBYPROCESSOR_OFFSET))(this);
		}
	};
}
