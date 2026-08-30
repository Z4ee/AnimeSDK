#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_5;
class Class_1_54D5CCE1D19D93EF_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C222160220C38EC4_GET_ASSISTSCORE_OFFSET UNITYSDK_OFFSET(0xB4AF080)
#define CLASS_1_C222160220C38EC4_GET_AVATARLIST_OFFSET UNITYSDK_OFFSET(0xB4AF060)
#define CLASS_1_C222160220C38EC4_GET_BATTLEREPLAYKEY_OFFSET UNITYSDK_OFFSET(0xB4AF040)
#define CLASS_1_C222160220C38EC4_GET_DAMAGEHP_OFFSET UNITYSDK_OFFSET(0xB4AEFE0)
#define CLASS_1_C222160220C38EC4_GET_DAMAGESCORE_OFFSET UNITYSDK_OFFSET(0xB4AF0A0)
#define CLASS_1_C222160220C38EC4_GET_FINALHITSCORE_OFFSET UNITYSDK_OFFSET(0xB4AF0C0)
#define CLASS_1_C222160220C38EC4_GET_ISFINALHIT_OFFSET UNITYSDK_OFFSET(0xB4AF000)
#define CLASS_1_C222160220C38EC4_GET_OVERKILLDAMAGEHP_OFFSET UNITYSDK_OFFSET(0xB4AF020)
#define CLASS_1_C222160220C38EC4_GET_UID_OFFSET UNITYSDK_OFFSET(0xB4AEFC0)
#define CLASS_1_C222160220C38EC4_METHOD_1_A85A5A4F484E8E77_OFFSET UNITYSDK_OFFSET(0xB4AEED0)
#define CLASS_1_C222160220C38EC4_METHOD_1_C37EE151D005EDA7_OFFSET UNITYSDK_OFFSET(0xB4AE960)
#define CLASS_1_C222160220C38EC4_SET_ASSISTSCORE_OFFSET UNITYSDK_OFFSET(0xB4AF090)
#define CLASS_1_C222160220C38EC4_SET_AVATARLIST_OFFSET UNITYSDK_OFFSET(0xB4AF070)
#define CLASS_1_C222160220C38EC4_SET_BATTLEREPLAYKEY_OFFSET UNITYSDK_OFFSET(0xB4AF050)
#define CLASS_1_C222160220C38EC4_SET_DAMAGEHP_OFFSET UNITYSDK_OFFSET(0xB4AEFF0)
#define CLASS_1_C222160220C38EC4_SET_DAMAGESCORE_OFFSET UNITYSDK_OFFSET(0xB4AF0B0)
#define CLASS_1_C222160220C38EC4_SET_FINALHITSCORE_OFFSET UNITYSDK_OFFSET(0xB4AF0D0)
#define CLASS_1_C222160220C38EC4_SET_ISFINALHIT_OFFSET UNITYSDK_OFFSET(0xB4AF010)
#define CLASS_1_C222160220C38EC4_SET_OVERKILLDAMAGEHP_OFFSET UNITYSDK_OFFSET(0xB4AF030)
#define CLASS_1_C222160220C38EC4_SET_UID_OFFSET UNITYSDK_OFFSET(0xB4AEFD0)
#define CLASS_1_C222160220C38EC4__CTOR_OFFSET UNITYSDK_OFFSET(0xB4AEFB0)

inline static constexpr unsigned int Class_1_C222160220C38EC4_TypeDefinitionIndex = 66759;

class Class_1_C222160220C38EC4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF_1*>* _AvatarList_k__BackingField; // 0x10
	::System::String* _BattleReplayKey_k__BackingField; // 0x18
	::System::Boolean _IsFinalHit_k__BackingField; // 0x20
	::System::UInt32 _Uid_k__BackingField; // 0x24
	::System::UInt32 _OverKillDamageHp_k__BackingField; // 0x28
	::System::UInt32 _FinalHitScore_k__BackingField; // 0x2C
	::System::UInt32 _DamageScore_k__BackingField; // 0x30
	::System::UInt32 _AssistScore_k__BackingField; // 0x34
	::System::UInt32 _DamageHp_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C222160220C38EC4*>* Method_1_C37EE151D005EDA7(::System::Collections::Generic::IEnumerable_1<::Class_1_21DCD4640D389503_5*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C222160220C38EC4*>*(*)(::System::Collections::Generic::IEnumerable_1<::Class_1_21DCD4640D389503_5*>*))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_METHOD_1_C37EE151D005EDA7_OFFSET))(a1);
	}

	static ::Class_1_C222160220C38EC4* Method_1_A85A5A4F484E8E77(::Class_1_21DCD4640D389503_5* a1)
	{
		return ((::Class_1_C222160220C38EC4*(*)(::Class_1_21DCD4640D389503_5*))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_METHOD_1_A85A5A4F484E8E77_OFFSET))(a1);
	}

	::System::UInt32 get_Uid()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_GET_UID_OFFSET))(this);
	}

	::System::Void set_Uid(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_SET_UID_OFFSET))(this, a1);
	}

	::System::UInt32 get_DamageHp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_GET_DAMAGEHP_OFFSET))(this);
	}

	::System::Void set_DamageHp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_SET_DAMAGEHP_OFFSET))(this, a1);
	}

	::System::Boolean get_IsFinalHit()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_GET_ISFINALHIT_OFFSET))(this);
	}

	::System::Void set_IsFinalHit(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_SET_ISFINALHIT_OFFSET))(this, a1);
	}

	::System::UInt32 get_OverKillDamageHp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_GET_OVERKILLDAMAGEHP_OFFSET))(this);
	}

	::System::Void set_OverKillDamageHp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_SET_OVERKILLDAMAGEHP_OFFSET))(this, a1);
	}

	::System::String* get_BattleReplayKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_GET_BATTLEREPLAYKEY_OFFSET))(this);
	}

	::System::Void set_BattleReplayKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_SET_BATTLEREPLAYKEY_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF_1*>* get_AvatarList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_GET_AVATARLIST_OFFSET))(this);
	}

	::System::Void set_AvatarList(::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF_1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_SET_AVATARLIST_OFFSET))(this, a1);
	}

	::System::UInt32 get_AssistScore()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_GET_ASSISTSCORE_OFFSET))(this);
	}

	::System::Void set_AssistScore(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_SET_ASSISTSCORE_OFFSET))(this, a1);
	}

	::System::UInt32 get_DamageScore()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_GET_DAMAGESCORE_OFFSET))(this);
	}

	::System::Void set_DamageScore(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_SET_DAMAGESCORE_OFFSET))(this, a1);
	}

	::System::UInt32 get_FinalHitScore()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_GET_FINALHITSCORE_OFFSET))(this);
	}

	::System::Void set_FinalHitScore(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C222160220C38EC4_SET_FINALHITSCORE_OFFSET))(this, a1);
	}
};
