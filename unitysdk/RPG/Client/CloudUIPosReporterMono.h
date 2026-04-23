#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CloudUIBattlePosRegion.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_5D9FADE393C1BEBA_Class_1_3ABCC41A05D06339;
class Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8;
class Class_1_63C450F2FF228316;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CLOUDUIPOSREPORTERMONO_CLEARDEBUGGUI_OFFSET UNITYSDK_OFFSET(0xA0AB3C0)
#define RPG_CLIENT_CLOUDUIPOSREPORTERMONO_GETISVALID_OFFSET UNITYSDK_OFFSET(0xA0AABE0)
#define RPG_CLIENT_CLOUDUIPOSREPORTERMONO_GETRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA0AAD40)
#define RPG_CLIENT_CLOUDUIPOSREPORTERMONO_GETUIELEMENTSCREENRECT_1_OFFSET UNITYSDK_OFFSET(0xA0AADD0)
#define RPG_CLIENT_CLOUDUIPOSREPORTERMONO_GETUIELEMENTSCREENRECT_OFFSET UNITYSDK_OFFSET(0xA0AAD80)
#define RPG_CLIENT_CLOUDUIPOSREPORTERMONO_START_OFFSET UNITYSDK_OFFSET(0xA0AAB60)
#define RPG_CLIENT_CLOUDUIPOSREPORTERMONO_UPDATEDEBUGGUI_OFFSET UNITYSDK_OFFSET(0xA0AB0D0)
#define RPG_CLIENT_CLOUDUIPOSREPORTERMONO__CTOR_OFFSET UNITYSDK_OFFSET(0xA0AB430)

namespace RPG::Client
{
	inline static constexpr unsigned int CloudUIPosReporterMono_TypeDefinitionIndex = 55225;

	class CloudUIPosReporterMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_ShowDebugGUI()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CloudUIPosReporterMono_TypeDefinitionIndex)->GetStaticField(0x10270);
		}
		::RPG::Client::CloudUIBattlePosRegion Region; // 0x18
		::UnityEngine::RectTransform* Field_5_2; // 0x20
		::UnityEngine::CanvasGroup* Field_5_3; // 0x28
		::System::Collections::Generic::List_1<::Class_1_63C450F2FF228316*>* Field_5_4; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUIPOSREPORTERMONO__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUIPOSREPORTERMONO_START_OFFSET))(this);
		}

		::System::Boolean GetIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUIPOSREPORTERMONO_GETISVALID_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GetRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUIPOSREPORTERMONO_GETRECTTRANSFORM_OFFSET))(this);
		}

		::Class_1_5D9FADE393C1BEBA_Class_1_3ABCC41A05D06339* GetUIElementScreenRect()
		{
			return ((::Class_1_5D9FADE393C1BEBA_Class_1_3ABCC41A05D06339*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUIPOSREPORTERMONO_GETUIELEMENTSCREENRECT_OFFSET))(this);
		}

		::Class_1_5D9FADE393C1BEBA_Class_1_3ABCC41A05D06339* GetUIElementScreenRect_1(::UnityEngine::RectTransform* a1)
		{
			return ((::Class_1_5D9FADE393C1BEBA_Class_1_3ABCC41A05D06339*(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUIPOSREPORTERMONO_GETUIELEMENTSCREENRECT_1_OFFSET))(this, a1);
		}

		::System::Void UpdateDebugGUI(::System::Collections::Generic::List_1<::Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUIPOSREPORTERMONO_UPDATEDEBUGGUI_OFFSET))(this, a1);
		}

		::System::Void ClearDebugGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDUIPOSREPORTERMONO_CLEARDEBUGGUI_OFFSET))(this);
		}
	};
}
