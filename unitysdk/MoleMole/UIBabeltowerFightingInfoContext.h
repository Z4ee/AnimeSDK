#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_382E023B7281C548;

#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A56070)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerFightingInfoContext_TypeDefinitionIndex = 64709;

	class UIBabeltowerFightingInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_382E023B7281C548* SelectData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
