#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSPAWNMONEY_METHOD_3_6AFBD9E01DA4FFE2_OFFSET UNITYSDK_OFFSET(0x186665E0)
#define RPG_GAMECORE_ADVSPAWNMONEY_METHOD_3_7F40FC6759DD808C_OFFSET UNITYSDK_OFFSET(0x18666770)
#define RPG_GAMECORE_ADVSPAWNMONEY__CTOR_OFFSET UNITYSDK_OFFSET(0x18666620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSpawnMoney_TypeDefinitionIndex = 21022;

	class AdvSpawnMoney : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* BatchID; // 0x20
		::RPG::GameCore::DynamicFloat* Interval; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSPAWNMONEY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6AFBD9E01DA4FFE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSpawnMoney*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSpawnMoney*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSPAWNMONEY_METHOD_3_6AFBD9E01DA4FFE2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7F40FC6759DD808C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSpawnMoney* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSpawnMoney*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSPAWNMONEY_METHOD_3_7F40FC6759DD808C_OFFSET))(a1, a2);
		}
	};
}
