#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D99E79D11786C05A_GET_ISTUTORIAL_OFFSET UNITYSDK_OFFSET(0x18A8EB90)
#define CLASS_1_D99E79D11786C05A_GET_LOCKDRIVERID_OFFSET UNITYSDK_OFFSET(0x18A8EBB0)
#define CLASS_1_D99E79D11786C05A_GET_MATCHID_OFFSET UNITYSDK_OFFSET(0x18A8EB30)
#define CLASS_1_D99E79D11786C05A_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18A8EB70)
#define CLASS_1_D99E79D11786C05A_GET_TEAMRANKLIST_OFFSET UNITYSDK_OFFSET(0x18A8EBD0)
#define CLASS_1_D99E79D11786C05A_GET_TRACKIDLIST_OFFSET UNITYSDK_OFFSET(0x18A8EB50)
#define CLASS_1_D99E79D11786C05A_SET_ISTUTORIAL_OFFSET UNITYSDK_OFFSET(0x18A8EBA0)
#define CLASS_1_D99E79D11786C05A_SET_LOCKDRIVERID_OFFSET UNITYSDK_OFFSET(0x18A8EBC0)
#define CLASS_1_D99E79D11786C05A_SET_MATCHID_OFFSET UNITYSDK_OFFSET(0x18A8EB40)
#define CLASS_1_D99E79D11786C05A_SET_NAME_OFFSET UNITYSDK_OFFSET(0x18A8EB80)
#define CLASS_1_D99E79D11786C05A_SET_TEAMRANKLIST_OFFSET UNITYSDK_OFFSET(0x18A8EBE0)
#define CLASS_1_D99E79D11786C05A_SET_TRACKIDLIST_OFFSET UNITYSDK_OFFSET(0x18A8EB60)
#define CLASS_1_D99E79D11786C05A__CTOR_OFFSET UNITYSDK_OFFSET(0x18A8EBF0)

inline static constexpr unsigned int Class_1_D99E79D11786C05A_TypeDefinitionIndex = 80341;

class Class_1_D99E79D11786C05A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _TeamRankList_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* _TrackIDList_k__BackingField; // 0x18
	::System::UInt32 _MatchID_k__BackingField; // 0x20
	::System::UInt32 _LockDriverID_k__BackingField; // 0x24
	::System::Boolean _IsTutorial_k__BackingField; // 0x28
	::RPG::Client::TextID _Name_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D99E79D11786C05A__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_MatchID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D99E79D11786C05A_GET_MATCHID_OFFSET))(this);
	}

	::System::Void set_MatchID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D99E79D11786C05A_SET_MATCHID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_TrackIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D99E79D11786C05A_GET_TRACKIDLIST_OFFSET))(this);
	}

	::System::Void set_TrackIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D99E79D11786C05A_SET_TRACKIDLIST_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D99E79D11786C05A_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_D99E79D11786C05A_SET_NAME_OFFSET))(this, a1);
	}

	::System::Boolean get_IsTutorial()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D99E79D11786C05A_GET_ISTUTORIAL_OFFSET))(this);
	}

	::System::Void set_IsTutorial(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D99E79D11786C05A_SET_ISTUTORIAL_OFFSET))(this, a1);
	}

	::System::UInt32 get_LockDriverID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D99E79D11786C05A_GET_LOCKDRIVERID_OFFSET))(this);
	}

	::System::Void set_LockDriverID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D99E79D11786C05A_SET_LOCKDRIVERID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_TeamRankList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D99E79D11786C05A_GET_TEAMRANKLIST_OFFSET))(this);
	}

	::System::Void set_TeamRankList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D99E79D11786C05A_SET_TEAMRANKLIST_OFFSET))(this, a1);
	}
};
