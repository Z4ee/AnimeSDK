#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_2B9207E1BEA1F276;

#define MOLEMOLE_UICINEMAPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x142DA7D0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaPlayContext_TypeDefinitionIndex = 48501;

	class UICinemaPlayContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_2B9207E1BEA1F276* playController; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
