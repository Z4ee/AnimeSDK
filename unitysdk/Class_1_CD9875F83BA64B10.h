#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_54D5CCE1D19D93EF;
class Class_1_F3CA30716D4FAF92_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CD9875F83BA64B10_GET_ASSISTSCORE_OFFSET UNITYSDK_OFFSET(0xB2760B0)
#define CLASS_1_CD9875F83BA64B10_GET_AVATARLIST_OFFSET UNITYSDK_OFFSET(0xB276090)
#define CLASS_1_CD9875F83BA64B10_GET_BATTLEREPLAYKEY_OFFSET UNITYSDK_OFFSET(0xB276070)
#define CLASS_1_CD9875F83BA64B10_GET_DAMAGEHP_OFFSET UNITYSDK_OFFSET(0xB276010)
#define CLASS_1_CD9875F83BA64B10_GET_DAMAGESCORE_OFFSET UNITYSDK_OFFSET(0xB2760D0)
#define CLASS_1_CD9875F83BA64B10_GET_FINALHITSCORE_OFFSET UNITYSDK_OFFSET(0xB2760F0)
#define CLASS_1_CD9875F83BA64B10_GET_ISFINALHIT_OFFSET UNITYSDK_OFFSET(0xB276030)
#define CLASS_1_CD9875F83BA64B10_GET_OVERKILLDAMAGEHP_OFFSET UNITYSDK_OFFSET(0xB276050)
#define CLASS_1_CD9875F83BA64B10_GET_UID_OFFSET UNITYSDK_OFFSET(0xB275FF0)
#define CLASS_1_CD9875F83BA64B10_METHOD_1_4DDD3DE2D159DC6E_OFFSET UNITYSDK_OFFSET(0xB275BA0)
#define CLASS_1_CD9875F83BA64B10_METHOD_1_A85A5A4F484E8E77_OFFSET UNITYSDK_OFFSET(0xB275F00)
#define CLASS_1_CD9875F83BA64B10_SET_ASSISTSCORE_OFFSET UNITYSDK_OFFSET(0xB2760C0)
#define CLASS_1_CD9875F83BA64B10_SET_AVATARLIST_OFFSET UNITYSDK_OFFSET(0xB2760A0)
#define CLASS_1_CD9875F83BA64B10_SET_BATTLEREPLAYKEY_OFFSET UNITYSDK_OFFSET(0xB276080)
#define CLASS_1_CD9875F83BA64B10_SET_DAMAGEHP_OFFSET UNITYSDK_OFFSET(0xB276020)
#define CLASS_1_CD9875F83BA64B10_SET_DAMAGESCORE_OFFSET UNITYSDK_OFFSET(0xB2760E0)
#define CLASS_1_CD9875F83BA64B10_SET_FINALHITSCORE_OFFSET UNITYSDK_OFFSET(0xB276100)
#define CLASS_1_CD9875F83BA64B10_SET_ISFINALHIT_OFFSET UNITYSDK_OFFSET(0xB276040)
#define CLASS_1_CD9875F83BA64B10_SET_OVERKILLDAMAGEHP_OFFSET UNITYSDK_OFFSET(0xB276060)
#define CLASS_1_CD9875F83BA64B10_SET_UID_OFFSET UNITYSDK_OFFSET(0xB276000)
#define CLASS_1_CD9875F83BA64B10__CTOR_OFFSET UNITYSDK_OFFSET(0xB275FE0)

inline static constexpr unsigned int Class_1_CD9875F83BA64B10_TypeDefinitionIndex = 54312;

class Class_1_CD9875F83BA64B10 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF*>* _AvatarList_k__BackingField; // 0x10
	::System::String* _BattleReplayKey_k__BackingField; // 0x18
	::System::UInt32 _AssistScore_k__BackingField; // 0x20
	::System::UInt32 _Uid_k__BackingField; // 0x24
	::System::UInt32 _DamageScore_k__BackingField; // 0x28
	::System::UInt32 _OverKillDamageHp_k__BackingField; // 0x2C
	::System::Boolean _IsFinalHit_k__BackingField; // 0x30
	::System::UInt32 _DamageHp_k__BackingField; // 0x34
	::System::UInt32 _FinalHitScore_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::Class_1_CD9875F83BA64B10*>* Method_1_4DDD3DE2D159DC6E(::System::Collections::Generic::IEnumerable_1<::Class_1_F3CA30716D4FAF92_1*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_CD9875F83BA64B10*>*(*)(::System::Collections::Generic::IEnumerable_1<::Class_1_F3CA30716D4FAF92_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_METHOD_1_4DDD3DE2D159DC6E_OFFSET))(a1);
	}

	static ::Class_1_CD9875F83BA64B10* Method_1_A85A5A4F484E8E77(::Class_1_F3CA30716D4FAF92_1* a1)
	{
		return ((::Class_1_CD9875F83BA64B10*(*)(::Class_1_F3CA30716D4FAF92_1*))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_METHOD_1_A85A5A4F484E8E77_OFFSET))(a1);
	}

	::System::UInt32 get_Uid()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_GET_UID_OFFSET))(this);
	}

	::System::Void set_Uid(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_SET_UID_OFFSET))(this, value);
	}

	::System::UInt32 get_DamageHp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_GET_DAMAGEHP_OFFSET))(this);
	}

	::System::Void set_DamageHp(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_SET_DAMAGEHP_OFFSET))(this, value);
	}

	::System::Boolean get_IsFinalHit()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_GET_ISFINALHIT_OFFSET))(this);
	}

	::System::Void set_IsFinalHit(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_SET_ISFINALHIT_OFFSET))(this, value);
	}

	::System::UInt32 get_OverKillDamageHp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_GET_OVERKILLDAMAGEHP_OFFSET))(this);
	}

	::System::Void set_OverKillDamageHp(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_SET_OVERKILLDAMAGEHP_OFFSET))(this, value);
	}

	::System::String* get_BattleReplayKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_GET_BATTLEREPLAYKEY_OFFSET))(this);
	}

	::System::Void set_BattleReplayKey(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_SET_BATTLEREPLAYKEY_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF*>* get_AvatarList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_GET_AVATARLIST_OFFSET))(this);
	}

	::System::Void set_AvatarList(::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF*>*))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_SET_AVATARLIST_OFFSET))(this, value);
	}

	::System::UInt32 get_AssistScore()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_GET_ASSISTSCORE_OFFSET))(this);
	}

	::System::Void set_AssistScore(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_SET_ASSISTSCORE_OFFSET))(this, value);
	}

	::System::UInt32 get_DamageScore()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_GET_DAMAGESCORE_OFFSET))(this);
	}

	::System::Void set_DamageScore(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_SET_DAMAGESCORE_OFFSET))(this, value);
	}

	::System::UInt32 get_FinalHitScore()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_GET_FINALHITSCORE_OFFSET))(this);
	}

	::System::Void set_FinalHitScore(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD9875F83BA64B10_SET_FINALHITSCORE_OFFSET))(this, value);
	}
};
