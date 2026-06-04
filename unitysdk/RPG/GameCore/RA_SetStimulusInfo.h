#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ReactionTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RA_SETSTIMULUSINFO_METHOD_4_6133DBAE926E18DA_OFFSET UNITYSDK_OFFSET(0x19AA8580)
#define RPG_GAMECORE_RA_SETSTIMULUSINFO_METHOD_4_95F8F67F25A3034B_OFFSET UNITYSDK_OFFSET(0x19AA8500)
#define RPG_GAMECORE_RA_SETSTIMULUSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA8550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_SetStimulusInfo_TypeDefinitionIndex = 18919;

	class RA_SetStimulusInfo : public ::RPG::GameCore::ReactionTaskConfig
	{
	public:
		::System::Boolean SetInstigator; // 0x18
		::System::Boolean SetStimulusPos; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_SETSTIMULUSINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_95F8F67F25A3034B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_SetStimulusInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_SetStimulusInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_SETSTIMULUSINFO_METHOD_4_95F8F67F25A3034B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6133DBAE926E18DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_SetStimulusInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_SetStimulusInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_SETSTIMULUSINFO_METHOD_4_6133DBAE926E18DA_OFFSET))(a1, a2);
		}
	};
}
