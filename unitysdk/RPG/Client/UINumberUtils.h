#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PropertyNumberUIData; }
namespace RPG::Client { class PropertyUIData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define RPG_CLIENT_UINUMBERUTILS_APPROXIMATELYROUND_1_OFFSET UNITYSDK_OFFSET(0xB418ED0)
#define RPG_CLIENT_UINUMBERUTILS_APPROXIMATELYROUND_OFFSET UNITYSDK_OFFSET(0xB418B30)
#define RPG_CLIENT_UINUMBERUTILS_CHARACTERLEVELINT_OFFSET UNITYSDK_OFFSET(0xB41BCC0)
#define RPG_CLIENT_UINUMBERUTILS_CLAMPDDIRTYHPPERCENT_OFFSET UNITYSDK_OFFSET(0xB4187B0)
#define RPG_CLIENT_UINUMBERUTILS_CLAMPDECIMALTOLONG_OFFSET UNITYSDK_OFFSET(0xB418FD0)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTBP_OFFSET UNITYSDK_OFFSET(0xB41A760)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTDELAYINT_OFFSET UNITYSDK_OFFSET(0xB418830)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTDIRTYHPPERCENT_OFFSET UNITYSDK_OFFSET(0xB4185B0)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTHPANDSHIELDINT_OFFSET UNITYSDK_OFFSET(0xB4192D0)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTHPINT_OFFSET UNITYSDK_OFFSET(0xB419240)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTHPPERCENT100INT_OFFSET UNITYSDK_OFFSET(0xB417AA0)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTHPPERCENTWITHSHIELD_OFFSET UNITYSDK_OFFSET(0xB417FA0)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTHPPERCENT_OFFSET UNITYSDK_OFFSET(0xB417930)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTHPSEG_OFFSET UNITYSDK_OFFSET(0xB41B370)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTHP_OFFSET UNITYSDK_OFFSET(0xB41B240)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTNEGATIVEHP_OFFSET UNITYSDK_OFFSET(0xB41B2B0)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELDANDHPPERCENT_OFFSET UNITYSDK_OFFSET(0xB41AF20)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELDANDHP_OFFSET UNITYSDK_OFFSET(0xB41B180)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELDPERCENTBYMAXHP_OFFSET UNITYSDK_OFFSET(0xB41B830)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELDPERCENT_OFFSET UNITYSDK_OFFSET(0xB41B750)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELD_OFFSET UNITYSDK_OFFSET(0xB41B6E0)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSHOWHPINT_OFFSET UNITYSDK_OFFSET(0xB4191A0)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSHOWHPPERCENT_OFFSET UNITYSDK_OFFSET(0xB4179B0)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSPPERCENT100INT_OFFSET UNITYSDK_OFFSET(0xB41A630)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSPPERCENT_OFFSET UNITYSDK_OFFSET(0xB41A4F0)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSP_FP_OFFSET UNITYSDK_OFFSET(0xB41A280)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSP_OFFSET UNITYSDK_OFFSET(0xB41A170)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSTANCEINT_OFFSET UNITYSDK_OFFSET(0xB419340)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSTANCEPERCENT_OFFSET UNITYSDK_OFFSET(0xB419A50)
#define RPG_CLIENT_UINUMBERUTILS_CURRENTSTANCESHOWINT_OFFSET UNITYSDK_OFFSET(0xB4193D0)
#define RPG_CLIENT_UINUMBERUTILS_DELAYINT_OFFSET UNITYSDK_OFFSET(0xB4188C0)
#define RPG_CLIENT_UINUMBERUTILS_DELTAHPSEG_OFFSET UNITYSDK_OFFSET(0xB41B440)
#define RPG_CLIENT_UINUMBERUTILS_DOPROPERTYADSORPTION_OFFSET UNITYSDK_OFFSET(0xB41B5B0)
#define RPG_CLIENT_UINUMBERUTILS_GETDAMAGEVALUESHOWLIMIT_OFFSET UNITYSDK_OFFSET(0xB4189F0)
#define RPG_CLIENT_UINUMBERUTILS_GETDEFAULTULTRASKILLSPNEED_OFFSET UNITYSDK_OFFSET(0xB41BE50)
#define RPG_CLIENT_UINUMBERUTILS_GETPROPERTYNUMBERUIDATA_OFFSET UNITYSDK_OFFSET(0xB41C0A0)
#define RPG_CLIENT_UINUMBERUTILS_GETPROPERTYUIDATA_1_OFFSET UNITYSDK_OFFSET(0xB41C000)
#define RPG_CLIENT_UINUMBERUTILS_GETPROPERTYUIDATA_OFFSET UNITYSDK_OFFSET(0xB41BF60)
#define RPG_CLIENT_UINUMBERUTILS_GETULTRASKILLSPNEED_OFFSET UNITYSDK_OFFSET(0xB41BD40)
#define RPG_CLIENT_UINUMBERUTILS_HPPERCENTBEFORECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xB419DD0)
#define RPG_CLIENT_UINUMBERUTILS_HPPERCENT_1_OFFSET UNITYSDK_OFFSET(0xB418310)
#define RPG_CLIENT_UINUMBERUTILS_HPPERCENT_OFFSET UNITYSDK_OFFSET(0xB418250)
#define RPG_CLIENT_UINUMBERUTILS_MAXBP_OFFSET UNITYSDK_OFFSET(0xB41A7C0)
#define RPG_CLIENT_UINUMBERUTILS_MAXHPINT_OFFSET UNITYSDK_OFFSET(0xB3F09D0)
#define RPG_CLIENT_UINUMBERUTILS_MAXSP_FP_OFFSET UNITYSDK_OFFSET(0xB41A440)
#define RPG_CLIENT_UINUMBERUTILS_MAXSP_OFFSET UNITYSDK_OFFSET(0xB41A330)
#define RPG_CLIENT_UINUMBERUTILS_MAXSTANCEINT_OFFSET UNITYSDK_OFFSET(0xB419630)
#define RPG_CLIENT_UINUMBERUTILS_MAXSTANCESHOWINT_OFFSET UNITYSDK_OFFSET(0xB4197A0)
#define RPG_CLIENT_UINUMBERUTILS_MAXSTANCE_OFFSET UNITYSDK_OFFSET(0xB419720)
#define RPG_CLIENT_UINUMBERUTILS_PERCENTTO100INT_1_OFFSET UNITYSDK_OFFSET(0xB417D90)
#define RPG_CLIENT_UINUMBERUTILS_PERCENTTO100INT_OFFSET UNITYSDK_OFFSET(0xB417B30)
#define RPG_CLIENT_UINUMBERUTILS_PERCENTTOHPINT_OFFSET UNITYSDK_OFFSET(0xB417EF0)
#define RPG_CLIENT_UINUMBERUTILS_PLURALITYSTANCEPERCENT_OFFSET UNITYSDK_OFFSET(0xB419C60)
#define RPG_CLIENT_UINUMBERUTILS_PROTECTFLOORTOONE_1_OFFSET UNITYSDK_OFFSET(0xB418B90)
#define RPG_CLIENT_UINUMBERUTILS_PROTECTFLOORTOONE_2_OFFSET UNITYSDK_OFFSET(0xB417E70)
#define RPG_CLIENT_UINUMBERUTILS_PROTECTFLOORTOONE_OFFSET UNITYSDK_OFFSET(0xB417CB0)
#define RPG_CLIENT_UINUMBERUTILS_RALLYHPPERCENT_OFFSET UNITYSDK_OFFSET(0xB418660)
#define RPG_CLIENT_UINUMBERUTILS_SHIELDANDHPOVERMAXHP_OFFSET UNITYSDK_OFFSET(0xB41BB00)
#define RPG_CLIENT_UINUMBERUTILS_SKILLBPPRECHANGE_OFFSET UNITYSDK_OFFSET(0xB41ACF0)
#define RPG_CLIENT_UINUMBERUTILS_SKILLNEEDBPBYCONTROLSKILLTYPE_OFFSET UNITYSDK_OFFSET(0xB41A820)
#define RPG_CLIENT_UINUMBERUTILS_SKILLNEEDBP_OFFSET UNITYSDK_OFFSET(0xB41A9B0)
#define RPG_CLIENT_UINUMBERUTILS_SKILLNEEDSP_OFFSET UNITYSDK_OFFSET(0xB41AB40)
#define RPG_CLIENT_UINUMBERUTILS_STANCEPERCENTBEFORECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xB41A000)
#define RPG_CLIENT_UINUMBERUTILS_STANCEPERCENT_OFFSET UNITYSDK_OFFSET(0xB419AF0)
#define RPG_CLIENT_UINUMBERUTILS_TOTALSTANCEAFTERCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xB41A0D0)
#define RPG_CLIENT_UINUMBERUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xB41C280)

namespace RPG::Client
{
	inline static constexpr unsigned int UINumberUtils_TypeDefinitionIndex = 67381;

