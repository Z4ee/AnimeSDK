#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUM_METHOD_4_598B3B2569B72DDA_OFFSET UNITYSDK_OFFSET(0x1700A850)
#define RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUM_METHOD_4_96C75C3E8B786B93_OFFSET UNITYSDK_OFFSET(0x1700A920)
#define RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1700A8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGroupMonsterNum_TypeDefinitionIndex = 20456;

	class ByCompareGroupMonsterNum : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_598B3B2569B72DDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGroupMonsterNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGroupMonsterNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUM_METHOD_4_598B3B2569B72DDA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_96C75C3E8B786B93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGroupMonsterNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGroupMonsterNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUM_METHOD_4_96C75C3E8B786B93_OFFSET))(a1, a2);
		}
	};
}
