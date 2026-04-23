#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGSTORYLINEBONUSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EC8280)
#define RPG_GAMECORE_SWORDTRAININGSTORYLINEBONUSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC8560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingStoryLineBonusRow_TypeDefinitionIndex = 11784;

	class SwordTrainingStoryLineBonusRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::TextID>* EffectDescList; // 0x10
		::RPG::Client::TextID EffectDesc1; // 0x18
		::RPG::Client::TextID EffectDesc2; // 0x28
		::RPG::Client::TextID EffectDesc3; // 0x38
		::System::UInt32 StoryLineNum; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTORYLINEBONUSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingStoryLineBonusRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTORYLINEBONUSROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
