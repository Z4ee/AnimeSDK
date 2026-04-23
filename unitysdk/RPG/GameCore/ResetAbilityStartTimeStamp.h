#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_RESETABILITYSTARTTIMESTAMP_METHOD_3_35648A103AEAB256_OFFSET UNITYSDK_OFFSET(0x18CA8FB0)
#define RPG_GAMECORE_RESETABILITYSTARTTIMESTAMP_METHOD_3_F82F32D2DC4B504A_OFFSET UNITYSDK_OFFSET(0x18CA8F30)
#define RPG_GAMECORE_RESETABILITYSTARTTIMESTAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA8F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetAbilityStartTimeStamp_TypeDefinitionIndex = 21590;

	class ResetAbilityStartTimeStamp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ResetTo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETABILITYSTARTTIMESTAMP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F82F32D2DC4B504A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetAbilityStartTimeStamp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetAbilityStartTimeStamp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETABILITYSTARTTIMESTAMP_METHOD_3_F82F32D2DC4B504A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_35648A103AEAB256(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetAbilityStartTimeStamp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetAbilityStartTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETABILITYSTARTTIMESTAMP_METHOD_3_35648A103AEAB256_OFFSET))(a1, a2);
		}
	};
}
