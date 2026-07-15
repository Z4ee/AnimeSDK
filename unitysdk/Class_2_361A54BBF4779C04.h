#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByModifierValue; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_2_361A54BBF4779C04_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D09010)
#define CLASS_2_361A54BBF4779C04_METHOD_2_D012DDA5D8AEAA70_OFFSET UNITYSDK_OFFSET(0x16D093A0)
#define CLASS_2_361A54BBF4779C04_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16D09050)
#define CLASS_2_361A54BBF4779C04_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16D09670)
#define CLASS_2_361A54BBF4779C04_TICK_OFFSET UNITYSDK_OFFSET(0x16D096C0)
#define CLASS_2_361A54BBF4779C04__CTOR_OFFSET UNITYSDK_OFFSET(0x16D08F40)

inline static constexpr unsigned int Class_2_361A54BBF4779C04_TypeDefinitionIndex = 52942;

class Class_2_361A54BBF4779C04 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SetDynamicValueByModifierValue* Field_2_1; // 0x20
	::RPG::GameCore::ArrayPoolWrapper_1<::RPG::GameCore::TurnBasedModifierInstance*> Field_2_2; // 0x28
	::RPG::GameCore::StringHash Field_2_3; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByModifierValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByModifierValue*))((::PBYTE)hIl2Cpp + CLASS_2_361A54BBF4779C04__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_361A54BBF4779C04_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_361A54BBF4779C04_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_D012DDA5D8AEAA70(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_361A54BBF4779C04_METHOD_2_D012DDA5D8AEAA70_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_361A54BBF4779C04_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_361A54BBF4779C04_TICK_OFFSET))(this, a1);
	}
};
