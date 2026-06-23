#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6C0CB58803DAE0C3.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x156108D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuickSelectPopWindowContext_TypeDefinitionIndex = 47296;

	class UIQuickSelectPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* ItemList; // 0x28
		::Enum_3_6C0CB58803DAE0C3 Type; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
