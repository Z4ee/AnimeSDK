#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorBeHitTag.h"
#include "unitysdk/MoleMole/Config/BaseConfigAnimatorBeHitPriority.h"

#define MOLEMOLE_CONFIG_TAGCONFIGANIMATORBEHITPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x183D45F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TagConfigAnimatorBeHitPriority_TypeDefinitionIndex = 73645;

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
