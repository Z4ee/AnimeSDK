#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8887056F53F3B090;
class Class_1_B623150238B3CF94;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_4912F986695CB36B_ADD_CHANGED_OFFSET UNITYSDK_OFFSET(0x15A118D0)
#define CLASS_1_4912F986695CB36B_GET_CARDISPLAY_OFFSET UNITYSDK_OFFSET(0x15A119D0)
#define CLASS_1_4912F986695CB36B_GET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x15A119F0)
#define CLASS_1_4912F986695CB36B_GET_LASTCYCLEID_OFFSET UNITYSDK_OFFSET(0x15A11990)
#define CLASS_1_4912F986695CB36B_GET_UNLOCKEDDRIVERIDS_OFFSET UNITYSDK_OFFSET(0x15A119B0)
#define CLASS_1_4912F986695CB36B_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15A11A10)
#define CLASS_1_4912F986695CB36B_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x15A11A70)
#define CLASS_1_4912F986695CB36B_REMOVE_CHANGED_OFFSET UNITYSDK_OFFSET(0x15A11930)
#define CLASS_1_4912F986695CB36B_SET_CARDISPLAY_OFFSET UNITYSDK_OFFSET(0x15A119E0)
#define CLASS_1_4912F986695CB36B_SET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x15A11A00)
#define CLASS_1_4912F986695CB36B_SET_LASTCYCLEID_OFFSET UNITYSDK_OFFSET(0x15A119A0)
#define CLASS_1_4912F986695CB36B_SET_UNLOCKEDDRIVERIDS_OFFSET UNITYSDK_OFFSET(0x15A119C0)
#define CLASS_1_4912F986695CB36B__CTOR_OFFSET UNITYSDK_OFFSET(0x15A11B30)

inline static constexpr unsigned int Class_1_4912F986695CB36B_TypeDefinitionIndex = 80330;

class Class_1_4912F986695CB36B : public ::System::Object
{
public:
	::Class_1_B623150238B3CF94* _CarDisplay_k__BackingField; // 0x10
	::System::Action* Changed; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockedDriverIDs_k__BackingField; // 0x20
	::Class_1_8887056F53F3B090* _Challenge_k__BackingField; // 0x28
	::System::UInt32 _LastCycleID_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4912F986695CB36B__CTOR_OFFSET))(this);
	}

	::System::Void add_Changed(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4912F986695CB36B_ADD_CHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_Changed(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4912F986695CB36B_REMOVE_CHANGED_OFFSET))(this, a1);
	}

	::System::UInt32 get_LastCycleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4912F986695CB36B_GET_LASTCYCLEID_OFFSET))(this);
	}

	::System::Void set_LastCycleID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4912F986695CB36B_SET_LASTCYCLEID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* get_UnlockedDriverIDs()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4912F986695CB36B_GET_UNLOCKEDDRIVERIDS_OFFSET))(this);
	}

	::System::Void set_UnlockedDriverIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_4912F986695CB36B_SET_UNLOCKEDDRIVERIDS_OFFSET))(this, a1);
	}

	::Class_1_B623150238B3CF94* get_CarDisplay()
	{
		return ((::Class_1_B623150238B3CF94*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4912F986695CB36B_GET_CARDISPLAY_OFFSET))(this);
	}

	::System::Void set_CarDisplay(::Class_1_B623150238B3CF94* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B623150238B3CF94*))((::PBYTE)hIl2Cpp + CLASS_1_4912F986695CB36B_SET_CARDISPLAY_OFFSET))(this, a1);
	}

	::Class_1_8887056F53F3B090* get_Challenge()
	{
		return ((::Class_1_8887056F53F3B090*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4912F986695CB36B_GET_CHALLENGE_OFFSET))(this);
	}

	::System::Void set_Challenge(::Class_1_8887056F53F3B090* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8887056F53F3B090*))((::PBYTE)hIl2Cpp + CLASS_1_4912F986695CB36B_SET_CHALLENGE_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4912F986695CB36B_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4912F986695CB36B_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}
};
