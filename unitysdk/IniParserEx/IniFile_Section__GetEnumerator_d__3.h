#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class IniFile_Section; }
namespace IniParserEx { class IniFile_SectionItem; }
namespace System { class String; }

#define INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1ECFFCA0)
#define INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_INIPARSEREX_INIFILE_SECTIONITEM___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ECFFE10)
#define INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ECFFE70)
#define INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1ECFFE20)
#define INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ECFFC80)
#define INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECFFC00)
#define INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1ECFFC90)

namespace IniParserEx
{
	inline static constexpr unsigned int IniFile_Section__GetEnumerator_d__3_TypeDefinitionIndex = 3932;

	class IniFile_Section__GetEnumerator_d__3 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::IniParserEx::IniFile_SectionItem*> __2__current; // 0x18
		::IniParserEx::IniFile_Section* __4__this; // 0x28
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::IniParserEx::IniFile_SectionItem*> __s__1; // 0x30
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::IniParserEx::IniFile_SectionItem*> _keyValuePair_5__2; // 0x58

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3___M__FINALLY1_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::IniParserEx::IniFile_SectionItem*> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_IniParserEx_IniFile_SectionItem___get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::IniParserEx::IniFile_SectionItem*>(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_INIPARSEREX_INIFILE_SECTIONITEM___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
