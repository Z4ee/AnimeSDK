#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelDialogPackInfo; }
namespace RPG::GameCore { class LevelGroupMissionConditionSet; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELDIALOGINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173317D0)
#define RPG_GAMECORE_LEVELDIALOGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17331990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDialogInfo_TypeDefinitionIndex = 15830;

	class LevelDialogInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LevelGraph; // 0x10
		::Il2CppArray<::RPG::GameCore::LevelDialogPackInfo*>* PackList; // 0x18
		::RPG::GameCore::LevelGroupMissionConditionSet* EnableCondition; // 0x20
		::System::Boolean EnableDialogCamera; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIALOGINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelDialogInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDialogInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIALOGINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
