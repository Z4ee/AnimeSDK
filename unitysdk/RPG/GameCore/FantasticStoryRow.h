#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FANTASTICSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19707E60)
#define RPG_GAMECORE_FANTASTICSTORYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197080B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FantasticStoryRow_TypeDefinitionIndex = 11006;

	class FantasticStoryRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BuffIDList; // 0x10
		::Il2CppArray<::System::UInt32>* ChapterIDList; // 0x18
		::Il2CppArray<::System::UInt32>* BattleIDList; // 0x20
		::Il2CppArray<::System::UInt32>* BuffSlotIDList; // 0x28
		::System::UInt32 FantasticStoryID; // 0x30
		::System::UInt32 ActivityModuleID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FantasticStoryRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FantasticStoryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
