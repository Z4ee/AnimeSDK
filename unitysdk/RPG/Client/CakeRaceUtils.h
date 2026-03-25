#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/System/Object.h"

class Class_2_15E317187C4E8254;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_CAKERACEUTILS_CANTRANSFERTOENTRANCE_OFFSET UNITYSDK_OFFSET(0x92501D0)
#define RPG_CLIENT_CAKERACEUTILS_CHECKISCANACCEPTINVITE_OFFSET UNITYSDK_OFFSET(0x9248F30)
#define RPG_CLIENT_CAKERACEUTILS_CURRENTGRAVITY_OFFSET UNITYSDK_OFFSET(0x924F950)
#define RPG_CLIENT_CAKERACEUTILS_CURRENTPARABOLEGRAVITY_OFFSET UNITYSDK_OFFSET(0x924FB20)
#define RPG_CLIENT_CAKERACEUTILS_GETFIELDCOST_OFFSET UNITYSDK_OFFSET(0x92500A0)
#define RPG_CLIENT_CAKERACEUTILS_GETPROPERTYORDEFAULT_OFFSET UNITYSDK_OFFSET(0x924F6C0)
#define RPG_CLIENT_CAKERACEUTILS_ISDEBUFFCELLTYPE_OFFSET UNITYSDK_OFFSET(0x924FD30)
#define RPG_CLIENT_CAKERACEUTILS_ISINENTRANCEFLOOR_OFFSET UNITYSDK_OFFSET(0x9249040)
#define RPG_CLIENT_CAKERACEUTILS_ISRETURN3CSUBMISSIONINPROGRESS_OFFSET UNITYSDK_OFFSET(0x924FD80)
#define RPG_CLIENT_CAKERACEUTILS_RESETCATALLANIMATORTRIGGER_OFFSET UNITYSDK_OFFSET(0x924FF80)
#define RPG_CLIENT_CAKERACEUTILS_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x924F860)
#define RPG_CLIENT_CAKERACEUTILS_TRANSFERTOENTRANCE_OFFSET UNITYSDK_OFFSET(0x92492C0)
#define RPG_CLIENT_CAKERACEUTILS__GETCUREARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0x9250340)
#define RPG_CLIENT_CAKERACEUTILS__GETENTRANCETRANSFERPARAM_OFFSET UNITYSDK_OFFSET(0x9250280)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceUtils_TypeDefinitionIndex = 48850;

	class CakeRaceUtils : public ::System::Object
	{
	public:
		static ::System::Int32 GetPropertyOrDefault(::Class_2_15E317187C4E8254* entity, ::RPG::GameCore::CakeRaceProperty property, ::System::Int32 defaultValue)
		{
			return ((::System::Int32(*)(::Class_2_15E317187C4E8254*, ::RPG::GameCore::CakeRaceProperty, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_GETPROPERTYORDEFAULT_OFFSET))(entity, property, defaultValue);
		}

		static ::System::Void SetProperty(::Class_2_15E317187C4E8254* entity, ::RPG::GameCore::CakeRaceProperty property, ::System::Int32 value)
		{
			return ((::System::Void(*)(::Class_2_15E317187C4E8254*, ::RPG::GameCore::CakeRaceProperty, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_SETPROPERTY_OFFSET))(entity, property, value);
		}

		static ::System::Single CurrentGravity(::Class_2_15E317187C4E8254* entity)
		{
			return ((::System::Single(*)(::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_CURRENTGRAVITY_OFFSET))(entity);
		}

		static ::System::Single CurrentParaboleGravity(::Class_2_15E317187C4E8254* catEntity)
		{
			return ((::System::Single(*)(::Class_2_15E317187C4E8254*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_CURRENTPARABOLEGRAVITY_OFFSET))(catEntity);
		}

		static ::System::Boolean IsDebuffCellType(::RPG::GameCore::CakeRaceCellType cellType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_ISDEBUFFCELLTYPE_OFFSET))(cellType);
		}

		static ::System::Boolean IsReturn3CSubMissionInProgress()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_ISRETURN3CSUBMISSIONINPROGRESS_OFFSET))();
		}

		static ::System::Void ResetCatAllAnimatorTrigger(::UnityEngine::Animator* animator)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_RESETCATALLANIMATORTRIGGER_OFFSET))(animator);
		}

		static ::System::Boolean CheckIsCanAcceptInvite(::System::Collections::Generic::List_1<::System::UInt32>* gameParamList)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_CHECKISCANACCEPTINVITE_OFFSET))(gameParamList);
		}

		static ::System::UInt32 GetFieldCost(::System::UInt32 fieldID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_GETFIELDCOST_OFFSET))(fieldID);
		}

		static ::System::Void TransferToEntrance(::System::Action* preTeleportCallback, ::System::Action* afterTeleportCallback)
		{
			return ((::System::Void(*)(::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_TRANSFERTOENTRANCE_OFFSET))(preTeleportCallback, afterTeleportCallback);
		}

		static ::System::Boolean CanTransferToEntrance()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_CANTRANSFERTOENTRANCE_OFFSET))();
		}

		static ::System::Boolean IsInEntranceFloor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_ISINENTRANCEFLOOR_OFFSET))();
		}

		static ::System::Void _GetEntranceTransferParam(::System::UInt32& entranceID, ::System::UInt32& mappingInfoID)
		{
			return ((::System::Void(*)(::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS__GETENTRANCETRANSFERPARAM_OFFSET))(entranceID, mappingInfoID);
		}

		static ::System::UInt32 _GetCurEarlyAccessContentID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS__GETCUREARLYACCESSCONTENTID_OFFSET))();
		}
	};
}
