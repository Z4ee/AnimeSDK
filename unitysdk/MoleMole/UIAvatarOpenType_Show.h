#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAvatarShowType.h"

namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_UIAVATAROPENTYPE_SHOW_GETSETTINGTYPES_OFFSET UNITYSDK_OFFSET(0x1955E980)
#define MOLEMOLE_UIAVATAROPENTYPE_SHOW_GETUIFROM_OFFSET UNITYSDK_OFFSET(0x1955E430)
#define MOLEMOLE_UIAVATAROPENTYPE_SHOW_GETUISHOWSETTINGDROPDOWNVALUE_OFFSET UNITYSDK_OFFSET(0x1955EA40)
#define MOLEMOLE_UIAVATAROPENTYPE_SHOW_GETUISHOWSETTINGTYPENAME_OFFSET UNITYSDK_OFFSET(0x1955E700)
#define MOLEMOLE_UIAVATAROPENTYPE_SHOW_GET_UIFROM_OFFSET UNITYSDK_OFFSET(0x1955E280)
#define MOLEMOLE_UIAVATAROPENTYPE_SHOW_GET_UISHOWSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x1955E6F0)
#define MOLEMOLE_UIAVATAROPENTYPE_SHOW_ONUIFROMVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1955E680)
#define MOLEMOLE_UIAVATAROPENTYPE_SHOW_SET_UIFROM_OFFSET UNITYSDK_OFFSET(0x1955E3C0)
#define MOLEMOLE_UIAVATAROPENTYPE_SHOW_SET_UISHOWSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x1955E7C0)
#define MOLEMOLE_UIAVATAROPENTYPE_SHOW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1955EB00)
#define MOLEMOLE_UIAVATAROPENTYPE_SHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1955EAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarOpenType_Show_TypeDefinitionIndex = 75745;

	class UIAvatarOpenType_Show : public ::MoleMole::UIAvatarShowType
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet__lineupSettingTypes()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarOpenType_Show_TypeDefinitionIndex)->GetStaticField(0x4FEC0);
		}
		::System::Type* _UIFrom; // 0x20
		::System::String* UIFromName; // 0x28
		::System::Int32 UIShowSettingTypeIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATAROPENTYPE_SHOW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATAROPENTYPE_SHOW__CCTOR_OFFSET))();
		}

		::System::Type* get_UIFrom()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATAROPENTYPE_SHOW_GET_UIFROM_OFFSET))(this);
		}

		::System::Void set_UIFrom(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATAROPENTYPE_SHOW_SET_UIFROM_OFFSET))(this, value);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::Type*>* GetUIFrom()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATAROPENTYPE_SHOW_GETUIFROM_OFFSET))(this);
		}

		::System::Void OnUIFromValueChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATAROPENTYPE_SHOW_ONUIFROMVALUECHANGED_OFFSET))(this);
		}

		::System::String* get_UIShowSettingType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATAROPENTYPE_SHOW_GET_UISHOWSETTINGTYPE_OFFSET))(this);
		}

		::System::Void set_UIShowSettingType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATAROPENTYPE_SHOW_SET_UISHOWSETTINGTYPE_OFFSET))(this, value);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* GetSettingTypes(::System::String* name)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATAROPENTYPE_SHOW_GETSETTINGTYPES_OFFSET))(name);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* GetUIShowSettingDropDownValue()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATAROPENTYPE_SHOW_GETUISHOWSETTINGDROPDOWNVALUE_OFFSET))(this);
		}

		::System::String* GetUIShowSettingTypeName(::System::Int32 showSettingTypeIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATAROPENTYPE_SHOW_GETUISHOWSETTINGTYPENAME_OFFSET))(this, showSettingTypeIndex);
		}
	};
}
