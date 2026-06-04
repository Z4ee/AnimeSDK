#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/RPG/GameCore/HeartDialStepType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_BC601FCB47AEB5E5;

#define RPG_GAMECORE_HEARTDIALSCRIPTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19821110)
#define RPG_GAMECORE_HEARTDIALSCRIPTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x198214A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialScriptRow_TypeDefinitionIndex = 13072;

	class HeartDialScriptRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::HeartDialStepType>* StepList; // 0x10
		::Il2CppArray<::Class_1_BC601FCB47AEB5E5*>* TotalEmoInfoList; // 0x18
		::Il2CppArray<::RPG::GameCore::HeartDialEmoType>* MissingEmoList; // 0x20
		::System::UInt32 LockDialogueID; // 0x28
		::System::UInt32 FullDialogueID; // 0x2C
		::RPG::GameCore::HeartDialEmoType DefaultEmoType; // 0x30
		::System::UInt32 UnLockDialogueID; // 0x34
		::System::UInt32 ControlDialogueID; // 0x38
		::System::UInt32 MissingDialogueID; // 0x3C
		::System::UInt32 RaidID; // 0x40
		::System::UInt32 ScriptID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALSCRIPTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeartDialScriptRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeartDialScriptRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALSCRIPTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
