#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_ONCLICKSUBITEM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x177ED1D0)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_ONCLICKSUBITEM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x177ED200)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_ONCLICKSUBITEM_INVOKE_OFFSET UNITYSDK_OFFSET(0x177ECCD0)
#define MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_ONCLICKSUBITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x177ECCB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTabBtnWidgetController_Data_OnClickSubItem_TypeDefinitionIndex = 41205;

	class UIGeneralTabBtnWidgetController_Data_OnClickSubItem : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_ONCLICKSUBITEM__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::Int32>* dataIndexList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_ONCLICKSUBITEM_INVOKE_OFFSET))(this, dataIndexList);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::System::Int32>* dataIndexList, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_ONCLICKSUBITEM_BEGININVOKE_OFFSET))(this, dataIndexList, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTABBTNWIDGETCONTROLLER_DATA_ONCLICKSUBITEM_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
