#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatDiceEffectType.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatTopHintIconType.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_GETRECOMMENDDICEICONPATH_OFFSET UNITYSDK_OFFSET(0xB601F90)
#define RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_GETRECOMMENDEDDICELIST_OFFSET UNITYSDK_OFFSET(0xB6021C0)
#define RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_GETSHOWEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xB602660)
#define RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_GETTOPHINTICONTYPE_OFFSET UNITYSDK_OFFSET(0xB602460)
#define RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_ISINRECOMMENDEDDICELIST_OFFSET UNITYSDK_OFFSET(0xB601E30)
#define RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_ISINSKILLDICELIST_OFFSET UNITYSDK_OFFSET(0xB601CF0)
#define RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_SETSHOWEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xB602710)
#define RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_SETTOPHINTICONTYPE_OFFSET UNITYSDK_OFFSET(0xB602510)
#define RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB602860)

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int DiceCombatPreviewInfo_TypeDefinitionIndex = 34950;

	class DiceCombatPreviewInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatDiceEffectType>* _DiceEffectTypeMap; // 0x10
		::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* ShowEffectDiceList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatTopHintIconType>* _TopHintIconTypeMap; // 0x20
		::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* SkillDiceList; // 0x28
		::System::Collections::Generic::Dictionary_2<::Class_1_0E117AC86D8E5BCA*, ::System::String*>* RecommendedDiceIconPathMap; // 0x30
		::System::Int32 AdditivePoint; // 0x38
		::System::Int32 ExtraPoint; // 0x3C
		::System::Boolean WeatherTriggered; // 0x40
		::System::Int32 BasePoint; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean IsInSkillDiceList(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_ISINSKILLDICELIST_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInRecommendedDiceList(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_ISINRECOMMENDEDDICELIST_OFFSET))(this, a1, a2);
		}

		::System::String* GetRecommendDiceIconPath(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_GETRECOMMENDDICEICONPATH_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* GetRecommendedDiceList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_GETRECOMMENDEDDICELIST_OFFSET))(this);
		}

		::RPG::LittleGameShare::DiceCombatCore::DiceCombatTopHintIconType GetTopHintIconType(::System::UInt32 a1)
		{
			return ((::RPG::LittleGameShare::DiceCombatCore::DiceCombatTopHintIconType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_GETTOPHINTICONTYPE_OFFSET))(this, a1);
		}

		::System::Void SetTopHintIconType(::System::UInt32 a1, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatTopHintIconType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatTopHintIconType))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_SETTOPHINTICONTYPE_OFFSET))(this, a1, a2);
		}

		::RPG::LittleGameShare::DiceCombatCore::DiceCombatDiceEffectType GetShowEffectType(::System::UInt32 a1)
		{
			return ((::RPG::LittleGameShare::DiceCombatCore::DiceCombatDiceEffectType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_GETSHOWEFFECTTYPE_OFFSET))(this, a1);
		}

		::System::Void SetShowEffectType(::System::UInt32 a1, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatDiceEffectType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatDiceEffectType))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_SETSHOWEFFECTTYPE_OFFSET))(this, a1, a2);
		}
	};
}
