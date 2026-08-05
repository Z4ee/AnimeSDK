#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorBeHitTag.h"
#include "unitysdk/MoleMole/Config/BaseConfigAnimatorBeHitPriority.h"

#define MOLEMOLE_CONFIG_TAGCONFIGANIMATORBEHITPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B56A440)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TagConfigAnimatorBeHitPriority_TypeDefinitionIndex = 44134;

	class TagConfigAnimatorBeHitPriority : public ::MoleMole::Config::BaseConfigAnimatorBeHitPriority
	{
	public:
		::MoleMole::Config::AnimatorBeHitTag Tag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TAGCONFIGANIMATORBEHITPRIORITY__CTOR_OFFSET))(this);
		}
	};
}
