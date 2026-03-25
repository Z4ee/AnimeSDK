#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_REMOVEFATEHOUGU_METHOD_3_48C4AAFA75698B14_OFFSET UNITYSDK_OFFSET(0x17598100)
#define RPG_GAMECORE_REMOVEFATEHOUGU_METHOD_3_97E876498DF6DD56_OFFSET UNITYSDK_OFFSET(0x17598220)
#define RPG_GAMECORE_REMOVEFATEHOUGU__CTOR_OFFSET UNITYSDK_OFFSET(0x175981A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveFateHougu_TypeDefinitionIndex = 21525;

	class RemoveFateHougu : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* HouguID; // 0x18
		::RPG::GameCore::DynamicFloat* RemoveCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEFATEHOUGU__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_48C4AAFA75698B14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveFateHougu*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveFateHougu*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEFATEHOUGU_METHOD_3_48C4AAFA75698B14_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_97E876498DF6DD56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveFateHougu* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveFateHougu*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEFATEHOUGU_METHOD_3_97E876498DF6DD56_OFFSET))(a1, a2);
		}
	};
}
