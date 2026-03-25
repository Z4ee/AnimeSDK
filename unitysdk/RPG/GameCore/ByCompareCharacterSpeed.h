#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPARECHARACTERSPEED_METHOD_4_22BFA02F37A9F055_OFFSET UNITYSDK_OFFSET(0x17004B70)
#define RPG_GAMECORE_BYCOMPARECHARACTERSPEED_METHOD_4_7E83DE384DC877C4_OFFSET UNITYSDK_OFFSET(0x17004A50)
#define RPG_GAMECORE_BYCOMPARECHARACTERSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x17004AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCharacterSpeed_TypeDefinitionIndex = 18537;

	class ByCompareCharacterSpeed : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean RealSpeed; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x2C
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERSPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7E83DE384DC877C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCharacterSpeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCharacterSpeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERSPEED_METHOD_4_7E83DE384DC877C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_22BFA02F37A9F055(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCharacterSpeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCharacterSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERSPEED_METHOD_4_22BFA02F37A9F055_OFFSET))(a1, a2);
		}
	};
}
