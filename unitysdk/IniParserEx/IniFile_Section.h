#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class IniFile_SectionItem; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define INIPARSEREX_INIFILE_SECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B272590)
#define INIPARSEREX_INIFILE_SECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B2728C0)
#define INIPARSEREX_INIFILE_SECTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B2729D0)
#define INIPARSEREX_INIFILE_SECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B2729E0)
#define INIPARSEREX_INIFILE_SECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B272980)
#define INIPARSEREX_INIFILE_SECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B272820)

namespace IniParserEx
{
	inline static constexpr unsigned int IniFile_Section_TypeDefinitionIndex = 3919;

	class IniFile_Section : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::IniParserEx::IniFile_SectionItem*>* _Properties_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION__CTOR_OFFSET))(this, a1);
		}

		::IniParserEx::IniFile_SectionItem* get_Item(::System::String* a1)
		{
			return ((::IniParserEx::IniFile_SectionItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION_GET_ITEM_OFFSET))(this, a1);
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
