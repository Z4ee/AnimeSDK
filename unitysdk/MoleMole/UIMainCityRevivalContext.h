#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_0ECDE22EF9FEEAE2_2;

#define MOLEMOLE_UIMAINCITYREVIVALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1693C010)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRevivalContext_TypeDefinitionIndex = 61235;

	class UIMainCityRevivalContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_0ECDE22EF9FEEAE2_2* progress; // 0x28
		::System::Int32 landID; // 0x30

		::System::Void _ctor(::System::Int32 landID, ::Class_3_0ECDE22EF9FEEAE2_2* progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_0ECDE22EF9FEEAE2_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALCONTEXT__CTOR_OFFSET))(this, landID, progress);
		}
	};
}
