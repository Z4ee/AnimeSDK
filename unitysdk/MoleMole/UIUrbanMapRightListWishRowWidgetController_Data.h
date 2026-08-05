#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTWISHROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1916A100)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListWishRowWidgetController_Data_TypeDefinitionIndex = 53726;

	class UIUrbanMapRightListWishRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* itemList; // 0x10
		::System::String* title; // 0x18
		::System::Action* onClickDel; // 0x20
		::System::Action* onClickAdd; // 0x28
		::System::Boolean isEmpty; // 0x30
		::System::Boolean isDone; // 0x31
		::System::Int32 index; // 0x34
		::System::Int32 key2; // 0x38
		::System::Int32 key1; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTWISHROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
