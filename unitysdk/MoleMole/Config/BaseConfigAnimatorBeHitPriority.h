#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_BASECONFIGANIMATORBEHITPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x12A4AF80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BaseConfigAnimatorBeHitPriority_TypeDefinitionIndex = 85431;

	class BaseConfigAnimatorBeHitPriority : public ::System::Object
	{
	public:
		::System::Int32 Priority; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASECONFIGANIMATORBEHITPRIORITY__CTOR_OFFSET))(this);
		}
	};
}
