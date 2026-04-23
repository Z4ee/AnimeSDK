#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SummonUnitFetchType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_TARGETFETCHSUMMONUNIT_METHOD_4_A36255409C5E5AF3_OFFSET UNITYSDK_OFFSET(0x18EE0110)
#define RPG_GAMECORE_TARGETFETCHSUMMONUNIT_METHOD_4_F4876A93CDA2A82F_OFFSET UNITYSDK_OFFSET(0x18EE5C90)
#define RPG_GAMECORE_TARGETFETCHSUMMONUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE00C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchSummonUnit_TypeDefinitionIndex = 22878;

	class TargetFetchSummonUnit : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x10
		::RPG::GameCore::TargetEvaluator* Summoner; // 0x18
		::System::UInt32 SummonUnitID; // 0x20
		::RPG::GameCore::SummonUnitFetchType FetchType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSUMMONUNIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F4876A93CDA2A82F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchSummonUnit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchSummonUnit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSUMMONUNIT_METHOD_4_F4876A93CDA2A82F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A36255409C5E5AF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchSummonUnit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSUMMONUNIT_METHOD_4_A36255409C5E5AF3_OFFSET))(a1, a2);
		}
	};
}
