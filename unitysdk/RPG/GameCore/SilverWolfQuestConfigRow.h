#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SILVERWOLFQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BE4B370)
#define RPG_GAMECORE_SILVERWOLFQUESTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE4B560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SilverWolfQuestConfigRow_TypeDefinitionIndex = 11878;

	class SilverWolfQuestConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* FigurePath; // 0x18
		::System::UInt32 HardLevel; // 0x20
		::System::UInt32 QuestID; // 0x24
		::System::UInt32 RaidID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFQUESTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SilverWolfQuestConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SilverWolfQuestConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFQUESTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
