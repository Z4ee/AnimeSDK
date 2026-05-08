#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_A0695957E1D28532.h"

class Class_0_16E4307DCC419505_340;
class Class_1_90BF61F65AED1726;
class Class_1_FA793AB1D49D0132;
class Class_2_1A39E1B51756BF41;
class Class_2_B4378B46E0020E85;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class MonoUILayoutAdaptorBase; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_UIMONOCONTROLLER_APPLYLAYOUTBYPLATFORM_OFFSET UNITYSDK_OFFSET(0x147C8D10)
#define MOLEMOLE_UIMONOCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x147C89C0)
#define MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLBUTTON_OFFSET UNITYSDK_OFFSET(0x147C9680)
#define MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLIMAGE_OFFSET UNITYSDK_OFFSET(0x147C9420)
#define MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLRAWIMAGE_OFFSET UNITYSDK_OFFSET(0x147C98E0)
#define MOLEMOLE_UIMONOCONTROLLER_DESTROYVIEW_OFFSET UNITYSDK_OFFSET(0x147C9D40)
#define MOLEMOLE_UIMONOCONTROLLER_DOUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147C6E50)
#define MOLEMOLE_UIMONOCONTROLLER_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x147C89B0)
#define MOLEMOLE_UIMONOCONTROLLER_HIDE_OFFSET UNITYSDK_OFFSET(0x147C9BE0)
#define MOLEMOLE_UIMONOCONTROLLER_INITMONOUILAYOUTADAPTOR_OFFSET UNITYSDK_OFFSET(0x147C8A20)
#define MOLEMOLE_UIMONOCONTROLLER_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x147C8F60)
#define MOLEMOLE_UIMONOCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x147C9CA0)
#define MOLEMOLE_UIMONOCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x147C90E0)
#define MOLEMOLE_UIMONOCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x147C8FA0)
#define MOLEMOLE_UIMONOCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147C6F20)
#define MOLEMOLE_UIMONOCONTROLLER_SETPARENT_OFFSET UNITYSDK_OFFSET(0x147C9220)
#define MOLEMOLE_UIMONOCONTROLLER_SHOW_OFFSET UNITYSDK_OFFSET(0x147C9B40)
#define MOLEMOLE_UIMONOCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x147C73B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonoController_TypeDefinitionIndex = 45242;

	class UIMonoController : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::MoleMole::UIWindowController* _parentController; // 0x58
		::Class_1_90BF61F65AED1726* _childWindowProxy; // 0x60
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_340*>* _controlObjects; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::MonoUILayoutAdaptorBase*>* _uiLayoutAdaptors; // 0x70
		::System::Boolean _isDestroy; // 0x78
		::Struct_2_A0695957E1D28532 _uiUpdaterData; // 0x7A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_GET_ISDESTROYED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetParent(::MoleMole::UIWindowController* parent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_SETPARENT_OFFSET))(this, parent);
		}

		::Class_2_1A39E1B51756BF41* CreatUIControlImage(::UnityEngine::UI::Image* image)
		{
			return ((::Class_2_1A39E1B51756BF41*(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLIMAGE_OFFSET))(this, image);
		}

		::Class_2_B4378B46E0020E85* CreatUIControlButton(::UnityEngine::UI::Extension::UIButtonEx* btn)
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonEx*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLBUTTON_OFFSET))(this, btn);
		}

		::Class_2_CA67A9CEB871FFD3* CreatUIControlRawImage(::UnityEngine::UI::RawImage* rawImage)
		{
			return ((::Class_2_CA67A9CEB871FFD3*(*)(::PVOID, ::UnityEngine::UI::RawImage*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLRAWIMAGE_OFFSET))(this, rawImage);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_HIDE_OFFSET))(this);
		}

		::System::Void InitMonoUILayoutAdaptor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_INITMONOUILAYOUTADAPTOR_OFFSET))(this);
		}

		::System::Void ApplyLayoutByPlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_APPLYLAYOUTBYPLATFORM_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void DoUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_DOUIDESTROY_OFFSET))(this);
		}

		::System::Void DestroyView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONOCONTROLLER_DESTROYVIEW_OFFSET))(this);
		}
	};
}
