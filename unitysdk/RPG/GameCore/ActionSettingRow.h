#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIONSETTINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x185FE090)
#define RPG_GAMECORE_ACTIONSETTINGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x185FE6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionSettingRow_TypeDefinitionIndex = 13084;

	class ActionSettingRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* SettableInControlTypes; // 0x10
		::Il2CppArray<::System::String*>* BlackListKeys; // 0x18
		::System::String* ActionName; // 0x20
		::System::UInt32 ShowType; // 0x28
		::System::UInt32 GroupType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETTINGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActionSettingRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionSettingRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETTINGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
