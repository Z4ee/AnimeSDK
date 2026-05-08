#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MechBooItemDialogContext.h"

class Class_2_134E5210FBBAC6E5;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV2_GETPARTBUILDLIST_OFFSET UNITYSDK_OFFSET(0x1383A780)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV2_OVERRIDETABTITLE_OFFSET UNITYSDK_OFFSET(0x1383A8A0)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1383A9E0)

namespace MoleMole
{
	inline static constexpr unsigned int MechBooItemDialogContextV2_TypeDefinitionIndex = 67136;

	class MechBooItemDialogContextV2 : public ::MoleMole::MechBooItemDialogContext
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV2__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetPartBuildList(::System::Int32 tabId)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV2_GETPARTBUILDLIST_OFFSET))(this, tabId);
		}

		::System::Void OverrideTabTitle(::System::Int32 tabId, ::Class_2_134E5210FBBAC6E5* tab)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_134E5210FBBAC6E5*))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV2_OVERRIDETABTITLE_OFFSET))(this, tabId, tab);
		}
	};
}
