#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EF41A94FBB43C5D7_GET_FACESUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xCFD19E0)
#define CLASS_1_EF41A94FBB43C5D7_GET_FIGHTIDLIST_OFFSET UNITYSDK_OFFSET(0xCFD19C0)
#define CLASS_1_EF41A94FBB43C5D7_GET_ID_OFFSET UNITYSDK_OFFSET(0xCFD1980)
#define CLASS_1_EF41A94FBB43C5D7_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCFD1A00)
#define CLASS_1_EF41A94FBB43C5D7_GET_UNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xCFD19A0)
#define CLASS_1_EF41A94FBB43C5D7_SET_FACESUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xCFD19F0)
#define CLASS_1_EF41A94FBB43C5D7_SET_FIGHTIDLIST_OFFSET UNITYSDK_OFFSET(0xCFD19D0)
#define CLASS_1_EF41A94FBB43C5D7_SET_ID_OFFSET UNITYSDK_OFFSET(0xCFD1990)
#define CLASS_1_EF41A94FBB43C5D7_SET_NAME_OFFSET UNITYSDK_OFFSET(0xCFD1A10)
#define CLASS_1_EF41A94FBB43C5D7_SET_UNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xCFD19B0)
#define CLASS_1_EF41A94FBB43C5D7__CTOR_OFFSET UNITYSDK_OFFSET(0xCFD1A20)

inline static constexpr unsigned int Class_1_EF41A94FBB43C5D7_TypeDefinitionIndex = 79426;

class Class_1_EF41A94FBB43C5D7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _FightIDList_k__BackingField; // 0x10
	::System::UInt32 _ID_k__BackingField; // 0x18
	::System::UInt32 _FaceSubMissionID_k__BackingField; // 0x1C
	::System::UInt32 _UnlockSubMissionID_k__BackingField; // 0x20
	::RPG::Client::TextID _Name_k__BackingField; // 0x28

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
