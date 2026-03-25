#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElationBattleBuffViewData; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9590C60)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_BUFFVIEWDATAS_OFFSET UNITYSDK_OFFSET(0x9590F40)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_GROUPDESC_OFFSET UNITYSDK_OFFSET(0x9590F20)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_TOTALPOINT_OFFSET UNITYSDK_OFFSET(0x9590F00)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_BUFFVIEWDATAS_OFFSET UNITYSDK_OFFSET(0x9590F50)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_GROUPDESC_OFFSET UNITYSDK_OFFSET(0x9590F30)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_TOTALPOINT_OFFSET UNITYSDK_OFFSET(0x9590F10)
#define RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9590D10)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBattleBuffGroupViewData_TypeDefinitionIndex = 58600;

	class ElationBattleBuffGroupViewData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>* _BuffViewDatas_k__BackingField; // 0x10
		::System::Int32 _TotalPoint_k__BackingField; // 0x18
		::RPG::Client::TextID _GroupDesc_k__BackingField; // 0x20

		::System::Void _ctor(::System::Int32 totalPoint, ::RPG::Client::TextID groupDesc, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* modifiers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::TextID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA__CTOR_OFFSET))(this, totalPoint, groupDesc, modifiers);
		}

		static ::RPG::Client::ElationBattleBuffGroupViewData* Create(::System::Int32 totalPoint, ::RPG::Client::TextID groupDesc, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* modifiers)
		{
			return ((::RPG::Client::ElationBattleBuffGroupViewData*(*)(::System::Int32, ::RPG::Client::TextID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_CREATE_OFFSET))(totalPoint, groupDesc, modifiers);
		}

		::System::Int32 get_TotalPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_TOTALPOINT_OFFSET))(this);
		}

		::System::Void set_TotalPoint(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_TOTALPOINT_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_GroupDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_GROUPDESC_OFFSET))(this);
		}

		::System::Void set_GroupDesc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_GROUPDESC_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>* get_BuffViewDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_GET_BUFFVIEWDATAS_OFFSET))(this);
		}

		::System::Void set_BuffViewDatas(::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBATTLEBUFFGROUPVIEWDATA_SET_BUFFVIEWDATAS_OFFSET))(this, value);
		}
	};
}
