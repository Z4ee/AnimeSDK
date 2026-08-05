#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_898E23CD4E44A533;

#define MOLEMOLE_UIABYSSS2DETAILROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11D89990)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2DetailRowContext_TypeDefinitionIndex = 65296;

	class UIAbyssS2DetailRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_898E23CD4E44A533* AbyssS2DetailRowInfo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
