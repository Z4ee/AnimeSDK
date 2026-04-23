#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYANYNPCMONSTERINRANGE_METHOD_4_6F42AB6CE87FBF84_OFFSET UNITYSDK_OFFSET(0x1871EB30)
#define RPG_GAMECORE_BYANYNPCMONSTERINRANGE_METHOD_4_90A929A474B69134_OFFSET UNITYSDK_OFFSET(0x1871EC00)
#define RPG_GAMECORE_BYANYNPCMONSTERINRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1871EBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAnyNpcMonsterInRange_TypeDefinitionIndex = 19548;

	class ByAnyNpcMonsterInRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean ConsiderObstacle; // 0x20
		::System::Single Range; // 0x24
		::System::Single AngleLimit; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANYNPCMONSTERINRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6F42AB6CE87FBF84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAnyNpcMonsterInRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAnyNpcMonsterInRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANYNPCMONSTERINRANGE_METHOD_4_6F42AB6CE87FBF84_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_90A929A474B69134(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAnyNpcMonsterInRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAnyNpcMonsterInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANYNPCMONSTERINRANGE_METHOD_4_90A929A474B69134_OFFSET))(a1, a2);
		}
	};
}
