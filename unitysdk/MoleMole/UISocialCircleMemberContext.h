#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_E23E4CB2769CC93F;

#define MOLEMOLE_UISOCIALCIRCLEMEMBERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18875C90)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMemberContext_TypeDefinitionIndex = 68292;

	class UISocialCircleMemberContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_E23E4CB2769CC93F* CircleData; // 0x28
		::System::Int32 TabIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
