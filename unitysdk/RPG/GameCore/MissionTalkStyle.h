#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MissionTalkStyleType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MISSIONTALKSTYLE_METHOD_2_D46FE80299874723_OFFSET UNITYSDK_OFFSET(0x19948A60)
#define RPG_GAMECORE_MISSIONTALKSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19948BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionTalkStyle_TypeDefinitionIndex = 22502;

	class MissionTalkStyle : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MissionTalkStyleType StyleType; // 0x10
		::System::String* SpeakerID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONTALKSTYLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D46FE80299874723(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionTalkStyle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionTalkStyle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONTALKSTYLE_METHOD_2_D46FE80299874723_OFFSET))(a1, a2);
		}
	};
}
