#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class ActivityPanelSingleRewardRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GETQUESTLIST_OFFSET UNITYSDK_OFFSET(0xE0A4F60)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xE0A5200)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0xE0A5260)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GET_QUESTLIST_OFFSET UNITYSDK_OFFSET(0xE0A4CC0)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xE0A4A90)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0xE0A4D40)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0A52C0)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE0A4A10)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA__ONINIT_OFFSET UNITYSDK_OFFSET(0xE0A4A20)

namespace RPG::Client
{
	inline static constexpr unsigned int SingleQuestActivityData_TypeDefinitionIndex = 61754;

	class SingleQuestActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet__Empty()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SingleQuestActivityData_TypeDefinitionIndex)->GetStaticField(0x270A0);
		}
		::RPG::GameCore::ActivityPanelSingleRewardRow* _SingleRewardRow; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA__CCTOR_OFFSET))();
		}

		::System::Void _OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA__ONINIT_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Void UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetQuestList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GETQUESTLIST_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GET_GOTOID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_QuestList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GET_QUESTLIST_OFFSET))(this);
		}
	};
}
