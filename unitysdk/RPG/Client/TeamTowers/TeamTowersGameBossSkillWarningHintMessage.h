#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/BossSkillViewType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_5747B31C537024FC;
namespace System { class String; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1A3A9460)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1A3A93A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_ISICE_OFFSET UNITYSDK_OFFSET(0x1A3A9570)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_ISWIND_OFFSET UNITYSDK_OFFSET(0x1A3A9520)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A3A93F0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x1A3A94D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A9360)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersGameBossSkillWarningHintMessage_TypeDefinitionIndex = 78539;

	class TeamTowersGameBossSkillWarningHintMessage : public ::System::Object
	{
	public:
		::Class_1_5747B31C537024FC* _SkillRow; // 0x10
		::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType _ViewType; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_PARAMLIST_OFFSET))(this);
		}

		::System::Boolean get_IsWind()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_ISWIND_OFFSET))(this);
		}

		::System::Boolean get_IsIce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMEBOSSSKILLWARNINGHINTMESSAGE_GET_ISICE_OFFSET))(this);
		}
	};
}
