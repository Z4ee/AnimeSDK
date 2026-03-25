#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STOPRANDOMMISSIONTALK_METHOD_3_8A5976E8C8EE416E_OFFSET UNITYSDK_OFFSET(0x1777DEF0)
#define RPG_GAMECORE_STOPRANDOMMISSIONTALK_METHOD_3_C68AF448F5F17A1A_OFFSET UNITYSDK_OFFSET(0x1777E000)
#define RPG_GAMECORE_STOPRANDOMMISSIONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1777DFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopRandomMissionTalk_TypeDefinitionIndex = 19172;

	class StopRandomMissionTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPRANDOMMISSIONTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8A5976E8C8EE416E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopRandomMissionTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopRandomMissionTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPRANDOMMISSIONTALK_METHOD_3_8A5976E8C8EE416E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C68AF448F5F17A1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopRandomMissionTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopRandomMissionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPRANDOMMISSIONTALK_METHOD_3_C68AF448F5F17A1A_OFFSET))(a1, a2);
		}
	};
}
