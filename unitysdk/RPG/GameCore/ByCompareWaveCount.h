#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYCOMPAREWAVECOUNT_METHOD_4_B6340B6507636704_OFFSET UNITYSDK_OFFSET(0x1701CD80)
#define RPG_GAMECORE_BYCOMPAREWAVECOUNT_METHOD_4_CB9B4E2E19D2B9B6_OFFSET UNITYSDK_OFFSET(0x1701CCB0)
#define RPG_GAMECORE_BYCOMPAREWAVECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1701CD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareWaveCount_TypeDefinitionIndex = 21663;

	class ByCompareWaveCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Boolean CompareWithMax; // 0x24
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREWAVECOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CB9B4E2E19D2B9B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareWaveCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareWaveCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREWAVECOUNT_METHOD_4_CB9B4E2E19D2B9B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B6340B6507636704(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareWaveCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareWaveCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREWAVECOUNT_METHOD_4_B6340B6507636704_OFFSET))(a1, a2);
		}
	};
}
