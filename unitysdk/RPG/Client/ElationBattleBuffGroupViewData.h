#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElationBattleBuffViewData; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCE28CF0)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_BUFFVIEWDATAS_OFFSET UNITYSDK_OFFSET(0xCE291A0)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_ELATIONECHOPOINTMAX_OFFSET UNITYSDK_OFFSET(0xCE29180)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_GROUPDESC_OFFSET UNITYSDK_OFFSET(0xCE29160)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_TOTALPOINT_OFFSET UNITYSDK_OFFSET(0xCE29140)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_BUFFVIEWDATAS_OFFSET UNITYSDK_OFFSET(0xCE291B0)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_ELATIONECHOPOINTMAX_OFFSET UNITYSDK_OFFSET(0xCE29190)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_GROUPDESC_OFFSET UNITYSDK_OFFSET(0xCE29170)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_TOTALPOINT_OFFSET UNITYSDK_OFFSET(0xCE29150)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCE28DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBattleBuffGroupViewData_TypeDefinitionIndex = 71473;

	class ElationBattleBuffGroupViewData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>* _BuffViewDatas_k__BackingField; // 0x10
		::RPG::Client::TextID _GroupDesc_k__BackingField; // 0x18
		::System::Single _ElationEchoPointMax_k__BackingField; // 0x28
		::System::Int32 _TotalPoint_k__BackingField; // 0x2C

		::System::Void _ctor(::System::Int32 a1, ::RPG::Client::TextID a2, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::TextID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::ElationBattleBuffGroupViewData* Create(::System::Int32 a1, ::RPG::Client::TextID a2, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a3)
		{
			return ((::RPG::Client::ElationBattleBuffGroupViewData*(*)(::System::Int32, ::RPG::Client::TextID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Int32 get_TotalPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_TOTALPOINT_OFFSET))(this);
		}

		::System::Void set_TotalPoint(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_TOTALPOINT_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_GroupDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_GROUPDESC_OFFSET))(this);
		}

		::System::Void set_GroupDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_GROUPDESC_OFFSET))(this, a1);
		}

		::System::Single get_ElationEchoPointMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_ELATIONECHOPOINTMAX_OFFSET))(this);
		}

		::System::Void set_ElationEchoPointMax(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_ELATIONECHOPOINTMAX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>* get_BuffViewDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_BUFFVIEWDATAS_OFFSET))(this);
		}

		::System::Void set_BuffViewDatas(::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_BUFFVIEWDATAS_OFFSET))(this, a1);
		}
	};
}
