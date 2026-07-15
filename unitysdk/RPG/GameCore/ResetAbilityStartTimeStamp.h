#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_RESETABILITYSTARTTIMESTAMP_METHOD_3_35648A103AEAB256_OFFSET UNITYSDK_OFFSET(0x1D01A630)
#define RPG_GAMECORE_RESETABILITYSTARTTIMESTAMP_METHOD_3_5ED9A8F0788B6AF5_OFFSET UNITYSDK_OFFSET(0x1D01A5F0)
#define RPG_GAMECORE_RESETABILITYSTARTTIMESTAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D01A620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetAbilityStartTimeStamp_TypeDefinitionIndex = 21874;

	class ResetAbilityStartTimeStamp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ResetTo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETABILITYSTARTTIMESTAMP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5ED9A8F0788B6AF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetAbilityStartTimeStamp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetAbilityStartTimeStamp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETABILITYSTARTTIMESTAMP_METHOD_3_5ED9A8F0788B6AF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_35648A103AEAB256(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetAbilityStartTimeStamp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetAbilityStartTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETABILITYSTARTTIMESTAMP_METHOD_3_35648A103AEAB256_OFFSET))(a1, a2);
		}
	};
}
