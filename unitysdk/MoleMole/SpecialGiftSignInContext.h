#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_E43D938AEBE01021;

#define MOLEMOLE_SPECIALGIFTSIGNINCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1703F920)

namespace MoleMole
{
	inline static constexpr unsigned int SpecialGiftSignInContext_TypeDefinitionIndex = 62092;

	class SpecialGiftSignInContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_E43D938AEBE01021* TabData; // 0x28

		::System::Void _ctor(::Class_1_E43D938AEBE01021* tabData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E43D938AEBE01021*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPECIALGIFTSIGNINCONTEXT__CTOR_OFFSET))(this, tabData);
		}
	};
}
