#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITSUBMISSION_METHOD_3_840B34AA3CD9D479_OFFSET UNITYSDK_OFFSET(0x17905AD0)
#define RPG_GAMECORE_WAITSUBMISSION_METHOD_3_D76774227DF66EF0_OFFSET UNITYSDK_OFFSET(0x17905A50)
#define RPG_GAMECORE_WAITSUBMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x17905AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitSubMission_TypeDefinitionIndex = 19864;

	class WaitSubMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D76774227DF66EF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSubMission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSubMission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSION_METHOD_3_D76774227DF66EF0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_840B34AA3CD9D479(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSubMission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSubMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSION_METHOD_3_840B34AA3CD9D479_OFFSET))(a1, a2);
		}
	};
}
