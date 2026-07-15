#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class StrongChallengeBuffRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBUFFDATA_CREATEBYID_OFFSET UNITYSDK_OFFSET(0x193453D0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBUFFDATA_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x193451F0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBUFFDATA_GET_COST_OFFSET UNITYSDK_OFFSET(0x19345200)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBUFFDATA_GET_DESCPARAMS_OFFSET UNITYSDK_OFFSET(0x19345380)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBUFFDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x19345310)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBUFFDATA_GET_ICON_OFFSET UNITYSDK_OFFSET(0x193452C0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBUFFDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19345250)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBUFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19345480)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStrongChallengeBuffData_TypeDefinitionIndex = 59157;

	class ActivityStrongChallengeBuffData : public ::System::Object
	{
	public:
		::RPG::GameCore::StrongChallengeBuffRow* _CostRow; // 0x10
		::RPG::GameCore::MazeBuffRow* _MazeBuffRow; // 0x18
		::System::UInt32 _BuffID_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::GameCore::StrongChallengeBuffRow* a1, ::RPG::GameCore::MazeBuffRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StrongChallengeBuffRow*, ::RPG::GameCore::MazeBuffRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBUFFDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBUFFDATA_GET_BUFFID_OFFSET))(this);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBUFFDATA_GET_COST_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBUFFDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBUFFDATA_GET_ICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBUFFDATA_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBUFFDATA_GET_DESCPARAMS_OFFSET))(this);
		}

		static ::RPG::Client::ActivityStrongChallengeBuffData* CreateByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityStrongChallengeBuffData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBUFFDATA_CREATEBYID_OFFSET))(a1);
		}
	};
}