	class UINumberUtils : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint* StaticGet_ONE_HUNDRED()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(UINumberUtils_TypeDefinitionIndex)->GetStaticField(0xC310);
		}
		static ::RPG::GameCore::FixPoint* StaticGet__MAX_DISPLAY_ACTION_DELAY()
		{
			return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(UINumberUtils_TypeDefinitionIndex)->GetStaticField(0xC318);
		}
		static ::System::Int32* StaticGet__Epsilon()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UINumberUtils_TypeDefinitionIndex)->GetStaticField(0xC320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS__CCTOR_OFFSET))();
		}

		static ::System::Single CurrentHPPercent(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTHPPERCENT_OFFSET))(entity);
		}

		static ::System::Single CurrentShowHPPercent(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSHOWHPPERCENT_OFFSET))(entity);
		}

		static ::System::Int32 CurrentHPPercent100Int(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTHPPERCENT100INT_OFFSET))(entity);
		}

		static ::System::Int32 PercentTo100Int(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_PERCENTTO100INT_OFFSET))(value);
		}

		static ::System::Int32 PercentTo100Int_1(::System::Single value)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_PERCENTTO100INT_1_OFFSET))(value);
		}

		static ::System::Int32 PercentToHPInt(::RPG::GameCore::GameEntity* entity, ::System::Single percent)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_PERCENTTOHPINT_OFFSET))(entity, percent);
		}

		static ::System::Single CurrentHPPercentWithShield(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTHPPERCENTWITHSHIELD_OFFSET))(entity);
		}

		static ::System::Single HPPercent(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::FixPoint value)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_HPPERCENT_OFFSET))(entity, value);
		}

		static ::System::Single HPPercent_1(::RPG::GameCore::GameEntity* entity, ::System::Decimal value)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::System::Decimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_HPPERCENT_1_OFFSET))(entity, value);
		}

		static ::System::Int32 MaxHPInt(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_MAXHPINT_OFFSET))(entity);
		}

		static ::System::Single CurrentDirtyHPPercent(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTDIRTYHPPERCENT_OFFSET))(entity);
		}

		static ::System::Single RallyHPPercent(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_RALLYHPPERCENT_OFFSET))(entity);
		}

		static ::System::Single ClampdDirtyHPPercent(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CLAMPDDIRTYHPPERCENT_OFFSET))(entity);
		}

		static ::System::Int32 CurrentDelayInt(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTDELAYINT_OFFSET))(entity);
		}

		static ::System::Int32 DelayInt(::RPG::GameCore::FixPoint origin)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_DELAYINT_OFFSET))(origin);
		}

		static ::System::Int64 GetDamageValueShowLimit()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_GETDAMAGEVALUESHOWLIMIT_OFFSET))();
		}

		static ::System::Int32 ProtectFloorToOne(::RPG::GameCore::FixPoint data)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_PROTECTFLOORTOONE_OFFSET))(data);
		}

		static ::RPG::GameCore::FixPoint ApproximatelyRound(::RPG::GameCore::FixPoint data)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_APPROXIMATELYROUND_OFFSET))(data);
		}

		static ::System::Int64 ProtectFloorToOne_1(::System::Decimal data)
		{
			return ((::System::Int64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_PROTECTFLOORTOONE_1_OFFSET))(data);
		}

		static ::System::Int64 ClampDecimalToLong(::System::Decimal value)
		{
			return ((::System::Int64(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CLAMPDECIMALTOLONG_OFFSET))(value);
		}

		static ::System::Decimal ApproximatelyRound_1(::System::Decimal data)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_APPROXIMATELYROUND_1_OFFSET))(data);
		}

		static ::System::Int32 ProtectFloorToOne_2(::System::Single data)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_PROTECTFLOORTOONE_2_OFFSET))(data);
		}

		static ::System::Int32 CurrentShowHPInt(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSHOWHPINT_OFFSET))(entity);
		}

		static ::System::Int32 CurrentHPInt(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTHPINT_OFFSET))(entity);
		}

		static ::System::Int32 CurrentHPAndShieldInt(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTHPANDSHIELDINT_OFFSET))(entity);
		}

		static ::System::Int32 CurrentStanceInt(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSTANCEINT_OFFSET))(entity);
		}

		static ::System::Int32 CurrentStanceShowInt(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSTANCESHOWINT_OFFSET))(entity);
		}

		static ::System::Int32 MaxStanceInt(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_MAXSTANCEINT_OFFSET))(entity);
		}

		static ::System::Int32 MaxStanceShowInt(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_MAXSTANCESHOWINT_OFFSET))(entity);
		}

		static ::System::Single CurrentStancePercent(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSTANCEPERCENT_OFFSET))(entity);
		}

		static ::System::Single StancePercent(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::FixPoint value)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_STANCEPERCENT_OFFSET))(entity, value);
		}

		static ::System::Single PluralityStancePercent(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::FixPoint value)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_PLURALITYSTANCEPERCENT_OFFSET))(entity, value);
		}

		static ::RPG::GameCore::FixPoint MaxStance(::RPG::GameCore::TurnBasedAbilityComponent* _AbilityData)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_MAXSTANCE_OFFSET))(_AbilityData);
		}

		static ::System::Single HPPercentBeforeChangeEvent(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::FixPoint eventChangeValue)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_HPPERCENTBEFORECHANGEEVENT_OFFSET))(entity, eventChangeValue);
		}

		static ::System::Single StancePercentBeforeChangeEvent(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::FixPoint eventChangeValue)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_STANCEPERCENTBEFORECHANGEEVENT_OFFSET))(entity, eventChangeValue);
		}

		static ::RPG::GameCore::FixPoint TotalStanceAfterChangeEvent(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::FixPoint eventChangeValue)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_TOTALSTANCEAFTERCHANGEEVENT_OFFSET))(entity, eventChangeValue);
		}

		static ::System::Int32 CurrentSP(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSP_OFFSET))(entity);
		}

		static ::RPG::GameCore::FixPoint CurrentSP_FP(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSP_FP_OFFSET))(entity);
		}

		static ::System::Int32 MaxSP(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_MAXSP_OFFSET))(entity);
		}

		static ::RPG::GameCore::FixPoint MaxSP_FP(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_MAXSP_FP_OFFSET))(entity);
		}

		static ::System::Single CurrentSPPercent(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSPPERCENT_OFFSET))(entity);
		}

		static ::System::Int32 CurrentSPPercent100Int(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSPPERCENT100INT_OFFSET))(entity);
		}

		static ::System::Int32 CurrentBP(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTBP_OFFSET))(entity);
		}

		static ::System::Int32 MaxBP(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_MAXBP_OFFSET))(entity);
		}

		static ::System::Int32 SkillNeedBPByControlSkillType(::RPG::GameCore::GameEntity* entity, ::System::Int32 controlSkillType)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_SKILLNEEDBPBYCONTROLSKILLTYPE_OFFSET))(entity, controlSkillType);
		}

		static ::System::Int32 SkillNeedBP(::RPG::GameCore::GameEntity* entity, ::System::Int32 skillIndex)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_SKILLNEEDBP_OFFSET))(entity, skillIndex);
		}

		static ::System::Int32 SkillNeedSP(::RPG::GameCore::GameEntity* entity, ::System::Int32 skillIndex)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_SKILLNEEDSP_OFFSET))(entity, skillIndex);
		}

		static ::System::Int32 SkillBPPreChange(::RPG::GameCore::SkillData* pSkillData)
		{
			return ((::System::Int32(*)(::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_SKILLBPPRECHANGE_OFFSET))(pSkillData);
		}

		static ::System::Single CurrentShieldAndHPPercent(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELDANDHPPERCENT_OFFSET))(entity);
		}

		static ::RPG::GameCore::FixPoint CurrentShieldAndHP(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELDANDHP_OFFSET))(entity);
		}

		static ::RPG::GameCore::FixPoint CurrentHP(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTHP_OFFSET))(entity);
		}

		static ::System::Int32 CurrentNegativeHP(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTNEGATIVEHP_OFFSET))(entity);
		}

		static ::System::UInt32 CurrentHPSeg(::RPG::GameCore::GameEntity* entity, ::System::UInt32 totalSeg)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTHPSEG_OFFSET))(entity, totalSeg);
		}

		static ::System::UInt32 DeltaHPSeg(::RPG::GameCore::GameEntity* entity, ::System::UInt32 totalSeg, ::RPG::GameCore::FixPoint deltaHP)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_DELTAHPSEG_OFFSET))(entity, totalSeg, deltaHP);
		}

		static ::System::Single DoPropertyAdsorption(::System::Single val)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_DOPROPERTYADSORPTION_OFFSET))(val);
		}

		static ::RPG::GameCore::FixPoint CurrentShield(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELD_OFFSET))(entity);
		}

		static ::System::Single CurrentShieldPercent(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELDPERCENT_OFFSET))(entity);
		}

		static ::System::Single CurrentShieldPercentByMaxHP(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CURRENTSHIELDPERCENTBYMAXHP_OFFSET))(entity);
		}

		static ::System::Boolean ShieldAndHPOverMaxHP(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_SHIELDANDHPOVERMAXHP_OFFSET))(entity);
		}

		static ::System::Int32 CharacterLevelInt(::RPG::GameCore::TurnBasedAbilityComponent* turnBasedAbility)
		{
			return ((::System::Int32(*)(::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_CHARACTERLEVELINT_OFFSET))(turnBasedAbility);
		}

		static ::RPG::GameCore::FixPoint GetUltraSkillSPNeed(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_GETULTRASKILLSPNEED_OFFSET))(entity);
		}

		static ::RPG::GameCore::FixPoint GetDefaultUltraSkillSPNeed(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_GETDEFAULTULTRASKILLSPNEED_OFFSET))(entity);
		}

		static ::RPG::Client::PropertyUIData* GetPropertyUIData(::RPG::GameCore::TurnBasedAbilityComponent* turnBasedAbility, ::RPG::GameCore::AbilityProperty type)
		{
			return ((::RPG::Client::PropertyUIData*(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_GETPROPERTYUIDATA_OFFSET))(turnBasedAbility, type);
		}

		static ::RPG::Client::PropertyUIData* GetPropertyUIData_1(::RPG::GameCore::TurnBasedAbilityComponent* turnBasedAbility, ::RPG::GameCore::AvatarPropertyType type)
		{
			return ((::RPG::Client::PropertyUIData*(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_GETPROPERTYUIDATA_1_OFFSET))(turnBasedAbility, type);
		}

		static ::RPG::Client::PropertyNumberUIData* GetPropertyNumberUIData(::RPG::GameCore::TurnBasedAbilityComponent* turnBasedAbility)
		{
			return ((::RPG::Client::PropertyNumberUIData*(*)(::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINUMBERUTILS_GETPROPERTYNUMBERUIDATA_OFFSET))(turnBasedAbility);
		}
	};
}
