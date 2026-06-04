#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RELICRECOMMENDSUBPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC6EDF30)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicRecommendSubPropertyData_TypeDefinitionIndex = 62459;

	class RelicRecommendSubPropertyData : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarPropertyType SubPropertyType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDSUBPROPERTYDATA__CTOR_OFFSET))(this);
		}
	};
}
