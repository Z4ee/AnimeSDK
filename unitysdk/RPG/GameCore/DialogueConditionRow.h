#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DialogueConditionType.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DIALOGUECONDITIONROW_COMPAREITEMSTATE_OFFSET UNITYSDK_OFFSET(0x1D81B3D0)
#define RPG_GAMECORE_DIALOGUECONDITIONROW_COMPAREMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0x1D81B3A0)
#define RPG_GAMECORE_DIALOGUECONDITIONROW_COMPAREPRESTIGESTATE_OFFSET UNITYSDK_OFFSET(0x1D81B3F0)
#define RPG_GAMECORE_DIALOGUECONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D81B1E0)
#define RPG_GAMECORE_DIALOGUECONDITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81B390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueConditionRow_TypeDefinitionIndex = 13028;

	class DialogueConditionRow : public ::System::Object
	{
	public:
		::System::UInt32 Param2; // 0x10
		::System::UInt32 ID; // 0x14
		::RPG::GameCore::DialogueConditionType Type; // 0x18
		::System::UInt32 Param1; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUECONDITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DialogueConditionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DialogueConditionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUECONDITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Boolean CompareMissionState(::RPG::GameCore::SubMissionState a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SubMissionState, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUECONDITIONROW_COMPAREMISSIONSTATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean CompareItemState(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUECONDITIONROW_COMPAREITEMSTATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean ComparePrestigeState(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUECONDITIONROW_COMPAREPRESTIGESTATE_OFFSET))(this, a1, a2);
		}
	};
}
