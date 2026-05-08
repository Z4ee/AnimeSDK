#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole { class UIControlItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICONTROLCOLLECTION_GETBINDNAME_OFFSET UNITYSDK_OFFSET(0x14301030)
#define MOLEMOLE_UICONTROLCOLLECTION_GETBINDVIEW_OFFSET UNITYSDK_OFFSET(0x14300FF0)
#define MOLEMOLE_UICONTROLCOLLECTION_GETUSEVIEWBIND_OFFSET UNITYSDK_OFFSET(0x14300FB0)
#define MOLEMOLE_UICONTROLCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x14300EA0)
#define MOLEMOLE_UICONTROLCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x14300F10)
#define MOLEMOLE_UICONTROLCOLLECTION_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14300EC0)
#define MOLEMOLE_UICONTROLCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x14301070)
#define MOLEMOLE_UICONTROLCOLLECTION___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14301150)

namespace MoleMole
{
	inline static constexpr unsigned int UIControlCollection_TypeDefinitionIndex = 58691;

	class UIControlCollection : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIControlItem*>* _controlItems; // 0x58
		::System::Boolean UseViewBind; // 0x60
		::System::String* BindName; // 0x68
		::System::String* BindView; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLCOLLECTION_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::MoleMole::UIControlItem* get_Item(::System::Int32 index)
		{
			return ((::MoleMole::UIControlItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Boolean GetUseViewBind()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLCOLLECTION_GETUSEVIEWBIND_OFFSET))(this);
		}

		::System::String* GetBindView()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLCOLLECTION_GETBINDVIEW_OFFSET))(this);
		}

		::System::String* GetBindName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLCOLLECTION_GETBINDNAME_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLCOLLECTION___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
