#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BE4C137000DA0E0E;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISELECTPROTOCOLDATACONTEXT_ADDPROTOCOLROWITEM_OFFSET UNITYSDK_OFFSET(0x179BF770)
#define MOLEMOLE_UISELECTPROTOCOLDATACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x179BF840)

namespace MoleMole
{
	inline static constexpr unsigned int UISelectProtocolDataContext_TypeDefinitionIndex = 45857;

	class UISelectProtocolDataContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_BE4C137000DA0E0E*>* protocolList; // 0x28
		::Enum_3_8E90989A26BC6232 switchState; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTPROTOCOLDATACONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void AddProtocolRowItem(::System::String* elementText, ::System::Action* callbackAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTPROTOCOLDATACONTEXT_ADDPROTOCOLROWITEM_OFFSET))(this, elementText, callbackAction);
		}
	};
}
