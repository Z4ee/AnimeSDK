#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTARTTRACKPHOTO_METHOD_3_289DF554D6D763ED_OFFSET UNITYSDK_OFFSET(0x175A23C0)
#define RPG_GAMECORE_RESTARTTRACKPHOTO_METHOD_3_496DC9E3C26DAE79_OFFSET UNITYSDK_OFFSET(0x175A22B0)
#define RPG_GAMECORE_RESTARTTRACKPHOTO__CTOR_OFFSET UNITYSDK_OFFSET(0x175A2390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestartTrackPhoto_TypeDefinitionIndex = 19811;

	class RestartTrackPhoto : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTARTTRACKPHOTO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_496DC9E3C26DAE79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestartTrackPhoto*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestartTrackPhoto*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTARTTRACKPHOTO_METHOD_3_496DC9E3C26DAE79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_289DF554D6D763ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestartTrackPhoto* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestartTrackPhoto*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTARTTRACKPHOTO_METHOD_3_289DF554D6D763ED_OFFSET))(a1, a2);
		}
	};
}
