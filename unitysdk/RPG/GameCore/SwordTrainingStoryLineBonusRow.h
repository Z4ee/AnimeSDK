#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGSTORYLINEBONUSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D597D70)
#define RPG_GAMECORE_SWORDTRAININGSTORYLINEBONUSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D598050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingStoryLineBonusRow_TypeDefinitionIndex = 12370;

	class SwordTrainingStoryLineBonusRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::TextID>* EffectDescList; // 0x10
		::RPG::Client::TextID EffectDesc3; // 0x18
		::RPG::Client::TextID EffectDesc2; // 0x28
		::System::UInt32 StoryLineNum; // 0x38
		::RPG::Client::TextID EffectDesc1; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTORYLINEBONUSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTORYLINEBONUSROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
