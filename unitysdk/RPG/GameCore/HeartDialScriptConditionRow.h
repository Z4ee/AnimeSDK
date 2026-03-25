#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HEARTDIALSCRIPTCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172992E0)
#define RPG_GAMECORE_HEARTDIALSCRIPTCONDITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172994E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialScriptConditionRow_TypeDefinitionIndex = 12556;

	class HeartDialScriptConditionRow : public ::System::Object
	{
	public:
		::System::UInt32 LockConditionID; // 0x10
		::System::UInt32 FullConditionID; // 0x14
		::System::UInt32 ScriptID; // 0x18
		::System::UInt32 MissingConditionID; // 0x1C
		::System::UInt32 ControlConditionID; // 0x20
		::System::UInt32 UnLockConditionID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALSCRIPTCONDITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeartDialScriptConditionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeartDialScriptConditionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALSCRIPTCONDITIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
