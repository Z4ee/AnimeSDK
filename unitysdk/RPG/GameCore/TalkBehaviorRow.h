#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ParaType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TALKBEHAVIORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18ECE8F0)
#define RPG_GAMECORE_TALKBEHAVIORROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18ECEB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkBehaviorRow_TypeDefinitionIndex = 14410;

	class TalkBehaviorRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParaList; // 0x10
		::System::String* CustomString; // 0x18
		::System::UInt32 CurrencyItem; // 0x20
		::RPG::GameCore::ParaType ParaType; // 0x24
		::System::UInt32 BehaviorType; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::UInt32 ParaInt; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKBEHAVIORROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TalkBehaviorRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TalkBehaviorRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKBEHAVIORROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
