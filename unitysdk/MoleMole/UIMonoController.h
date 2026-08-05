#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_A0695957E1D28532.h"

class Class_0_16E4307DCC419505_199;
class Class_1_67D6A610B6D1AB2B;
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

#define MOLEMOLE_UIMONOCONTROLLER_APPLYLAYOUTBYPLATFORM_OFFSET UNITYSDK_OFFSET(0x183BBCB0)
#define MOLEMOLE_UIMONOCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x183BB960)
#define MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLBUTTON_OFFSET UNITYSDK_OFFSET(0x183BC620)
#define MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLIMAGE_OFFSET UNITYSDK_OFFSET(0x183BC3C0)
#define MOLEMOLE_UIMONOCONTROLLER_CREATUICONTROLRAWIMAGE_OFFSET UNITYSDK_OFFSET(0x183BC880)
#define MOLEMOLE_UIMONOCONTROLLER_DESTROYVIEW_OFFSET UNITYSDK_OFFSET(0x183BCCE0)
#define MOLEMOLE_UIMONOCONTROLLER_DOUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183B9AA0)
#define MOLEMOLE_UIMONOCONTROLLER_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x183BB950)
#define MOLEMOLE_UIMONOCONTROLLER_HIDE_OFFSET UNITYSDK_OFFSET(0x183BCB80)
#define MOLEMOLE_UIMONOCONTROLLER_INITMONOUILAYOUTADAPTOR_OFFSET UNITYSDK_OFFSET(0x183BB9C0)
#define MOLEMOLE_UIMONOCONTROLLER_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x183BBF00)
#define MOLEMOLE_UIMONOCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x183BCC40)
#define MOLEMOLE_UIMONOCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x183BC080)
#define MOLEMOLE_UIMONOCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x183BBF40)
#define MOLEMOLE_UIMONOCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183B9B70)
#define MOLEMOLE_UIMONOCONTROLLER_SETPARENT_OFFSET UNITYSDK_OFFSET(0x183BC1C0)
#define MOLEMOLE_UIMONOCONTROLLER_SHOW_OFFSET UNITYSDK_OFFSET(0x183BCAE0)
#define MOLEMOLE_UIMONOCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183B9FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonoController_TypeDefinitionIndex = 73732;

	class UIMonoController : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::MoleMole::UIWindowController* _parentController; // 0x58
		::Class_1_67D6A610B6D1AB2B* _childWindowProxy; // 0x60
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_199*>* _controlObjects; // 0x68
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
