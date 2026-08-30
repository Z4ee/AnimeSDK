#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7EEA5E93C4D09894;
class Class_1_80ED5C578A50E90A;
class Class_1_B13340E145F0BF93;
namespace System { class Action; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSWINDOWSERVICE_OPENLOBBYPAGE_OFFSET UNITYSDK_OFFSET(0x1AC97640)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSWINDOWSERVICE_OPENSETTINGDIALOG_OFFSET UNITYSDK_OFFSET(0x1AC9BEC0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSWINDOWSERVICE_OPENSKILLDIALOG_OFFSET UNITYSDK_OFFSET(0x1AC9BDB0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSWINDOWSERVICE_OPENSTAGEDETAILPAGE_OFFSET UNITYSDK_OFFSET(0x1AC9BBF0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSWINDOWSERVICE_SHOWRECONNECTCONFIRM_OFFSET UNITYSDK_OFFSET(0x1AC9BFD0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSWINDOWSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC9BBE0)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersWindowService_TypeDefinitionIndex = 78582;

	class TeamTowersWindowService : public ::System::Object
	{
	public:
		::Class_1_7EEA5E93C4D09894* _Repository; // 0x10
		::Class_1_B13340E145F0BF93* _GameflowService; // 0x18
		::Class_1_80ED5C578A50E90A* _ResultService; // 0x20

		::System::Void _ctor(::Class_1_7EEA5E93C4D09894* a1, ::Class_1_B13340E145F0BF93* a2, ::Class_1_80ED5C578A50E90A* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7EEA5E93C4D09894*, ::Class_1_B13340E145F0BF93*, ::Class_1_80ED5C578A50E90A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSWINDOWSERVICE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OpenStageDetailPage(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSWINDOWSERVICE_OPENSTAGEDETAILPAGE_OFFSET))(this, a1, a2);
		}

		::System::Void OpenSkillDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSWINDOWSERVICE_OPENSKILLDIALOG_OFFSET))(this);
		}

		::System::Void OpenSettingDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSWINDOWSERVICE_OPENSETTINGDIALOG_OFFSET))(this);
		}

		::System::Void OpenLobbyPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSWINDOWSERVICE_OPENLOBBYPAGE_OFFSET))(this);
		}

		::System::Void ShowReconnectConfirm(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSWINDOWSERVICE_SHOWRECONNECTCONFIRM_OFFSET))(this, a1, a2);
		}
	};
}
