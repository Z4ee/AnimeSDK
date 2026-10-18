#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MechanicThresholdHPMarkData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER_CREATE_OFFSET UNITYSDK_OFFSET(0xD6893D0)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER_GETISMECHANICTHRESHOLDHPMARKDATA_OFFSET UNITYSDK_OFFSET(0xD689780)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xD689300)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER_GET_HASMARK_OFFSET UNITYSDK_OFFSET(0xD689350)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER_GET_MARKDATAS_OFFSET UNITYSDK_OFFSET(0xD6892C0)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER_REFRESH_OFFSET UNITYSDK_OFFSET(0xD6894A0)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0xD689460)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER__REFRESH_B__7_0_OFFSET UNITYSDK_OFFSET(0xD6897F0)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER__RESET_OFFSET UNITYSDK_OFFSET(0xD689710)

namespace RPG::Client
{
	inline static constexpr unsigned int MechanicThresholdHPMarkDataContainer_TypeDefinitionIndex = 71673;

	class MechanicThresholdHPMarkDataContainer : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MechanicThresholdHPMarkData*>* _MechanicThresholdHPMarkDatas; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechanicThresholdHPMarkData*>* get_MarkDatas()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechanicThresholdHPMarkData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER_GET_MARKDATAS_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_HasMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER_GET_HASMARK_OFFSET))(this);
		}

		static ::RPG::Client::MechanicThresholdHPMarkDataContainer* Create(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::MechanicThresholdHPMarkDataContainer*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER_CREATE_OFFSET))(a1);
		}

		::System::Void Refresh(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER_REFRESH_OFFSET))(this, a1);
		}

		::System::Boolean GetIsMechanicThresholdHPMarkData(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER_GETISMECHANICTHRESHOLDHPMARKDATA_OFFSET))(this, a1);
		}

		::System::Void _Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER__RESET_OFFSET))(this);
		}

		::System::Void _Refresh_b__7_0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER__REFRESH_B__7_0_OFFSET))(this, a1);
		}
	};
}
