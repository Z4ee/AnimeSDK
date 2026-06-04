#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HEARTDIALNPCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19820A80)
#define RPG_GAMECORE_HEARTDIALNPCROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19820C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialNpcRow_TypeDefinitionIndex = 13078;

	class HeartDialNpcRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ScriptIDList; // 0x10
		::System::UInt32 InstanceID; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 FloorID; // 0x20
		::System::UInt32 DefaultScriptID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALNPCROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HeartDialNpcRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeartDialNpcRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALNPCROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
