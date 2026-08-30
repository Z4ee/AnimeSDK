#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DISABLESUMMONUNITGATHER_METHOD_3_3804973D266103B7_OFFSET UNITYSDK_OFFSET(0x1DB0B1E0)
#define RPG_GAMECORE_DISABLESUMMONUNITGATHER_METHOD_3_8C23B9CE8571D888_OFFSET UNITYSDK_OFFSET(0x1DB0B220)
#define RPG_GAMECORE_DISABLESUMMONUNITGATHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0B210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableSummonUnitGather_TypeDefinitionIndex = 19929;

	class DisableSummonUnitGather : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18
		::System::Single DelayTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLESUMMONUNITGATHER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3804973D266103B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableSummonUnitGather*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableSummonUnitGather*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLESUMMONUNITGATHER_METHOD_3_3804973D266103B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8C23B9CE8571D888(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableSummonUnitGather* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableSummonUnitGather*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLESUMMONUNITGATHER_METHOD_3_8C23B9CE8571D888_OFFSET))(a1, a2);
		}
	};
}
