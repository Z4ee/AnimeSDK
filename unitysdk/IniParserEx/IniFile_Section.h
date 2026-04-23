#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class IniFile_SectionItem; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define INIPARSEREX_INIFILE_SECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A41F360)
#define INIPARSEREX_INIFILE_SECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A41F690)
#define INIPARSEREX_INIFILE_SECTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A41F7A0)
#define INIPARSEREX_INIFILE_SECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A41F7B0)
#define INIPARSEREX_INIFILE_SECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A41F750)
#define INIPARSEREX_INIFILE_SECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A41F5F0)

namespace IniParserEx
{
	inline static constexpr unsigned int IniFile_Section_TypeDefinitionIndex = 3745;

	class IniFile_Section : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::IniParserEx::IniFile_SectionItem*>* _Properties_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION__CTOR_OFFSET))(this, name);
		}

		::IniParserEx::IniFile_SectionItem* get_Item(::System::String* index)
		{
			return ((::IniParserEx::IniFile_SectionItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::IniParserEx::IniFile_SectionItem*>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::IniParserEx::IniFile_SectionItem*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION_GET_NAME_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::IniParserEx::IniFile_SectionItem*>* get_Properties()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::IniParserEx::IniFile_SectionItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION_GET_PROPERTIES_OFFSET))(this);
		}
	};
}
