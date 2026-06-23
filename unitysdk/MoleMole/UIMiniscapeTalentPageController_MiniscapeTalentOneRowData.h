#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1102;
namespace MoleMole { class UIMiniscapeTalentPageController_MiniscapeTalentPerData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_GETMINISCAPETALENTPERDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x15DB4B60)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_GETPERTALENTDATALIST_OFFSET UNITYSDK_OFFSET(0x15DB4B20)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_SETTABLEINFO_OFFSET UNITYSDK_OFFSET(0x15DB4C00)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_SORTMETHOD_OFFSET UNITYSDK_OFFSET(0x15DB4E30)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_SORTTABLEINFOLIST_OFFSET UNITYSDK_OFFSET(0x15DB4D30)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15DB4FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeTalentPageController_MiniscapeTalentOneRowData_TypeDefinitionIndex = 53460;

	class UIMiniscapeTalentPageController_MiniscapeTalentOneRowData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData*>* _perTalentDataList; // 0x10
		::System::Int32 ColumnIndexInConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData*>* GetPerTalentDataList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_GETPERTALENTDATALIST_OFFSET))(this);
		}

		::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData* GetMiniscapeTalentPerDataByIndex(::System::Int32 index)
		{
			return ((::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_GETMINISCAPETALENTPERDATABYINDEX_OFFSET))(this, index);
		}

		::System::Void SetTableInfo(::Class_2_208CC9941471731A_1102* tableInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1102*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_SETTABLEINFO_OFFSET))(this, tableInfo);
		}

		::System::Void SortTableInfoList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_SORTTABLEINFOLIST_OFFSET))(this);
		}

		::System::Int32 SortMethod(::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData* first, ::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData* second)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData*, ::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_SORTMETHOD_OFFSET))(this, first, second);
		}
	};
}
