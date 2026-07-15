#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/System/Object.h"

class Class_2_46FD925988407D1E;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_CAKERACEUTILS_CANTRANSFERTOENTRANCE_OFFSET UNITYSDK_OFFSET(0x1AC4E850)
#define RPG_CLIENT_CAKERACEUTILS_CHECKISCANACCEPTINVITE_OFFSET UNITYSDK_OFFSET(0x1AC46400)
#define RPG_CLIENT_CAKERACEUTILS_CURRENTGRAVITY_OFFSET UNITYSDK_OFFSET(0x1AC4DFD0)
#define RPG_CLIENT_CAKERACEUTILS_CURRENTPARABOLEGRAVITY_OFFSET UNITYSDK_OFFSET(0x1AC4E1A0)
#define RPG_CLIENT_CAKERACEUTILS_GETFIELDCOST_OFFSET UNITYSDK_OFFSET(0x1AC4E720)
#define RPG_CLIENT_CAKERACEUTILS_GETPROPERTYORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1AC4DD70)
#define RPG_CLIENT_CAKERACEUTILS_ISDEBUFFCELLTYPE_OFFSET UNITYSDK_OFFSET(0x1AC4E3B0)
#define RPG_CLIENT_CAKERACEUTILS_ISINENTRANCEFLOOR_OFFSET UNITYSDK_OFFSET(0x1AC46580)
#define RPG_CLIENT_CAKERACEUTILS_ISRETURN3CSUBMISSIONINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AC4E400)
#define RPG_CLIENT_CAKERACEUTILS_RESETCATALLANIMATORTRIGGER_OFFSET UNITYSDK_OFFSET(0x1AC4E600)
#define RPG_CLIENT_CAKERACEUTILS_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x1AC4DEE0)
#define RPG_CLIENT_CAKERACEUTILS_TRANSFERTOENTRANCE_OFFSET UNITYSDK_OFFSET(0x1AC467E0)
#define RPG_CLIENT_CAKERACEUTILS__GETCUREARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AC4EA60)
#define RPG_CLIENT_CAKERACEUTILS__GETENTRANCETRANSFERPARAM_OFFSET UNITYSDK_OFFSET(0x1AC4E9A0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceUtils_TypeDefinitionIndex = 57604;

	class CakeRaceUtils : public ::System::Object
	{
	public:
		static ::System::Int32 GetPropertyOrDefault(::Class_2_46FD925988407D1E* a1, ::RPG::GameCore::CakeRaceProperty a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::Class_2_46FD925988407D1E*, ::RPG::GameCore::CakeRaceProperty, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_GETPROPERTYORDEFAULT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetProperty(::Class_2_46FD925988407D1E* a1, ::RPG::GameCore::CakeRaceProperty a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::Class_2_46FD925988407D1E*, ::RPG::GameCore::CakeRaceProperty, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_SETPROPERTY_OFFSET))(a1, a2, a3);
		}

		static ::System::Single CurrentGravity(::Class_2_46FD925988407D1E* a1)
		{
			return ((::System::Single(*)(::Class_2_46FD925988407D1E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_CURRENTGRAVITY_OFFSET))(a1);
		}

		static ::System::Single CurrentParaboleGravity(::Class_2_46FD925988407D1E* a1)
		{
			return ((::System::Single(*)(::Class_2_46FD925988407D1E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_CURRENTPARABOLEGRAVITY_OFFSET))(a1);
		}

		static ::System::Boolean IsDebuffCellType(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_ISDEBUFFCELLTYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsReturn3CSubMissionInProgress()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_ISRETURN3CSUBMISSIONINPROGRESS_OFFSET))();
		}

		static ::System::Void ResetCatAllAnimatorTrigger(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_RESETCATALLANIMATORTRIGGER_OFFSET))(a1);
		}

		static ::System::Boolean CheckIsCanAcceptInvite(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_CHECKISCANACCEPTINVITE_OFFSET))(a1);
		}

		static ::System::UInt32 GetFieldCost(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_GETFIELDCOST_OFFSET))(a1);
		}

		static ::System::Void TransferToEntrance(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_TRANSFERTOENTRANCE_OFFSET))(a1, a2);
		}

		static ::System::Boolean CanTransferToEntrance()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_CANTRANSFERTOENTRANCE_OFFSET))();
		}

		static ::System::Boolean IsInEntranceFloor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS_ISINENTRANCEFLOOR_OFFSET))();
		}

		static ::System::Void _GetEntranceTransferParam(::System::UInt32& a1, ::System::UInt32& a2)
		{
			return ((::System::Void(*)(::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS__GETENTRANCETRANSFERPARAM_OFFSET))(a1, a2);
		}

		static ::System::UInt32 _GetCurEarlyAccessContentID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS__GETCUREARLYACCESSCONTENTID_OFFSET))();
		}
	};
}
