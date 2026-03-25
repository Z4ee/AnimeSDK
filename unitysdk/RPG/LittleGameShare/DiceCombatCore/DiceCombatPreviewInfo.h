#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_ISINRECOMMENDEDDICELIST_OFFSET UNITYSDK_OFFSET(0x16753450)
#define RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_ISINSKILLDICELIST_OFFSET UNITYSDK_OFFSET(0x167532F0)
#define RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x167535B0)

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int DiceCombatPreviewInfo_TypeDefinitionIndex = 28578;

	class DiceCombatPreviewInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* RecommendedDiceList; // 0x10
		::System::String* SkillDiceIconPath; // 0x18
		::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* SkillDiceList; // 0x20
		::System::Boolean WeatherTriggered; // 0x28
		::System::Int32 AdditivePoint; // 0x2C
		::System::Int32 BasePoint; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean IsInSkillDiceList(::System::UInt32 ownerUID, ::System::Int32 diceIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_ISINSKILLDICELIST_OFFSET))(this, ownerUID, diceIndex);
		}

		::System::Boolean IsInRecommendedDiceList(::System::UInt32 ownerUID, ::System::Int32 diceIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_DICECOMBATCORE_DICECOMBATPREVIEWINFO_ISINRECOMMENDEDDICELIST_OFFSET))(this, ownerUID, diceIndex);
		}
	};
}
