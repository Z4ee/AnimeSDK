#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STOPRANDOMMISSIONTALK_METHOD_3_34342B6C39D79077_OFFSET UNITYSDK_OFFSET(0x1B0C6210)
#define RPG_GAMECORE_STOPRANDOMMISSIONTALK_METHOD_3_C68AF448F5F17A1A_OFFSET UNITYSDK_OFFSET(0x1B0C62E0)
#define RPG_GAMECORE_STOPRANDOMMISSIONTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C62D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopRandomMissionTalk_TypeDefinitionIndex = 20061;

	class StopRandomMissionTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPRANDOMMISSIONTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_34342B6C39D79077(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopRandomMissionTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopRandomMissionTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPRANDOMMISSIONTALK_METHOD_3_34342B6C39D79077_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C68AF448F5F17A1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopRandomMissionTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopRandomMissionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPRANDOMMISSIONTALK_METHOD_3_C68AF448F5F17A1A_OFFSET))(a1, a2);
		}
	};
}
