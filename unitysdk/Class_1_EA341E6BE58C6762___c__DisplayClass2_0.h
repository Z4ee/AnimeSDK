#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlayerReturnTrialAvatarGroup; }
namespace RPG::Client { class TeamBuildSynopsis; }
namespace RPG::Client { class TeamModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EA341E6BE58C6762___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12129150)
#define CLASS_1_EA341E6BE58C6762___C__DISPLAYCLASS2_0__SYNCTRIALBUILDTOMAINLINETEAM_B__0_OFFSET UNITYSDK_OFFSET(0x12129250)

inline static constexpr unsigned int Class_1_EA341E6BE58C6762___c__DisplayClass2_0_TypeDefinitionIndex = 57095;

class Class_1_EA341E6BE58C6762___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::Client::TeamModule* teamModule; // 0x10
	::RPG::Client::PlayerReturnTrialAvatarGroup* usingGroup; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA341E6BE58C6762___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _SyncTrialBuildToMainlineTeam_b__0(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* teamBuilds)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*))((::PBYTE)hIl2Cpp + CLASS_1_EA341E6BE58C6762___C__DISPLAYCLASS2_0__SYNCTRIALBUILDTOMAINLINETEAM_B__0_OFFSET))(this, teamBuilds);
	}
};
