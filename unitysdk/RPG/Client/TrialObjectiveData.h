#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarDemoConfigRow; }
namespace RPG::GameCore { class BattleScoringChangeParams; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRIALOBJECTIVEDATA_GETTARGETDESC_OFFSET UNITYSDK_OFFSET(0xCAEE410)
#define RPG_CLIENT_TRIALOBJECTIVEDATA_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0xCAEE5D0)
#define RPG_CLIENT_TRIALOBJECTIVEDATA_GET_GUIDEGROUPID_OFFSET UNITYSDK_OFFSET(0xCAEE5B0)
#define RPG_CLIENT_TRIALOBJECTIVEDATA_GET_ISFINISHALL_OFFSET UNITYSDK_OFFSET(0xCAEE5F0)
#define RPG_CLIENT_TRIALOBJECTIVEDATA_GET_OBJECTIVECOUNT_OFFSET UNITYSDK_OFFSET(0xCAEE560)
#define RPG_CLIENT_TRIALOBJECTIVEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xCAEE4B0)
#define RPG_CLIENT_TRIALOBJECTIVEDATA_SET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0xCAEE5E0)
#define RPG_CLIENT_TRIALOBJECTIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCAEE1F0)
#define RPG_CLIENT_TRIALOBJECTIVEDATA__INITDATA_OFFSET UNITYSDK_OFFSET(0xCAEE240)

namespace RPG::Client
{
	inline static constexpr unsigned int TrialObjectiveData_TypeDefinitionIndex = 67603;

	class TrialObjectiveData : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarDemoConfigRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _TargetDescList; // 0x18
		::System::UInt32 _CurProgress_k__BackingField; // 0x20
		::System::UInt32 _ScoreID; // 0x24

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIALOBJECTIVEDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetTargetDesc(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIALOBJECTIVEDATA_GETTARGETDESC_OFFSET))(this, a1);
		}

		::System::Void Refresh(::RPG::GameCore::BattleScoringChangeParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleScoringChangeParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIALOBJECTIVEDATA_REFRESH_OFFSET))(this, a1);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIALOBJECTIVEDATA__INITDATA_OFFSET))(this);
		}

		::System::UInt32 get_GuideGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIALOBJECTIVEDATA_GET_GUIDEGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_CurProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIALOBJECTIVEDATA_GET_CURPROGRESS_OFFSET))(this);
		}

		::System::Void set_CurProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIALOBJECTIVEDATA_SET_CURPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_ObjectiveCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIALOBJECTIVEDATA_GET_OBJECTIVECOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsFinishAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIALOBJECTIVEDATA_GET_ISFINISHALL_OFFSET))(this);
		}
	};
}
