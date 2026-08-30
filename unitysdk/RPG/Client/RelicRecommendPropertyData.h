#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RELICRECOMMENDPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1794E050)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicRecommendPropertyData_TypeDefinitionIndex = 66815;

	class RelicRecommendPropertyData : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarPropertyType PropertyType; // 0x10
		::System::UInt32 Percent; // 0x14
		::System::Boolean IsExcellent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDPROPERTYDATA__CTOR_OFFSET))(this);
		}
	};
}
