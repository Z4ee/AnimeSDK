#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A40824779333D5B2.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_DD4EF16B0F76A8E1;

#define MOLEMOLE_GENERALHEADROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18B34500)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralHeadRowContext_TypeDefinitionIndex = 43164;

	class GeneralHeadRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_DD4EF16B0F76A8E1* InfoData; // 0x28
		::Enum_3_A40824779333D5B2 generalHeadRowState; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALHEADROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
