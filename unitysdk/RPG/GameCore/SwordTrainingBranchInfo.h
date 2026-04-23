#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGBRANCHINFO_METHOD_2_BC59015E1500A705_OFFSET UNITYSDK_OFFSET(0x18EC1DA0)
#define RPG_GAMECORE_SWORDTRAININGBRANCHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC1ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingBranchInfo_TypeDefinitionIndex = 19269;

	class SwordTrainingBranchInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StoryLineID; // 0x10
		::System::String* TriggerCustomString; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGBRANCHINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BC59015E1500A705(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingBranchInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingBranchInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGBRANCHINFO_METHOD_2_BC59015E1500A705_OFFSET))(a1, a2);
		}
	};
}
