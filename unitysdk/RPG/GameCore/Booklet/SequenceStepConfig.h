#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_SEQUENCESTEPCONFIG_METHOD_3_8690655B059E27DE_OFFSET UNITYSDK_OFFSET(0x194E4620)
#define RPG_GAMECORE_BOOKLET_SEQUENCESTEPCONFIG_METHOD_3_E2A05FFCF52A7466_OFFSET UNITYSDK_OFFSET(0x194E45C0)
#define RPG_GAMECORE_BOOKLET_SEQUENCESTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194E4610)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int SequenceStepConfig_TypeDefinitionIndex = 23614;

	class SequenceStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Booklet::StepConfig*>* Children; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SEQUENCESTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E2A05FFCF52A7466(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::SequenceStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::SequenceStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SEQUENCESTEPCONFIG_METHOD_3_E2A05FFCF52A7466_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8690655B059E27DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::SequenceStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::SequenceStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SEQUENCESTEPCONFIG_METHOD_3_8690655B059E27DE_OFFSET))(a1, a2);
		}
	};
}
