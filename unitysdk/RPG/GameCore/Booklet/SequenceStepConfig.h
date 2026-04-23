#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_SEQUENCESTEPCONFIG_METHOD_3_22A4882222332A63_OFFSET UNITYSDK_OFFSET(0x18711A80)
#define RPG_GAMECORE_BOOKLET_SEQUENCESTEPCONFIG_METHOD_3_5DFFEA4F047BE253_OFFSET UNITYSDK_OFFSET(0x18711AE0)
#define RPG_GAMECORE_BOOKLET_SEQUENCESTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18711AD0)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int SequenceStepConfig_TypeDefinitionIndex = 23781;

	class SequenceStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Booklet::StepConfig*>* Children; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SEQUENCESTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_22A4882222332A63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::SequenceStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::SequenceStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SEQUENCESTEPCONFIG_METHOD_3_22A4882222332A63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5DFFEA4F047BE253(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::SequenceStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::SequenceStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SEQUENCESTEPCONFIG_METHOD_3_5DFFEA4F047BE253_OFFSET))(a1, a2);
		}
	};
}
