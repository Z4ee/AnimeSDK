#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIONSETTINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CD73BE0)
#define RPG_GAMECORE_ACTIONSETTINGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD74290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionSettingRow_TypeDefinitionIndex = 13704;

	class ActionSettingRow : public ::System::Object
	{
	public:
		::System::String* ActionName; // 0x10
		::Il2CppArray<::System::String*>* SettableInControlTypes; // 0x18
		::Il2CppArray<::System::String*>* BlackListKeys; // 0x20
		::System::UInt32 GroupType; // 0x28
		::System::UInt32 ShowType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETTINGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionSettingRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionSettingRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETTINGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
