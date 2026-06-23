#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole { class UICloudController_UIRTCItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICLOUDCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17A59610)
#define MOLEMOLE_UICLOUDCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17A59590)
#define MOLEMOLE_UICLOUDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A59690)

namespace MoleMole
{
	inline static constexpr unsigned int UICloudController_TypeDefinitionIndex = 40111;

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
