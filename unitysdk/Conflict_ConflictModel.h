#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Conflict_ConflictGroupUnit;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONFLICT_CONFLICTMODEL_ADDCURRENTFLOORUNIT_OFFSET UNITYSDK_OFFSET(0xA6F3570)
#define CONFLICT_CONFLICTMODEL_ADDOTHERFLOORUNIT_OFFSET UNITYSDK_OFFSET(0xA6F3B60)
#define CONFLICT_CONFLICTMODEL_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA6F66F0)
#define CONFLICT_CONFLICTMODEL_GETALLCURRENTFLOORCONFLICTIDS_OFFSET UNITYSDK_OFFSET(0xA6F6450)
#define CONFLICT_CONFLICTMODEL_GETALLOTHERFLOORCONFLICTIDS_OFFSET UNITYSDK_OFFSET(0xA6F61B0)
#define CONFLICT_CONFLICTMODEL_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xA6F6190)
#define CONFLICT_CONFLICTMODEL_SET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xA6F61A0)
#define CONFLICT_CONFLICTMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA6E71D0)

inline static constexpr unsigned int Conflict_ConflictModel_TypeDefinitionIndex = 38065;

class Conflict_ConflictModel : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Conflict_ConflictGroupUnit*>* OtherFloorGroupUnit; // 0x10
	::System::Collections::Generic::List_1<::Conflict_ConflictGroupUnit*>* CurrentFloorGroupUnits; // 0x18
	::System::UInt32 _MainMissionID_k__BackingField; // 0x20

	::System::Void _ctor(::System::UInt32 mainMissionID)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTMODEL__CTOR_OFFSET))(this, mainMissionID);
	}

	::System::UInt32 get_MainMissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTMODEL_GET_MAINMISSIONID_OFFSET))(this);
	}

	::System::Void set_MainMissionID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTMODEL_SET_MAINMISSIONID_OFFSET))(this, value);
	}

	::System::Void AddCurrentFloorUnit(::Conflict_ConflictGroupUnit* unit)
	{
		return ((::System::Void(*)(::PVOID, ::Conflict_ConflictGroupUnit*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTMODEL_ADDCURRENTFLOORUNIT_OFFSET))(this, unit);
	}

	::System::Void AddOtherFloorUnit(::Conflict_ConflictGroupUnit* unit)
	{
		return ((::System::Void(*)(::PVOID, ::Conflict_ConflictGroupUnit*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTMODEL_ADDOTHERFLOORUNIT_OFFSET))(this, unit);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* GetAllOtherFloorConflictIDs()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTMODEL_GETALLOTHERFLOORCONFLICTIDS_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* GetAllCurrentFloorConflictIDs()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTMODEL_GETALLCURRENTFLOORCONFLICTIDS_OFFSET))(this);
	}

	::System::Int32 CompareTo(::Conflict_ConflictModel* other)
	{
		return ((::System::Int32(*)(::PVOID, ::Conflict_ConflictModel*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTMODEL_COMPARETO_OFFSET))(this, other);
	}
};
