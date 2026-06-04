#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IniParserEx/IniFile_SectionItem_SectionItemType.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_ValueCollection_Enumerator.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class IniFile_SectionItem; }
namespace System { class String; }

#define INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B273740)
#define INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_INIPARSEREX_INIFILE_SECTIONITEM__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B273B80)
#define INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B273BE0)
#define INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B273B90)
#define INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B273700)
#define INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2731F0)
#define INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1B273720)
#define INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1B273730)

namespace IniParserEx
{
	inline static constexpr unsigned int IniFile_SectionItem__GetEnumerator_d__28_TypeDefinitionIndex = 3925;

	class IniFile_SectionItem__GetEnumerator_d__28 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::IniParserEx::IniFile_SectionItem* __2__current; // 0x18
		::IniParserEx::IniFile_SectionItem* __4__this; // 0x20
		::IniParserEx::IniFile_SectionItem_SectionItemType __s__1; // 0x28
		::System::Collections::Generic::List_1_Enumerator<::IniParserEx::IniFile_SectionItem*> __s__2; // 0x30
		::IniParserEx::IniFile_SectionItem* _sectionItem_5__3; // 0x48
		::System::Collections::Generic::Dictionary_2_ValueCollection_Enumerator<::System::String*, ::IniParserEx::IniFile_SectionItem*> __s__4; // 0x50
		::IniParserEx::IniFile_SectionItem* _value_5__5; // 0x68

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28___M__FINALLY2_OFFSET))(this);
		}

		::IniParserEx::IniFile_SectionItem* System_Collections_Generic_IEnumerator_IniParserEx_IniFile_SectionItem__get_Current()
		{
			return ((::IniParserEx::IniFile_SectionItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_INIPARSEREX_INIFILE_SECTIONITEM__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
