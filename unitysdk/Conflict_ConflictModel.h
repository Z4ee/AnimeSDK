#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Conflict_ConflictGroupUnit;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONFLICT_CONFLICTMODEL_ADDCURRENTFLOORUNIT_OFFSET UNITYSDK_OFFSET(0xE017050)
#define CONFLICT_CONFLICTMODEL_ADDOTHERFLOORUNIT_OFFSET UNITYSDK_OFFSET(0xE0177E0)
#define CONFLICT_CONFLICTMODEL_COMPARETO_OFFSET UNITYSDK_OFFSET(0xE01A1B0)
#define CONFLICT_CONFLICTMODEL_GETALLCURRENTFLOORCONFLICTIDS_OFFSET UNITYSDK_OFFSET(0xE019F30)
#define CONFLICT_CONFLICTMODEL_GETALLOTHERFLOORCONFLICTIDS_OFFSET UNITYSDK_OFFSET(0xE019CB0)
#define CONFLICT_CONFLICTMODEL_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xE019C90)
#define CONFLICT_CONFLICTMODEL_SET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xE019CA0)
#define CONFLICT_CONFLICTMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xE00A560)

inline static constexpr unsigned int Conflict_ConflictModel_TypeDefinitionIndex = 47610;

class Conflict_ConflictModel : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Conflict_ConflictGroupUnit*>* CurrentFloorGroupUnits; // 0x10
	::System::Collections::Generic::List_1<::Conflict_ConflictGroupUnit*>* OtherFloorGroupUnit; // 0x18
	::System::UInt32 _MainMissionID_k__BackingField; // 0x20

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTMODEL__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_MainMissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTMODEL_GET_MAINMISSIONID_OFFSET))(this);
	}

	::System::Void set_MainMissionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTMODEL_SET_MAINMISSIONID_OFFSET))(this, a1);
	}

	::System::Void AddCurrentFloorUnit(::Conflict_ConflictGroupUnit* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Conflict_ConflictGroupUnit*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTMODEL_ADDCURRENTFLOORUNIT_OFFSET))(this, a1);
	}

	::System::Void AddOtherFloorUnit(::Conflict_ConflictGroupUnit* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Conflict_ConflictGroupUnit*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTMODEL_ADDOTHERFLOORUNIT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* GetAllOtherFloorConflictIDs()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTMODEL_GETALLOTHERFLOORCONFLICTIDS_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* GetAllCurrentFloorConflictIDs()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTMODEL_GETALLCURRENTFLOORCONFLICTIDS_OFFSET))(this);
	}

	::System::Int32 CompareTo(::Conflict_ConflictModel* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Conflict_ConflictModel*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTMODEL_COMPARETO_OFFSET))(this, a1);
	}
};
