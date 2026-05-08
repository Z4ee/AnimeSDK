#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSS2BUILDDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x170761C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2BuildDialogContext_TypeDefinitionIndex = 74613;

	class UIAbyssS2BuildDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2BUILDDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
