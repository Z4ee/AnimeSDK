#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EF41A94FBB43C5D7_GET_FACESUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x165B3520)
#define CLASS_1_EF41A94FBB43C5D7_GET_FIGHTIDLIST_OFFSET UNITYSDK_OFFSET(0x165B3500)
#define CLASS_1_EF41A94FBB43C5D7_GET_ID_OFFSET UNITYSDK_OFFSET(0x165B34C0)
#define CLASS_1_EF41A94FBB43C5D7_GET_NAME_OFFSET UNITYSDK_OFFSET(0x165B3540)
#define CLASS_1_EF41A94FBB43C5D7_GET_UNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x165B34E0)
#define CLASS_1_EF41A94FBB43C5D7_SET_FACESUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x165B3530)
#define CLASS_1_EF41A94FBB43C5D7_SET_FIGHTIDLIST_OFFSET UNITYSDK_OFFSET(0x165B3510)
#define CLASS_1_EF41A94FBB43C5D7_SET_ID_OFFSET UNITYSDK_OFFSET(0x165B34D0)
#define CLASS_1_EF41A94FBB43C5D7_SET_NAME_OFFSET UNITYSDK_OFFSET(0x165B3550)
#define CLASS_1_EF41A94FBB43C5D7_SET_UNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x165B34F0)
#define CLASS_1_EF41A94FBB43C5D7__CTOR_OFFSET UNITYSDK_OFFSET(0x165B3560)

inline static constexpr unsigned int Class_1_EF41A94FBB43C5D7_TypeDefinitionIndex = 79425;

class Class_1_EF41A94FBB43C5D7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _FightIDList_k__BackingField; // 0x10
	::RPG::Client::TextID _Name_k__BackingField; // 0x18
	::System::UInt32 _FaceSubMissionID_k__BackingField; // 0x28
	::System::UInt32 _UnlockSubMissionID_k__BackingField; // 0x2C
	::System::UInt32 _ID_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF41A94FBB43C5D7__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF41A94FBB43C5D7_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF41A94FBB43C5D7_SET_ID_OFFSET))(this, a1);
	}

	::System::UInt32 get_UnlockSubMissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF41A94FBB43C5D7_GET_UNLOCKSUBMISSIONID_OFFSET))(this);
	}

	::System::Void set_UnlockSubMissionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF41A94FBB43C5D7_SET_UNLOCKSUBMISSIONID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_FightIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF41A94FBB43C5D7_GET_FIGHTIDLIST_OFFSET))(this);
	}

	::System::Void set_FightIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_EF41A94FBB43C5D7_SET_FIGHTIDLIST_OFFSET))(this, a1);
	}

	::System::UInt32 get_FaceSubMissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF41A94FBB43C5D7_GET_FACESUBMISSIONID_OFFSET))(this);
	}

	::System::Void set_FaceSubMissionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF41A94FBB43C5D7_SET_FACESUBMISSIONID_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF41A94FBB43C5D7_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_EF41A94FBB43C5D7_SET_NAME_OFFSET))(this, a1);
	}
};
