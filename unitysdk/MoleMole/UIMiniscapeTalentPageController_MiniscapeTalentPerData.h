#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_147;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_GETPRETALENTIDLIST_OFFSET UNITYSDK_OFFSET(0x15D5A320)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_GETTABLEINFO_OFFSET UNITYSDK_OFFSET(0x15D5A240)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_GETTALENTID_OFFSET UNITYSDK_OFFSET(0x15D5A280)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_SETNEXTTALENTINDEX_OFFSET UNITYSDK_OFFSET(0x15D5A370)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_SETTABLEINFO_OFFSET UNITYSDK_OFFSET(0x15D5A2D0)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15D5A3E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeTalentPageController_MiniscapeTalentPerData_TypeDefinitionIndex = 63121;

	class UIMiniscapeTalentPageController_MiniscapeTalentPerData : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* NextTalentItemIndexList; // 0x10
		::Class_2_208CC9941471731A_147* _tableInfo; // 0x18
		::System::Int32 NextColumnItemIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA__CTOR_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_147* GetTableInfo()
		{
			return ((::Class_2_208CC9941471731A_147*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_GETTABLEINFO_OFFSET))(this);
		}

		::System::Int32 GetTalentId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_GETTALENTID_OFFSET))(this);
		}

		::System::Void SetTableInfo(::Class_2_208CC9941471731A_147* tableInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_147*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_SETTABLEINFO_OFFSET))(this, tableInfo);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetPreTalentIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_GETPRETALENTIDLIST_OFFSET))(this);
		}

		::System::Void SetNextTalentIndex(::System::Int32 columnIndex, ::System::Int32 rowIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_SETNEXTTALENTINDEX_OFFSET))(this, columnIndex, rowIndex);
		}
	};
}
