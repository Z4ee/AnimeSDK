#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_82BFA20677866509;

#define MOLEMOLE_UIYOROZUYAABYSSS2CHALLENGEREVIEWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16E0EF10)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaAbyssS2ChallengeReviewContext_TypeDefinitionIndex = 72840;

	class UIYorozuyaAbyssS2ChallengeReviewContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_82BFA20677866509* reportData; // 0x28
		::System::Boolean hasOverview; // 0x30
		::System::Boolean showOverview; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSS2CHALLENGEREVIEWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
