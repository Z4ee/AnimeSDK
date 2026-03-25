#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarDemoConfigRow; }
namespace RPG::GameCore { class BattleScoringChangeParams; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRIALOBJECTIVEDATA_GETTARGETDESC_OFFSET UNITYSDK_OFFSET(0xA639DE0)
#define RPG_CLIENT_TRIALOBJECTIVEDATA_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0xA639F90)
#define RPG_CLIENT_TRIALOBJECTIVEDATA_GET_GUIDEGROUPID_OFFSET UNITYSDK_OFFSET(0xA639F70)
#define RPG_CLIENT_TRIALOBJECTIVEDATA_GET_ISFINISHALL_OFFSET UNITYSDK_OFFSET(0xA639FB0)
#define RPG_CLIENT_TRIALOBJECTIVEDATA_GET_OBJECTIVECOUNT_OFFSET UNITYSDK_OFFSET(0xA639F20)
#define RPG_CLIENT_TRIALOBJECTIVEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xA639E60)
#define RPG_CLIENT_TRIALOBJECTIVEDATA_SET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0xA639FA0)
#define RPG_CLIENT_TRIALOBJECTIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA639BF0)
#define RPG_CLIENT_TRIALOBJECTIVEDATA__INITDATA_OFFSET UNITYSDK_OFFSET(0xA639C40)

namespace RPG::Client
{
	inline static constexpr unsigned int TrialObjectiveData_TypeDefinitionIndex = 59270;

	class TrialObjectiveData : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarDemoConfigRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _TargetDescList; // 0x18
		::System::UInt32 _ScoreID; // 0x20
		::System::UInt32 _CurProgress_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 trialStageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIALOBJECTIVEDATA__CTOR_OFFSET))(this, trialStageID);
		}

		::RPG::Client::TextID GetTargetDesc(::System::UInt32 progress)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIALOBJECTIVEDATA_GETTARGETDESC_OFFSET))(this, progress);
		}

		::System::Void Refresh(::RPG::GameCore::BattleScoringChangeParams* param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleScoringChangeParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIALOBJECTIVEDATA_REFRESH_OFFSET))(this, param);
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

		::System::Void set_CurProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIALOBJECTIVEDATA_SET_CURPROGRESS_OFFSET))(this, value);
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
