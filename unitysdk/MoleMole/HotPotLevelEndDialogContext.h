#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_7807B2B04302CD7B_21;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HOTPOTLEVELENDDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13024340)

namespace MoleMole
{
	inline static constexpr unsigned int HotPotLevelEndDialogContext_TypeDefinitionIndex = 61469;

	class HotPotLevelEndDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_21*>* Rows; // 0x28
		::System::Boolean Success; // 0x30
		::System::Int32 MaxScore; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOTPOTLEVELENDDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
