#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IniParserEx/IniFile_SectionItem_SectionItemType.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { template <typename T> class IniFile_SectionItem_Ref_1; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define INIPARSEREX_INIFILE_SECTIONITEM_CREATELIST_OFFSET UNITYSDK_OFFSET(0x189E6230)
#define INIPARSEREX_INIFILE_SECTIONITEM_CREATEMAP_OFFSET UNITYSDK_OFFSET(0x189E6290)
#define INIPARSEREX_INIFILE_SECTIONITEM_CREATESINGLE_OFFSET UNITYSDK_OFFSET(0x189E61C0)
#define INIPARSEREX_INIFILE_SECTIONITEM_CREATESTRING_OFFSET UNITYSDK_OFFSET(0x189E6170)
#define INIPARSEREX_INIFILE_SECTIONITEM_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189E6690)
#define INIPARSEREX_INIFILE_SECTIONITEM_GET_ANYITEM_OFFSET UNITYSDK_OFFSET(0x189E6350)
#define INIPARSEREX_INIFILE_SECTIONITEM_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x189E6330)
#define INIPARSEREX_INIFILE_SECTIONITEM_GET_LIST_OFFSET UNITYSDK_OFFSET(0x189E6490)
#define INIPARSEREX_INIFILE_SECTIONITEM_GET_MAP_OFFSET UNITYSDK_OFFSET(0x189E6590)
#define INIPARSEREX_INIFILE_SECTIONITEM_GET_SINGLE_OFFSET UNITYSDK_OFFSET(0x189E6420)
#define INIPARSEREX_INIFILE_SECTIONITEM_GET_STR_OFFSET UNITYSDK_OFFSET(0x189E6370)
#define INIPARSEREX_INIFILE_SECTIONITEM_SET_ANYITEM_OFFSET UNITYSDK_OFFSET(0x189E6360)
#define INIPARSEREX_INIFILE_SECTIONITEM_SET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x189E6340)
#define INIPARSEREX_INIFILE_SECTIONITEM_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189E66F0)
#define INIPARSEREX_INIFILE_SECTIONITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x189E6740)
#define INIPARSEREX_INIFILE_SECTIONITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x189E6160)
#define INIPARSEREX_INIFILE_SECTIONITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x189E6150)

namespace IniParserEx
{
	inline static constexpr unsigned int IniFile_SectionItem_TypeDefinitionIndex = 3745;

	class IniFile_SectionItem : public ::System::Object
	{
	public:
		::IniParserEx::IniFile_SectionItem_SectionItemType _ItemType_k__BackingField; // 0x10
		::System::Object* _AnyItem_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IniParserEx::IniFile_SectionItem_SectionItemType type, ::System::Object* anyItem)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::IniFile_SectionItem_SectionItemType, ::System::Object*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM__CTOR_1_OFFSET))(this, type, anyItem);
		}

		static ::IniParserEx::IniFile_SectionItem* CreateString(::System::String* content)
		{
			return ((::IniParserEx::IniFile_SectionItem*(*)(::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM_CREATESTRING_OFFSET))(content);
		}

		static ::IniParserEx::IniFile_SectionItem* CreateSingle()
		{
			return ((::IniParserEx::IniFile_SectionItem*(*)())((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM_CREATESINGLE_OFFSET))();
		}

		static ::IniParserEx::IniFile_SectionItem* CreateList()
		{
			return ((::IniParserEx::IniFile_SectionItem*(*)())((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM_CREATELIST_OFFSET))();
		}

		static ::IniParserEx::IniFile_SectionItem* CreateMap()
		{
			return ((::IniParserEx::IniFile_SectionItem*(*)())((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM_CREATEMAP_OFFSET))();
		}

		::IniParserEx::IniFile_SectionItem_SectionItemType get_ItemType()
		{
			return ((::IniParserEx::IniFile_SectionItem_SectionItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM_GET_ITEMTYPE_OFFSET))(this);
		}

		::System::Void set_ItemType(::IniParserEx::IniFile_SectionItem_SectionItemType value)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::IniFile_SectionItem_SectionItemType))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM_SET_ITEMTYPE_OFFSET))(this, value);
		}

		::System::Object* get_AnyItem()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM_GET_ANYITEM_OFFSET))(this);
		}

		::System::Void set_AnyItem(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM_SET_ANYITEM_OFFSET))(this, value);
		}

		::System::String* get_Str()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM_GET_STR_OFFSET))(this);
		}

		::IniParserEx::IniFile_SectionItem_Ref_1<::IniParserEx::IniFile_SectionItem*>* get_Single()
		{
			return ((::IniParserEx::IniFile_SectionItem_Ref_1<::IniParserEx::IniFile_SectionItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM_GET_SINGLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::IniParserEx::IniFile_SectionItem*>* get_List()
		{
			return ((::System::Collections::Generic::List_1<::IniParserEx::IniFile_SectionItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM_GET_LIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::IniParserEx::IniFile_SectionItem*>* get_Map()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::IniParserEx::IniFile_SectionItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM_GET_MAP_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::IniParserEx::IniFile_SectionItem*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::IniParserEx::IniFile_SectionItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM_TOSTRING_OFFSET))(this);
		}
	};
}
