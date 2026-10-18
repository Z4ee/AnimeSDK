#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETSUMMONUNITATTACH_METHOD_3_E8D020B038F318E2_OFFSET UNITYSDK_OFFSET(0x1DA95A80)
#define RPG_GAMECORE_SETSUMMONUNITATTACH_METHOD_3_EC47FBCF11C53EDE_OFFSET UNITYSDK_OFFSET(0x1DA95A20)
#define RPG_GAMECORE_SETSUMMONUNITATTACH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA95A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSummonUnitAttach_TypeDefinitionIndex = 20162;

	class SetSummonUnitAttach : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18
		::RPG::GameCore::TargetEvaluator* AttachTarget; // 0x20
		::System::Boolean OverrideAttachConfig; // 0x28
		::System::String* AttachPoint; // 0x30
		::RPG::MVector3 LocalPosition; // 0x38
		::RPG::MVector3 LocalRotation; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONUNITATTACH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EC47FBCF11C53EDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSummonUnitAttach*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSummonUnitAttach*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONUNITATTACH_METHOD_3_EC47FBCF11C53EDE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E8D020B038F318E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSummonUnitAttach* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSummonUnitAttach*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONUNITATTACH_METHOD_3_E8D020B038F318E2_OFFSET))(a1, a2);
		}
	};
}
