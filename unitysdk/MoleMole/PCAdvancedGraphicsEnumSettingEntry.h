#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EnumSettingEntry.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PCADVANCEDGRAPHICSENUMSETTINGENTRY_GETDEFAULTINDEX_OFFSET UNITYSDK_OFFSET(0x136E6670)
#define MOLEMOLE_PCADVANCEDGRAPHICSENUMSETTINGENTRY_GET_SHOWGENERALDETAILDIALOGID_OFFSET UNITYSDK_OFFSET(0x136E6650)
#define MOLEMOLE_PCADVANCEDGRAPHICSENUMSETTINGENTRY_GET__ISHIDEDEFAULTINDEX_OFFSET UNITYSDK_OFFSET(0x136E6660)
#define MOLEMOLE_PCADVANCEDGRAPHICSENUMSETTINGENTRY_ISSETTINGWORKABLE_OFFSET UNITYSDK_OFFSET(0x136E68D0)
#define MOLEMOLE_PCADVANCEDGRAPHICSENUMSETTINGENTRY_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x136E6B30)
#define MOLEMOLE_PCADVANCEDGRAPHICSENUMSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x136E6B80)
#define MOLEMOLE_PCADVANCEDGRAPHICSENUMSETTINGENTRY___BASE_GETDEFAULTINDEX_OFFSET UNITYSDK_OFFSET(0x136E6D10)
#define MOLEMOLE_PCADVANCEDGRAPHICSENUMSETTINGENTRY___BASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x136E6DA0)

namespace MoleMole
{
	inline static constexpr unsigned int PCAdvancedGraphicsEnumSettingEntry_TypeDefinitionIndex = 55100;

	class PCAdvancedGraphicsEnumSettingEntry : public ::MoleMole::EnumSettingEntry
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Int32>>* DefaultIndexRegexList; // 0x40
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* WorkableRegexList; // 0x48
		::System::Int32 CustomDefaultIndex; // 0x50
		::System::Boolean CustomDefaultWorkable; // 0x54
		::System::Int32 GeneralDetailDialogID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCADVANCEDGRAPHICSENUMSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ShowGeneralDetailDialogID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCADVANCEDGRAPHICSENUMSETTINGENTRY_GET_SHOWGENERALDETAILDIALOGID_OFFSET))(this);
		}

		::System::Boolean get__isHideDefaultIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCADVANCEDGRAPHICSENUMSETTINGENTRY_GET__ISHIDEDEFAULTINDEX_OFFSET))(this);
		}

		::System::Int32 GetDefaultIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCADVANCEDGRAPHICSENUMSETTINGENTRY_GETDEFAULTINDEX_OFFSET))(this);
		}

		::System::Boolean IsSettingWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCADVANCEDGRAPHICSENUMSETTINGENTRY_ISSETTINGWORKABLE_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCADVANCEDGRAPHICSENUMSETTINGENTRY_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Int32 __base_GetDefaultIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCADVANCEDGRAPHICSENUMSETTINGENTRY___BASE_GETDEFAULTINDEX_OFFSET))(this);
		}

		::System::Boolean __base_IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCADVANCEDGRAPHICSENUMSETTINGENTRY___BASE_ISSHOWONUIINNER_OFFSET))(this);
		}
	};
}
