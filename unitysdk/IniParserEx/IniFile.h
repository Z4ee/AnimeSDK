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

#define INIPARSEREX_INIFILE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189E50F0)
#define INIPARSEREX_INIFILE_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x189E4C40)
#define INIPARSEREX_INIFILE_GET_FILEPATH_OFFSET UNITYSDK_OFFSET(0x189E4C30)
#define INIPARSEREX_INIFILE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x189E5040)
#define INIPARSEREX_INIFILE_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0x189E51A0)
#define INIPARSEREX_INIFILE_ONNEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x189E4920)
#define INIPARSEREX_INIFILE_PARSE_OFFSET UNITYSDK_OFFSET(0x189E4D00)
#define INIPARSEREX_INIFILE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189E5150)
#define INIPARSEREX_INIFILE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x189E51B0)
#define INIPARSEREX_INIFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x189E4C50)

namespace IniParserEx
{
	inline static constexpr unsigned int IniFile_TypeDefinitionIndex = 3742;

	class IniFile : public ::System::Object
	{
	public:
		::System::String* _FilePath_k__BackingField; // 0x10
		::System::String* _Content_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::IniParserEx::IniFile_Section*>* _Sections_k__BackingField; // 0x20

		::System::Void _ctor(::System::String* filePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE__CTOR_OFFSET))(this, filePath);
		}

		::System::String* get_FilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_GET_FILEPATH_OFFSET))(this);
		}

		::System::String* get_Content()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_GET_CONTENT_OFFSET))(this);
		}

		static ::IniParserEx::IniFile* Parse(::System::String* filePath)
		{
			return ((::IniParserEx::IniFile*(*)(::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_PARSE_OFFSET))(filePath);
		}

		::System::Void OnNextToken(::IniParserEx::BaseParser* parser, ::IniParserEx::Token* token)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::BaseParser*, ::IniParserEx::Token*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_ONNEXTTOKEN_OFFSET))(this, parser, token);
		}

		::IniParserEx::IniFile_Section* get_Item(::System::String* index)
		{
			return ((::IniParserEx::IniFile_Section*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_GET_ITEM_OFFSET))(this, index);
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
