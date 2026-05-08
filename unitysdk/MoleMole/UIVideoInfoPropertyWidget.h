#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonoController.h"

namespace MoleMole { class UIVideoInfoPropertySingleItemWidget; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIVIDEOINFOPROPERTYWIDGET_HIDEALLITEM_OFFSET UNITYSDK_OFFSET(0x15534E10)
#define MOLEMOLE_UIVIDEOINFOPROPERTYWIDGET_REFRESHDAMAGEELEMENTSVIEW_1_OFFSET UNITYSDK_OFFSET(0x155349B0)
#define MOLEMOLE_UIVIDEOINFOPROPERTYWIDGET_REFRESHDAMAGEELEMENTSVIEW_OFFSET UNITYSDK_OFFSET(0x155347D0)
#define MOLEMOLE_UIVIDEOINFOPROPERTYWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x15534E70)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoInfoPropertyWidget_TypeDefinitionIndex = 80206;

	class UIVideoInfoPropertyWidget : public ::MoleMole::UIMonoController
	{
	public:
		::Il2CppArray<::MoleMole::UIVideoInfoPropertySingleItemWidget*>* m_items; // 0x80
		::UnityEngine::GameObject* m_allEmpty; // 0x88
		::UnityEngine::GameObject* m_notEmpty; // 0x90
		::System::Collections::Generic::List_1<::System::Int32>* tempElementList; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOINFOPROPERTYWIDGET__CTOR_OFFSET))(this);
		}

		::System::Void RefreshDamageElementsView(::System::Collections::Generic::List_1<::System::String*>* elementList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOINFOPROPERTYWIDGET_REFRESHDAMAGEELEMENTSVIEW_OFFSET))(this, elementList);
		}

		::System::Void RefreshDamageElementsView_1(::System::Collections::Generic::List_1<::System::Int32>* elementList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOINFOPROPERTYWIDGET_REFRESHDAMAGEELEMENTSVIEW_1_OFFSET))(this, elementList);
		}

		::System::Void HideAllItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOINFOPROPERTYWIDGET_HIDEALLITEM_OFFSET))(this);
		}
	};
}
