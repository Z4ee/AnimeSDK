#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_38;
namespace System { class String; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINSPECIALMARKTEXTNODEVIEWMODEL_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1B496650)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINSPECIALMARKTEXTNODEVIEWMODEL_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1B496670)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINSPECIALMARKTEXTNODEVIEWMODEL_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1B496660)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINSPECIALMARKTEXTNODEVIEWMODEL_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1B496680)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINSPECIALMARKTEXTNODEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B496630)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinSpecialMarkTextNodeViewModel_TypeDefinitionIndex = 75914;

	class FateRinSpecialMarkTextNodeViewModel : public ::System::Object
	{
	public:
		::System::String* _Path_k__BackingField; // 0x10
		::System::String* _Text_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_945ACFB1FEBC7A2C_38* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_945ACFB1FEBC7A2C_38*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINSPECIALMARKTEXTNODEVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINSPECIALMARKTEXTNODEVIEWMODEL_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINSPECIALMARKTEXTNODEVIEWMODEL_SET_PATH_OFFSET))(this, a1);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINSPECIALMARKTEXTNODEVIEWMODEL_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINSPECIALMARKTEXTNODEVIEWMODEL_SET_TEXT_OFFSET))(this, a1);
		}
	};
}
