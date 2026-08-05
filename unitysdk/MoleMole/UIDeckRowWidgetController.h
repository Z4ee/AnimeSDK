#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_CAA1767F36D16491.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_58619A0893665D06_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIDailyChallengeCardRowWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_CANBEUPBYREWARDBUFF_OFFSET UNITYSDK_OFFSET(0x18AACE00)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_GETCARDID_OFFSET UNITYSDK_OFFSET(0x18AAC6D0)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x18AAC140)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x18AACB70)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONCONTROLLERCLICK_OFFSET UNITYSDK_OFFSET(0x18AACBC0)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18AAC470)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18AAC580)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18AAC500)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18AAC0D0)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18AAC400)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x18AACC50)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18AAC8D0)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_SAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0x18AACD10)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_SETCARDCLICKFUNC_OFFSET UNITYSDK_OFFSET(0x18AACB20)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER_SETREWARDBUFFICON_OFFSET UNITYSDK_OFFSET(0x18AACD90)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AACE90)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18AACEA0)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18AACF30)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18AACFD0)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18AAD060)
#define MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18AAD0F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDeckRowWidgetController_TypeDefinitionIndex = 62185;

	class UIDeckRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_58619A0893665D06_1* _view; // 0x2F0
		::Struct_2_CAA1767F36D16491 viewData; // 0x2F8
		::MoleMole::UIDailyChallengeCardRowWidgetController* controller; // 0x308
		::System::Int32 cardId; // 0x310
		::System::Action_1<::System::Int32>* onClick; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetCardClickFunc(::System::Action_1<::System::Int32>* OnClickAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_SETCARDCLICKFUNC_OFFSET))(this, OnClickAction);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ISEMPTY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Int32 GetCardId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_GETCARDID_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnControllerClick(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_ONCONTROLLERCLICK_OFFSET))(this, value);
		}

		::Cysharp::Threading::Tasks::UniTask PlayAnimation(::System::String* clipName, ::System::Threading::CancellationToken cts)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_PLAYANIMATION_OFFSET))(this, clipName, cts);
		}

		::System::Void SampleAnimation(::System::String* clipName, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_SAMPLEANIMATION_OFFSET))(this, clipName, time);
		}

		::System::Void SetRewardBuffIcon(::System::Boolean v, ::System::Int32 buffSourceType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_SETREWARDBUFFICON_OFFSET))(this, v, buffSourceType);
		}

		::System::Boolean CanBeUpByRewardBuff(::System::Int32 machineLevelId, ::System::Int32& buffID, ::System::Collections::Generic::List_1<::System::Int32>* excludeBuffList)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER_CANBEUPBYREWARDBUFF_OFFSET))(this, machineLevelId, buffID, excludeBuffList);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDECKROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
