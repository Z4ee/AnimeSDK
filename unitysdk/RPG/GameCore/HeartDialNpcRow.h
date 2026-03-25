#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HEARTDIALNPCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17298E60)
#define RPG_GAMECORE_HEARTDIALNPCROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17299060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialNpcRow_TypeDefinitionIndex = 12558;

	class HeartDialNpcRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ScriptIDList; // 0x10
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 DefaultScriptID; // 0x1C
		::System::UInt32 FloorID; // 0x20
		::System::UInt32 InstanceID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALNPCROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeartDialNpcRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeartDialNpcRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALNPCROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
