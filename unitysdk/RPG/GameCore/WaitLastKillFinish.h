#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAITLASTKILLFINISH_METHOD_3_2A15689696DD1B3D_OFFSET UNITYSDK_OFFSET(0x19100740)
#define RPG_GAMECORE_WAITLASTKILLFINISH_METHOD_3_B03D446BEE8A6E49_OFFSET UNITYSDK_OFFSET(0x19100630)
#define RPG_GAMECORE_WAITLASTKILLFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x19100710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitLastKillFinish_TypeDefinitionIndex = 22379;

	class WaitLastKillFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		// static const ::System::String* LevelResultEndFinishEventStr; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLASTKILLFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B03D446BEE8A6E49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitLastKillFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitLastKillFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLASTKILLFINISH_METHOD_3_B03D446BEE8A6E49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2A15689696DD1B3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitLastKillFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitLastKillFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLASTKILLFINISH_METHOD_3_2A15689696DD1B3D_OFFSET))(a1, a2);
		}
	};
}
