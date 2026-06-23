#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoItemIcon_Class_3_89DE316B64AEDB12; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOITEMICON_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10D6DFC0)
#define MOLEMOLE_MONOITEMICON_METHOD_5_9718385E4E3EEC17_OFFSET UNITYSDK_OFFSET(0x10D6DA50)
#define MOLEMOLE_MONOITEMICON_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10D6E050)
#define MOLEMOLE_MONOITEMICON_METHOD_5_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x10D6DDB0)
#define MOLEMOLE_MONOITEMICON_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x10D6DF00)
#define MOLEMOLE_MONOITEMICON_REGISTERCALLBACKS_OFFSET UNITYSDK_OFFSET(0x10D6DCE0)
#define MOLEMOLE_MONOITEMICON_SELECTITEM_OFFSET UNITYSDK_OFFSET(0x10D6DE60)
#define MOLEMOLE_MONOITEMICON_SETUPVIEW_1_OFFSET UNITYSDK_OFFSET(0x10D6DBA0)
#define MOLEMOLE_MONOITEMICON_SETUPVIEW_2_OFFSET UNITYSDK_OFFSET(0x10D6DC30)
#define MOLEMOLE_MONOITEMICON_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x10D6D9D0)
#define MOLEMOLE_MONOITEMICON_UNSELECTITEM_OFFSET UNITYSDK_OFFSET(0x10D6DD20)
#define MOLEMOLE_MONOITEMICON__CTOR_OFFSET UNITYSDK_OFFSET(0x10D6DF70)

namespace MoleMole
{
	inline static constexpr unsigned int MonoItemIcon_TypeDefinitionIndex = 61379;

	class MonoItemIcon : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::MonoItemIcon_Class_3_89DE316B64AEDB12* OnSelectItem; // 0x18
		::UnityEngine::UI::Image* _Icon; // 0x20
		::UnityEngine::UI::Image* _Select; // 0x28
		::UnityEngine::UI::Text* _TextName; // 0x30
		::UnityEngine::UI::Text* _TextCount; // 0x38
		::System::UInt64 _GoodRuntimeID; // 0x40
		::System::Int32 _GoodTemplateID; // 0x48
		::System::Int32 _GoodItemCount; // 0x4C
		::System::Int32 _ItemIndex; // 0x50
		::System::Boolean _IsItemSelected; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON__CTOR_OFFSET))(this);
		}

		::System::Void SetupView(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_SETUPVIEW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetupView_1(::System::Int32 a1, ::System::UInt64 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_SETUPVIEW_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetupView_2(::System::Int32 a1, ::System::Int32 a2, ::System::UInt64 a3, ::System::Int32 a4, ::System::Int32 a5, ::MoleMole::MonoItemIcon_Class_3_89DE316B64AEDB12* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt64, ::System::Int32, ::System::Int32, ::MoleMole::MonoItemIcon_Class_3_89DE316B64AEDB12*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_SETUPVIEW_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void RegisterCallBacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_REGISTERCALLBACKS_OFFSET))(this);
		}

		::System::Void UnSelectItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_UNSELECTITEM_OFFSET))(this);
		}

		::System::Void SelectItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_SELECTITEM_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_9718385E4E3EEC17(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_METHOD_5_9718385E4E3EEC17_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_D0CD9A971CA3B1CF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_METHOD_5_D0CD9A971CA3B1CF_OFFSET))(this);
		}
	};
}
