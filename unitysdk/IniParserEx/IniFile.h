#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class BaseParser; }
namespace IniParserEx { class IniFile_Section; }
namespace IniParserEx { class Token; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define INIPARSEREX_INIFILE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C4C3B20)
#define INIPARSEREX_INIFILE_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1C4C3670)
#define INIPARSEREX_INIFILE_GET_FILEPATH_OFFSET UNITYSDK_OFFSET(0x1C4C3660)
#define INIPARSEREX_INIFILE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C4C3A70)
#define INIPARSEREX_INIFILE_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0x1C4C3BD0)
#define INIPARSEREX_INIFILE_ONNEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x1C4C3350)
#define INIPARSEREX_INIFILE_PARSE_OFFSET UNITYSDK_OFFSET(0x1C4C3730)
#define INIPARSEREX_INIFILE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C4C3B80)
#define INIPARSEREX_INIFILE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C4C3BE0)
#define INIPARSEREX_INIFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C3680)

namespace IniParserEx
{
	inline static constexpr unsigned int IniFile_TypeDefinitionIndex = 3922;

	class IniFile : public ::System::Object
	{
	public:
		::System::String* _FilePath_k__BackingField; // 0x10
		::System::String* _Content_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::IniParserEx::IniFile_Section*>* _Sections_k__BackingField; // 0x20

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_FilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_GET_FILEPATH_OFFSET))(this);
		}

		::System::String* get_Content()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_GET_CONTENT_OFFSET))(this);
		}

		static ::IniParserEx::IniFile* Parse(::System::String* a1)
		{
			return ((::IniParserEx::IniFile*(*)(::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_PARSE_OFFSET))(a1);
		}

		::System::Void OnNextToken(::IniParserEx::BaseParser* a1, ::IniParserEx::Token* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::BaseParser*, ::IniParserEx::Token*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_ONNEXTTOKEN_OFFSET))(this, a1, a2);
		}

		::IniParserEx::IniFile_Section* get_Item(::System::String* a1)
		{
			return ((::IniParserEx::IniFile_Section*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::IniParserEx::IniFile_Section*>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::IniParserEx::IniFile_Section*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::IniParserEx::IniFile_Section*>* get_Sections()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::IniParserEx::IniFile_Section*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_GET_SECTIONS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_TOSTRING_OFFSET))(this);
		}
	};
}
