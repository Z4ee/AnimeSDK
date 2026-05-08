#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_65AA22E73CD7E617;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITRICKDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xF629470)

namespace MoleMole
{
	inline static constexpr unsigned int UITrickDialogContext_TypeDefinitionIndex = 61809;

	class UITrickDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_65AA22E73CD7E617*>* Tricks; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
