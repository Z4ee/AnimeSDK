#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_B8DA246CE054E60A;

#define MOLEMOLE_UICINEMAREPORTPAGECONTEXT_INITREPORTCONTEXT_OFFSET UNITYSDK_OFFSET(0x187D3350)
#define MOLEMOLE_UICINEMAREPORTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x187D3480)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaReportPageContext_TypeDefinitionIndex = 68566;

	class UICinemaReportPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_B8DA246CE054E60A* reportData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void InitReportContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTEXT_INITREPORTCONTEXT_OFFSET))(this);
		}
	};
}
