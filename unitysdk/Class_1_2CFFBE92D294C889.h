#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_42D96751C1376DDB;
class Class_1_5C85CC607D791BFF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2CFFBE92D294C889_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1AA43FE0)
#define CLASS_1_2CFFBE92D294C889_GET_CURRENTENERGY_OFFSET UNITYSDK_OFFSET(0x1AA441B0)
#define CLASS_1_2CFFBE92D294C889_GET_CURRENTSP_OFFSET UNITYSDK_OFFSET(0x1AA44060)
#define CLASS_1_2CFFBE92D294C889_GET_DAMAGETYPECOLOR_OFFSET UNITYSDK_OFFSET(0x1AA440C0)
#define CLASS_1_2CFFBE92D294C889_GET_DAMAGETYPEFRAMECOLOR_OFFSET UNITYSDK_OFFSET(0x1AA44100)
#define CLASS_1_2CFFBE92D294C889_GET_DAMAGETYPEUNFULLCOLOR_OFFSET UNITYSDK_OFFSET(0x1AA440E0)
#define CLASS_1_2CFFBE92D294C889_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1AA440A0)
#define CLASS_1_2CFFBE92D294C889_GET_ENERGYICONPATH_OFFSET UNITYSDK_OFFSET(0x1AA44190)
#define CLASS_1_2CFFBE92D294C889_GET_ISSHOWENERGY_OFFSET UNITYSDK_OFFSET(0x1AA44170)
#define CLASS_1_2CFFBE92D294C889_GET_MAXENERGY_OFFSET UNITYSDK_OFFSET(0x1AA441D0)
#define CLASS_1_2CFFBE92D294C889_GET_MAXSP_OFFSET UNITYSDK_OFFSET(0x1AA44080)
#define CLASS_1_2CFFBE92D294C889_GET_STATUSES_OFFSET UNITYSDK_OFFSET(0x1AA441F0)
#define CLASS_1_2CFFBE92D294C889_GET_UICOLORSTATE_OFFSET UNITYSDK_OFFSET(0x1AA44000)
#define CLASS_1_2CFFBE92D294C889_GET_ULTRAACTIVEICONPATH_OFFSET UNITYSDK_OFFSET(0x1AA44040)
#define CLASS_1_2CFFBE92D294C889_GET_ULTRAICONEFFPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1AA44140)
#define CLASS_1_2CFFBE92D294C889_GET_ULTRAICONPATH_OFFSET UNITYSDK_OFFSET(0x1AA44020)
#define CLASS_1_2CFFBE92D294C889_GET_ULTRAPROGRESSTYPE_OFFSET UNITYSDK_OFFSET(0x1AA44120)
#define CLASS_1_2CFFBE92D294C889_GET_ULTRASKILL_OFFSET UNITYSDK_OFFSET(0x1AA44160)
#define CLASS_1_2CFFBE92D294C889_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1AA43FF0)
#define CLASS_1_2CFFBE92D294C889_SET_CURRENTENERGY_OFFSET UNITYSDK_OFFSET(0x1AA441C0)
#define CLASS_1_2CFFBE92D294C889_SET_CURRENTSP_OFFSET UNITYSDK_OFFSET(0x1AA44070)
#define CLASS_1_2CFFBE92D294C889_SET_DAMAGETYPECOLOR_OFFSET UNITYSDK_OFFSET(0x1AA440D0)
#define CLASS_1_2CFFBE92D294C889_SET_DAMAGETYPEFRAMECOLOR_OFFSET UNITYSDK_OFFSET(0x1AA44110)
#define CLASS_1_2CFFBE92D294C889_SET_DAMAGETYPEUNFULLCOLOR_OFFSET UNITYSDK_OFFSET(0x1AA440F0)
#define CLASS_1_2CFFBE92D294C889_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x1AA440B0)
#define CLASS_1_2CFFBE92D294C889_SET_ENERGYICONPATH_OFFSET UNITYSDK_OFFSET(0x1AA441A0)
#define CLASS_1_2CFFBE92D294C889_SET_ISSHOWENERGY_OFFSET UNITYSDK_OFFSET(0x1AA44180)
#define CLASS_1_2CFFBE92D294C889_SET_MAXENERGY_OFFSET UNITYSDK_OFFSET(0x1AA441E0)
#define CLASS_1_2CFFBE92D294C889_SET_MAXSP_OFFSET UNITYSDK_OFFSET(0x1AA44090)
#define CLASS_1_2CFFBE92D294C889_SET_UICOLORSTATE_OFFSET UNITYSDK_OFFSET(0x1AA44010)
#define CLASS_1_2CFFBE92D294C889_SET_ULTRAACTIVEICONPATH_OFFSET UNITYSDK_OFFSET(0x1AA44050)
#define CLASS_1_2CFFBE92D294C889_SET_ULTRAICONEFFPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1AA44150)
#define CLASS_1_2CFFBE92D294C889_SET_ULTRAICONPATH_OFFSET UNITYSDK_OFFSET(0x1AA44030)
#define CLASS_1_2CFFBE92D294C889_SET_ULTRAPROGRESSTYPE_OFFSET UNITYSDK_OFFSET(0x1AA44130)
#define CLASS_1_2CFFBE92D294C889__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA44200)

inline static constexpr unsigned int Class_1_2CFFBE92D294C889_TypeDefinitionIndex = 79902;

