#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_VE_RTDISTANCE_METHOD_3_8B44AB0B7FC48229_OFFSET UNITYSDK_OFFSET(0x190EF130)
#define RPG_GAMECORE_VE_RTDISTANCE_METHOD_3_A804455029B78B04_OFFSET UNITYSDK_OFFSET(0x190EF0F0)
#define RPG_GAMECORE_VE_RTDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x190EF120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtDistance_TypeDefinitionIndex = 23276;

	class VE_RtDistance : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* From; // 0x20
		::RPG::GameCore::TargetEvaluator* To; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTDISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A804455029B78B04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTDISTANCE_METHOD_3_A804455029B78B04_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8B44AB0B7FC48229(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTDISTANCE_METHOD_3_8B44AB0B7FC48229_OFFSET))(a1, a2);
		}
	};
}
