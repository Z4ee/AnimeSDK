#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_E23E4CB2769CC93F;

#define MOLEMOLE_UISOCIALCIRCLEINVITEROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x119EA210)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleInviteRowContext_TypeDefinitionIndex = 54974;

	class UISocialCircleInviteRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_BE6BF7909AD9D940* Info; // 0x28
		::Class_2_E23E4CB2769CC93F* CircleData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEINVITEROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
