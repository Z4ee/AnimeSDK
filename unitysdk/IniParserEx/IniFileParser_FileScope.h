#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class IniFile; }

#define INIPARSEREX_INIFILEPARSER_FILESCOPE_GET_FILE_OFFSET UNITYSDK_OFFSET(0x189E9A80)
#define INIPARSEREX_INIFILEPARSER_FILESCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x189E70B0)

namespace IniParserEx
{
	inline static constexpr unsigned int IniFileParser_FileScope_TypeDefinitionIndex = 3753;

	class IniFileParser_FileScope : public ::System::Object
	{
	public:
		::IniParserEx::IniFile* _File_k__BackingField; // 0x10

		::System::Void _ctor(::IniParserEx::IniFile* file)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::IniFile*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_FILESCOPE__CTOR_OFFSET))(this, file);
		}

		::IniParserEx::IniFile* get_File()
		{
			return ((::IniParserEx::IniFile*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_FILESCOPE_GET_FILE_OFFSET))(this);
		}
	};
}
