#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_134E5210FBBAC6E5;
class Class_2_35EE3F274435ACD1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXT_GETPARTITEMDATA_OFFSET UNITYSDK_OFFSET(0x1908EAD0)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXT_ISVALIDTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1908EA70)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1908EDB0)

namespace MoleMole
{
	inline static constexpr unsigned int MechBooItemDialogContext_TypeDefinitionIndex = 68453;

	class MechBooItemDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsValidTemplate(::Class_2_35EE3F274435ACD1* template_, ::System::Int32 tabId)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_35EE3F274435ACD1*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXT_ISVALIDTEMPLATE_OFFSET))(this, template_, tabId);
		}

		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* GetPartItemData(::System::Int32 tabId)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXT_GETPARTITEMDATA_OFFSET))(this, tabId);
		}
	};
}
