#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class IniFile; }
namespace IniParserEx { class IniFile_Section; }
namespace System { class String; }

#define INIPARSEREX_INIFILE__GETENUMERATOR_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E1DB800)
#define INIPARSEREX_INIFILE__GETENUMERATOR_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_INIPARSEREX_INIFILE_SECTION___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E1DB970)
#define INIPARSEREX_INIFILE__GETENUMERATOR_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E1DB9D0)
#define INIPARSEREX_INIFILE__GETENUMERATOR_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E1DB980)
#define INIPARSEREX_INIFILE__GETENUMERATOR_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E1DB7E0)
#define INIPARSEREX_INIFILE__GETENUMERATOR_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1DAD40)
#define INIPARSEREX_INIFILE__GETENUMERATOR_D__11___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1E1DB7F0)

namespace IniParserEx
{
	inline static constexpr unsigned int IniFile__GetEnumerator_d__11_TypeDefinitionIndex = 3938;

	class IniFile__GetEnumerator_d__11 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::IniParserEx::IniFile_Section*> __2__current; // 0x18
		::IniParserEx::IniFile* __4__this; // 0x28
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::IniParserEx::IniFile_Section*> __s__1; // 0x30
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::IniParserEx::IniFile_Section*> _keyValuePair_5__2; // 0x58

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE__GETENUMERATOR_D__11__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE__GETENUMERATOR_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE__GETENUMERATOR_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE__GETENUMERATOR_D__11___M__FINALLY1_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::IniParserEx::IniFile_Section*> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_IniParserEx_IniFile_Section___get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::IniParserEx::IniFile_Section*>(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE__GETENUMERATOR_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_INIPARSEREX_INIFILE_SECTION___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE__GETENUMERATOR_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE__GETENUMERATOR_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
