#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/BasePixAirPendingAction.h"
#include "unitysdk/RPG/Client/PixAir/PixAirNodeCase.h"

class Class_1_7FF19F6206AF6DD7_38;
namespace RPG::Client::PixAir { class PixAirEquipDisplayData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION_FINISHSUPPLYSTAGE_OFFSET UNITYSDK_OFFSET(0xC3D7C60)
#define RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION_FINISH_OFFSET UNITYSDK_OFFSET(0xC3D7F70)
#define RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION_GETCONTENTKEY_OFFSET UNITYSDK_OFFSET(0xC3D7F00)
#define RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION_GET_ENEMYID_OFFSET UNITYSDK_OFFSET(0xC3D8000)
#define RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION_GET_NODECASE_OFFSET UNITYSDK_OFFSET(0xC3D7FF0)
#define RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION_SET_ENEMYID_OFFSET UNITYSDK_OFFSET(0xC3D8010)
#define RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION_START_OFFSET UNITYSDK_OFFSET(0xC3D7E80)
#define RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0xC3D7A40)
#define RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC3D78C0)
#define RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION___IFIXBASEPROXY_FINISH_OFFSET UNITYSDK_OFFSET(0xC3D80E0)
#define RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION___IFIXBASEPROXY_GETCONTENTKEY_OFFSET UNITYSDK_OFFSET(0xC3D8080)
#define RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0xC3D8020)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirLootSelectAction_TypeDefinitionIndex = 73613;

	class PixAirLootSelectAction : public ::RPG::Client::PixAir::BasePixAirPendingAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipDisplayData*>* DisplayEquipItemList; // 0x18
		::System::UInt32 _EnemyID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_7FF19F6206AF6DD7_38* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_7FF19F6206AF6DD7_38*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void TakeReward(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION_TAKEREWARD_OFFSET))(this, a1);
		}

		::System::Void FinishSupplyStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION_FINISHSUPPLYSTAGE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION_START_OFFSET))(this);
		}

		::System::String* GetContentKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION_GETCONTENTKEY_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION_FINISH_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirNodeCase get_NodeCase()
		{
			return ((::RPG::Client::PixAir::PixAirNodeCase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION_GET_NODECASE_OFFSET))(this);
		}

		::System::UInt32 get_EnemyID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION_GET_ENEMYID_OFFSET))(this);
		}

		::System::Void set_EnemyID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION_SET_ENEMYID_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION___IFIXBASEPROXY_START_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetContentKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION___IFIXBASEPROXY_GETCONTENTKEY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLOOTSELECTACTION___IFIXBASEPROXY_FINISH_OFFSET))(this);
		}
	};
}
