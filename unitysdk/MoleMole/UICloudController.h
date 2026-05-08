#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole { class UICloudController_UIRTCItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICLOUDCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15EDA7E0)
#define MOLEMOLE_UICLOUDCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15EDA760)
#define MOLEMOLE_UICLOUDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15EDA860)

namespace MoleMole
{
	inline static constexpr unsigned int UICloudController_TypeDefinitionIndex = 50796;

	class UICloudController : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UICloudController_UIRTCItem*>* UIRTCItems; // 0x58
		::System::Boolean IsTriggerEvent; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICLOUDCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICLOUDCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICLOUDCONTROLLER_ONDISABLE_OFFSET))(this);
		}
	};
}
