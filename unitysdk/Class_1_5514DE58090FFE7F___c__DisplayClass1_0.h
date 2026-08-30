#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5514DE58090FFE7F;
namespace RPG::Client { class TeamBuildSynopsis; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5514DE58090FFE7F___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F44810)
#define CLASS_1_5514DE58090FFE7F___C__DISPLAYCLASS1_0__REFRESHTRIALTEAMBUILD_B__1_OFFSET UNITYSDK_OFFSET(0x18F44B00)

inline static constexpr unsigned int Class_1_5514DE58090FFE7F___c__DisplayClass1_0_TypeDefinitionIndex = 61985;

class Class_1_5514DE58090FFE7F___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* partialAvatarIDs; // 0x10
	::Class_1_5514DE58090FFE7F* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5514DE58090FFE7F___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*>* _RefreshTrialTeamBuild_b__1()
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5514DE58090FFE7F___C__DISPLAYCLASS1_0__REFRESHTRIALTEAMBUILD_B__1_OFFSET))(this);
	}
};
