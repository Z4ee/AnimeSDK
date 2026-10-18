#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52E21E813AA435A9;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E7C4615647E1695F_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x158D17E0)
#define CLASS_1_E7C4615647E1695F_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x158D1860)
#define CLASS_1_E7C4615647E1695F_GET_PARTNERACTORID_OFFSET UNITYSDK_OFFSET(0x158D1820)
#define CLASS_1_E7C4615647E1695F_GET_TALENTPOINTS_OFFSET UNITYSDK_OFFSET(0x158D1840)
#define CLASS_1_E7C4615647E1695F_GET_UNLOCKBYFINISHSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x158D1800)
#define CLASS_1_E7C4615647E1695F_METHOD_1_B66FAADA389EB5F1_OFFSET UNITYSDK_OFFSET(0x158D18D0)
#define CLASS_1_E7C4615647E1695F_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x158D17F0)
#define CLASS_1_E7C4615647E1695F_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x158D1870)
#define CLASS_1_E7C4615647E1695F_SET_PARTNERACTORID_OFFSET UNITYSDK_OFFSET(0x158D1830)
#define CLASS_1_E7C4615647E1695F_SET_TALENTPOINTS_OFFSET UNITYSDK_OFFSET(0x158D1850)
#define CLASS_1_E7C4615647E1695F_SET_UNLOCKBYFINISHSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x158D1810)
#define CLASS_1_E7C4615647E1695F__CTOR_OFFSET UNITYSDK_OFFSET(0x158D1880)

inline static constexpr unsigned int Class_1_E7C4615647E1695F_TypeDefinitionIndex = 79774;

class Class_1_E7C4615647E1695F : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*>* _TalentPoints_k__BackingField; // 0x10
	::Class_1_52E21E813AA435A9* HNEOOKPBCNK; // 0x18
	::System::UInt32 _UnlockByFinishSubMissionID_k__BackingField; // 0x20
	::System::UInt32 _PartnerActorID_k__BackingField; // 0x24
	::System::Boolean _IsUnlocked_k__BackingField; // 0x28
	::System::UInt32 _Identifier_k__BackingField; // 0x2C

	::System::Void _ctor(::Class_1_52E21E813AA435A9* a1, ::System::Collections::Generic::List_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_52E21E813AA435A9*, ::System::Collections::Generic::List_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7C4615647E1695F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 get_Identifier()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4615647E1695F_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::Void set_Identifier(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E7C4615647E1695F_SET_IDENTIFIER_OFFSET))(this, a1);
	}

	::System::UInt32 get_UnlockByFinishSubMissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4615647E1695F_GET_UNLOCKBYFINISHSUBMISSIONID_OFFSET))(this);
	}

	::System::Void set_UnlockByFinishSubMissionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E7C4615647E1695F_SET_UNLOCKBYFINISHSUBMISSIONID_OFFSET))(this, a1);
	}

	::System::UInt32 get_PartnerActorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4615647E1695F_GET_PARTNERACTORID_OFFSET))(this);
	}

	::System::Void set_PartnerActorID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E7C4615647E1695F_SET_PARTNERACTORID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*>* get_TalentPoints()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4615647E1695F_GET_TALENTPOINTS_OFFSET))(this);
	}

	::System::Void set_TalentPoints(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4615647E1695F_SET_TALENTPOINTS_OFFSET))(this, a1);
	}

	::System::Boolean get_IsUnlocked()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4615647E1695F_GET_ISUNLOCKED_OFFSET))(this);
	}

	::System::Void set_IsUnlocked(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7C4615647E1695F_SET_ISUNLOCKED_OFFSET))(this, a1);
	}

	::System::Void Method_1_B66FAADA389EB5F1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E7C4615647E1695F_METHOD_1_B66FAADA389EB5F1_OFFSET))(this, a1, a2);
	}
};
