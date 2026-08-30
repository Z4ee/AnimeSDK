#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENABLEAUTOBLINK_METHOD_3_55F3DD07965A28FF_OFFSET UNITYSDK_OFFSET(0x1D061820)
#define RPG_GAMECORE_ENABLEAUTOBLINK_METHOD_3_E5EC2E1EC8000410_OFFSET UNITYSDK_OFFSET(0x1D061860)
#define RPG_GAMECORE_ENABLEAUTOBLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D061850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableAutoBlink_TypeDefinitionIndex = 22162;

	class EnableAutoBlink : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEAUTOBLINK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_55F3DD07965A28FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableAutoBlink*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableAutoBlink*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEAUTOBLINK_METHOD_3_55F3DD07965A28FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E5EC2E1EC8000410(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableAutoBlink* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableAutoBlink*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEAUTOBLINK_METHOD_3_E5EC2E1EC8000410_OFFSET))(a1, a2);
		}
	};
}
