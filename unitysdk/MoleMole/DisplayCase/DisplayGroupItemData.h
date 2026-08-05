#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayCaseCfgData.h"
#include "unitysdk/MoleMole/DisplayCase/DisplayBaseTransformData.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_DISPLAYCASE_DISPLAYGROUPITEMDATA_METHOD_1_A6E9594884C4CCF7_OFFSET UNITYSDK_OFFSET(0x19BC5BF0)
#define MOLEMOLE_DISPLAYCASE_DISPLAYGROUPITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC5870)

namespace MoleMole::DisplayCase
{
	inline static constexpr unsigned int DisplayGroupItemData_TypeDefinitionIndex = 53745;

	class DisplayGroupItemData : public ::System::Object
	{
	public:
		::System::Int32 CaseId; // 0x10
		::System::Int32 TypeId; // 0x14
		::System::Boolean IsFemale; // 0x18
		::MoleMole::DisplayCase::DisplayBaseTransformData TransformData; // 0x1C
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayBaseTransformData>*>* AllItems; // 0x30

		::System::Void _ctor(::System::Int32 a1, ::MoleMole::Config::DisplayCase::DisplayCaseCfgData a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Config::DisplayCase::DisplayCaseCfgData))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_DISPLAYGROUPITEMDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_A6E9594884C4CCF7(::MoleMole::DisplayCase::DisplayGroupItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::DisplayCase::DisplayGroupItemData*))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_DISPLAYGROUPITEMDATA_METHOD_1_A6E9594884C4CCF7_OFFSET))(this, a1);
		}
	};
}
