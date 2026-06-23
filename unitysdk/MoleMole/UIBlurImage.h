#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBlurBaseImage.h"

namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UIBLURIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x15E67190)
#define MOLEMOLE_UIBLURIMAGE_HANDLEEVENTS_OFFSET UNITYSDK_OFFSET(0x15E67C70)
#define MOLEMOLE_UIBLURIMAGE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15E674A0)
#define MOLEMOLE_UIBLURIMAGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15E67230)
#define MOLEMOLE_UIBLURIMAGE_UPDATE_OFFSET UNITYSDK_OFFSET(0x15E676C0)
#define MOLEMOLE_UIBLURIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x15E67E10)
#define MOLEMOLE_UIBLURIMAGE___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x15E67EB0)
#define MOLEMOLE_UIBLURIMAGE___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15E67F40)
#define MOLEMOLE_UIBLURIMAGE___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15E67F50)

namespace MoleMole
{
	inline static constexpr unsigned int UIBlurImage_TypeDefinitionIndex = 57725;

	class UIBlurImage : public ::MoleMole::UIBlurBaseImage
	{
	public:
		// static const ::System::String* matPath; // 0x0
		::System::Boolean Field_10_1; // 0x170
		::System::Boolean Field_10_2; // 0x171
		::System::Single Field_10_3; // 0x174
		::System::Boolean disableOnConsole; // 0x178

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURIMAGE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURIMAGE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURIMAGE_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURIMAGE_UPDATE_OFFSET))(this);
		}

		::System::Void HandleEvents(::System::EventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURIMAGE_HANDLEEVENTS_OFFSET))(this, a1);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURIMAGE___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURIMAGE___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURIMAGE___BASE_ONENABLE_OFFSET))(this);
		}
	};
}
