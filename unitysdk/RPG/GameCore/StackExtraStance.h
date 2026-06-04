#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_STACKEXTRASTANCE_METHOD_3_64F0E87E53332B6E_OFFSET UNITYSDK_OFFSET(0x19CA1D80)
#define RPG_GAMECORE_STACKEXTRASTANCE_METHOD_3_9C270A0A4E33E734_OFFSET UNITYSDK_OFFSET(0x19CA1C10)
#define RPG_GAMECORE_STACKEXTRASTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA1CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackExtraStance_TypeDefinitionIndex = 21396;

	class StackExtraStance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* StanceCount; // 0x18
		::RPG::GameCore::DynamicFloat* StanceValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKEXTRASTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9C270A0A4E33E734(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackExtraStance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackExtraStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKEXTRASTANCE_METHOD_3_9C270A0A4E33E734_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_64F0E87E53332B6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackExtraStance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackExtraStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKEXTRASTANCE_METHOD_3_64F0E87E53332B6E_OFFSET))(a1, a2);
		}
	};
}
