#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_FF3FBD145313F82A_GET_ASCENSIONBANNEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0x1AF1B7B0)
#define CLASS_1_FF3FBD145313F82A_GET_CHIMERAMAXATK_OFFSET UNITYSDK_OFFSET(0x1AF1B730)
#define CLASS_1_FF3FBD145313F82A_GET_CHIMERAMAXHP_OFFSET UNITYSDK_OFFSET(0x1AF1B6F0)
#define CLASS_1_FF3FBD145313F82A_GET_CHIMERAMINATK_OFFSET UNITYSDK_OFFSET(0x1AF1B750)
#define CLASS_1_FF3FBD145313F82A_GET_CHIMERAMINHP_OFFSET UNITYSDK_OFFSET(0x1AF1B710)
#define CLASS_1_FF3FBD145313F82A_GET_CRITICALHITDAMAGE_OFFSET UNITYSDK_OFFSET(0x1AF1B770)
#define CLASS_1_FF3FBD145313F82A_GET_MAXCASTCOUNTPERPHASE_OFFSET UNITYSDK_OFFSET(0x1AF1B790)
#define CLASS_1_FF3FBD145313F82A_GET_TEAMSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x1AF1B6D0)
#define CLASS_1_FF3FBD145313F82A_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x1AF1BC70)
#define CLASS_1_FF3FBD145313F82A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AF1BC30)
#define CLASS_1_FF3FBD145313F82A_SET_ASCENSIONBANNEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0x1AF1B7C0)
#define CLASS_1_FF3FBD145313F82A_SET_CHIMERAMAXATK_OFFSET UNITYSDK_OFFSET(0x1AF1B740)
#define CLASS_1_FF3FBD145313F82A_SET_CHIMERAMAXHP_OFFSET UNITYSDK_OFFSET(0x1AF1B700)
#define CLASS_1_FF3FBD145313F82A_SET_CHIMERAMINATK_OFFSET UNITYSDK_OFFSET(0x1AF1B760)
#define CLASS_1_FF3FBD145313F82A_SET_CHIMERAMINHP_OFFSET UNITYSDK_OFFSET(0x1AF1B720)
#define CLASS_1_FF3FBD145313F82A_SET_CRITICALHITDAMAGE_OFFSET UNITYSDK_OFFSET(0x1AF1B780)
#define CLASS_1_FF3FBD145313F82A_SET_MAXCASTCOUNTPERPHASE_OFFSET UNITYSDK_OFFSET(0x1AF1B7A0)
#define CLASS_1_FF3FBD145313F82A_SET_TEAMSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x1AF1B6E0)
#define CLASS_1_FF3FBD145313F82A__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF1B7D0)

inline static constexpr unsigned int Class_1_FF3FBD145313F82A_TypeDefinitionIndex = 63401;

class Class_1_FF3FBD145313F82A : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _AscensionBannedChimeras_k__BackingField; // 0x10
	::System::Int32 _ChimeraMinAtk_k__BackingField; // 0x18
	::System::UInt32 _TeamSlotCount_k__BackingField; // 0x1C
	::System::Int32 _ChimeraMinHp_k__BackingField; // 0x20
	::System::Int32 _ChimeraMaxAtk_k__BackingField; // 0x24
	::System::Int32 _ChimeraMaxHp_k__BackingField; // 0x28
	::System::Int32 _CriticalHitDamage_k__BackingField; // 0x2C
	::System::Int32 _MaxCastCountPerPhase_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_TeamSlotCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A_GET_TEAMSLOTCOUNT_OFFSET))(this);
	}

	::System::Void set_TeamSlotCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A_SET_TEAMSLOTCOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_ChimeraMaxHp()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A_GET_CHIMERAMAXHP_OFFSET))(this);
	}

	::System::Void set_ChimeraMaxHp(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A_SET_CHIMERAMAXHP_OFFSET))(this, a1);
	}

	::System::Int32 get_ChimeraMinHp()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A_GET_CHIMERAMINHP_OFFSET))(this);
	}

	::System::Void set_ChimeraMinHp(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A_SET_CHIMERAMINHP_OFFSET))(this, a1);
	}

	::System::Int32 get_ChimeraMaxAtk()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A_GET_CHIMERAMAXATK_OFFSET))(this);
	}

	::System::Void set_ChimeraMaxAtk(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A_SET_CHIMERAMAXATK_OFFSET))(this, a1);
	}

	::System::Int32 get_ChimeraMinAtk()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A_GET_CHIMERAMINATK_OFFSET))(this);
	}

	::System::Void set_ChimeraMinAtk(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A_SET_CHIMERAMINATK_OFFSET))(this, a1);
	}

	::System::Int32 get_CriticalHitDamage()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A_GET_CRITICALHITDAMAGE_OFFSET))(this);
	}

	::System::Void set_CriticalHitDamage(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A_SET_CRITICALHITDAMAGE_OFFSET))(this, a1);
	}

	::System::Int32 get_MaxCastCountPerPhase()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A_GET_MAXCASTCOUNTPERPHASE_OFFSET))(this);
	}

	::System::Void set_MaxCastCountPerPhase(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A_SET_MAXCASTCOUNTPERPHASE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* get_AscensionBannedChimeras()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A_GET_ASCENSIONBANNEDCHIMERAS_OFFSET))(this);
	}

	::System::Void set_AscensionBannedChimeras(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A_SET_ASCENSIONBANNEDCHIMERAS_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF3FBD145313F82A_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}
};
