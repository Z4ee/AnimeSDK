#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TutorialRestoreType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialTriggerParam; }
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190D6310)
#define RPG_GAMECORE_TUTORIALDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190D6A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialDataRow_TypeDefinitionIndex = 14590;

	class TutorialDataRow : public ::System::Object
	{
	public:
		::System::String* TutorialJsonPath; // 0x10
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* TriggerParams; // 0x18
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* FinishTriggerParams; // 0x20
		::System::Boolean CanInterrupt; // 0x28
		::System::UInt32 TutorialID; // 0x2C
		::RPG::GameCore::TutorialRestoreType RestoreType; // 0x30
		::System::UInt32 Priority; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TutorialDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
