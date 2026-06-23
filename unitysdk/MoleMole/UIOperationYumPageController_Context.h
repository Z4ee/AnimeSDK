#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_6EC930B690591576_Class_1_EA06DA1092863621;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16951280)

namespace MoleMole
{
	inline static constexpr unsigned int UIOperationYumPageController_Context_TypeDefinitionIndex = 84404;

	class UIOperationYumPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_6EC930B690591576_Class_1_EA06DA1092863621*>* NpcNameSettings; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