class Class_1_2CFFBE92D294C889 : public ::System::Object
{
public:
	::System::String* _UltraIconEffPrefabPath_k__BackingField; // 0x10
	::System::String* _UltraActiveIconPath_k__BackingField; // 0x18
	::System::String* _UIColorState_k__BackingField; // 0x20
	::Class_1_5C85CC607D791BFF* _UltraSkill_k__BackingField; // 0x28
	::System::String* _UltraIconPath_k__BackingField; // 0x30
	::System::Collections::Generic::List_1<::Class_1_42D96751C1376DDB*>* _Statuses_k__BackingField; // 0x38
	::System::String* _EnergyIconPath_k__BackingField; // 0x40
	::RPG::GameCore::FixPoint _MaxSP_k__BackingField; // 0x48
	::UnityEngine::Color _DamageTypeFrameColor_k__BackingField; // 0x50
	::UnityEngine::Color _DamageTypeColor_k__BackingField; // 0x60
	::System::Boolean _IsShowEnergy_k__BackingField; // 0x70
	::System::Int32 _CurrentEnergy_k__BackingField; // 0x74
	::RPG::GameCore::FixPoint _CurrentSP_k__BackingField; // 0x78
	::RPG::GameCore::SkillSPProgressType _UltraProgressType_k__BackingField; // 0x80
	::UnityEngine::Color _DamageTypeUnfullColor_k__BackingField; // 0x84
	::System::UInt32 _AvatarID_k__BackingField; // 0x94
	::System::Int32 _MaxEnergy_k__BackingField; // 0x98
	::RPG::GameCore::AttackDamageType _DamageType_k__BackingField; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_AvatarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_GET_AVATARID_OFFSET))(this);
	}

	::System::Void set_AvatarID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_SET_AVATARID_OFFSET))(this, a1);
	}

	::System::String* get_UIColorState()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_GET_UICOLORSTATE_OFFSET))(this);
	}

	::System::Void set_UIColorState(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_SET_UICOLORSTATE_OFFSET))(this, a1);
	}

	::System::String* get_UltraIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_GET_ULTRAICONPATH_OFFSET))(this);
	}

	::System::Void set_UltraIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_SET_ULTRAICONPATH_OFFSET))(this, a1);
	}

	::System::String* get_UltraActiveIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_GET_ULTRAACTIVEICONPATH_OFFSET))(this);
	}

	::System::Void set_UltraActiveIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_SET_ULTRAACTIVEICONPATH_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_CurrentSP()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_GET_CURRENTSP_OFFSET))(this);
	}

	::System::Void set_CurrentSP(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_SET_CURRENTSP_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MaxSP()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_GET_MAXSP_OFFSET))(this);
	}

	::System::Void set_MaxSP(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_SET_MAXSP_OFFSET))(this, a1);
	}

	::RPG::GameCore::AttackDamageType get_DamageType()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_GET_DAMAGETYPE_OFFSET))(this);
	}

	::System::Void set_DamageType(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_SET_DAMAGETYPE_OFFSET))(this, a1);
	}

	::UnityEngine::Color get_DamageTypeColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_GET_DAMAGETYPECOLOR_OFFSET))(this);
	}

	::System::Void set_DamageTypeColor(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_SET_DAMAGETYPECOLOR_OFFSET))(this, a1);
	}

	::UnityEngine::Color get_DamageTypeUnfullColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_GET_DAMAGETYPEUNFULLCOLOR_OFFSET))(this);
	}

	::System::Void set_DamageTypeUnfullColor(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_SET_DAMAGETYPEUNFULLCOLOR_OFFSET))(this, a1);
	}

	::UnityEngine::Color get_DamageTypeFrameColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_GET_DAMAGETYPEFRAMECOLOR_OFFSET))(this);
	}

	::System::Void set_DamageTypeFrameColor(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_SET_DAMAGETYPEFRAMECOLOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::SkillSPProgressType get_UltraProgressType()
	{
		return ((::RPG::GameCore::SkillSPProgressType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_GET_ULTRAPROGRESSTYPE_OFFSET))(this);
	}

	::System::Void set_UltraProgressType(::RPG::GameCore::SkillSPProgressType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillSPProgressType))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_SET_ULTRAPROGRESSTYPE_OFFSET))(this, a1);
	}

	::System::String* get_UltraIconEffPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_GET_ULTRAICONEFFPREFABPATH_OFFSET))(this);
	}

	::System::Void set_UltraIconEffPrefabPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_SET_ULTRAICONEFFPREFABPATH_OFFSET))(this, a1);
	}

	::Class_1_5C85CC607D791BFF* get_UltraSkill()
	{
		return ((::Class_1_5C85CC607D791BFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_GET_ULTRASKILL_OFFSET))(this);
	}

	::System::Boolean get_IsShowEnergy()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_GET_ISSHOWENERGY_OFFSET))(this);
	}

	::System::Void set_IsShowEnergy(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_SET_ISSHOWENERGY_OFFSET))(this, a1);
	}

	::System::String* get_EnergyIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_GET_ENERGYICONPATH_OFFSET))(this);
	}

	::System::Void set_EnergyIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_SET_ENERGYICONPATH_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentEnergy()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_GET_CURRENTENERGY_OFFSET))(this);
	}

	::System::Void set_CurrentEnergy(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_SET_CURRENTENERGY_OFFSET))(this, a1);
	}

	::System::Int32 get_MaxEnergy()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_GET_MAXENERGY_OFFSET))(this);
	}

	::System::Void set_MaxEnergy(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_SET_MAXENERGY_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_42D96751C1376DDB*>* get_Statuses()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_42D96751C1376DDB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CFFBE92D294C889_GET_STATUSES_OFFSET))(this);
	}
};
