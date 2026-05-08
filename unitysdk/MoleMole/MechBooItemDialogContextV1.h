#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MechBooItemDialogContext.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_35EE3F274435ACD1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1_GETPARTBUILDLIST_OFFSET UNITYSDK_OFFSET(0x12F95DF0)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1_ISVALIDTEMPLATE_OFFSET UNITYSDK_OFFSET(0x12F95D80)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1_OVERRIDETABTITLE_OFFSET UNITYSDK_OFFSET(0x12F95D30)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1__CTOR_OFFSET UNITYSDK_OFFSET(0x12F96210)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___BASE_ISVALIDTEMPLATE_OFFSET UNITYSDK_OFFSET(0x12F96220)

namespace MoleMole
{
	inline static constexpr unsigned int MechBooItemDialogContextV1_TypeDefinitionIndex = 52505;

	class MechBooItemDialogContextV1 : public ::MoleMole::MechBooItemDialogContext
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1__CTOR_OFFSET))(this);
		}

		::System::Void OverrideTabTitle(::System::Int32 tabId, ::Class_2_134E5210FBBAC6E5* tab)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_134E5210FBBAC6E5*))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1_OVERRIDETABTITLE_OFFSET))(this, tabId, tab);
		}

		::System::Boolean IsValidTemplate(::Class_2_35EE3F274435ACD1* template_, ::System::Int32 tabId)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_35EE3F274435ACD1*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1_ISVALIDTEMPLATE_OFFSET))(this, template_, tabId);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetPartBuildList(::System::Int32 tabId)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1_GETPARTBUILDLIST_OFFSET))(this, tabId);
		}

		::System::Boolean __base_IsValidTemplate(::Class_2_35EE3F274435ACD1* P0, ::System::Int32 P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_35EE3F274435ACD1*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___BASE_ISVALIDTEMPLATE_OFFSET))(this, P0, P1);
		}
	};
}
