#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ENHANCEDADVENTUREPLAYERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188A9CD0)
#define RPG_GAMECORE_ENHANCEDADVENTUREPLAYERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188A9E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnhancedAdventurePlayerRow_TypeDefinitionIndex = 11883;

	class EnhancedAdventurePlayerRow : public ::System::Object
	{
	public:
		::System::String* PlayerJsonPath; // 0x10
		::Il2CppArray<::System::UInt32>* MazeSkillIdList; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 EnhancedID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDADVENTUREPLAYERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EnhancedAdventurePlayerRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnhancedAdventurePlayerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDADVENTUREPLAYERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
