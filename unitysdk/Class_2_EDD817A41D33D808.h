#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowBattleMessage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CLASS_2_EDD817A41D33D808_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA55EF20)
#define CLASS_2_EDD817A41D33D808_METHOD_2_5A8475C532AEDE54_OFFSET UNITYSDK_OFFSET(0xA55F0F0)
#define CLASS_2_EDD817A41D33D808_METHOD_2_67BE94BC2A33DC20_OFFSET UNITYSDK_OFFSET(0xA55F2C0)
#define CLASS_2_EDD817A41D33D808_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA55EF60)
#define CLASS_2_EDD817A41D33D808_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA55F5F0)
#define CLASS_2_EDD817A41D33D808_TICK_OFFSET UNITYSDK_OFFSET(0xA55F640)
#define CLASS_2_EDD817A41D33D808__CTOR_OFFSET UNITYSDK_OFFSET(0xA55EE90)

inline static constexpr unsigned int Class_2_EDD817A41D33D808_TypeDefinitionIndex = 52700;

class Class_2_EDD817A41D33D808 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowBattleMessage* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::Text::StringBuilder* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleMessage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleMessage*))((::PBYTE)hIl2Cpp + CLASS_2_EDD817A41D33D808__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDD817A41D33D808_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDD817A41D33D808_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDD817A41D33D808_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EDD817A41D33D808_TICK_OFFSET))(this, a1);
	}

	::System::String* Method_2_5A8475C532AEDE54()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDD817A41D33D808_METHOD_2_5A8475C532AEDE54_OFFSET))(this);
	}

	::System::String* Method_2_67BE94BC2A33DC20(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EDD817A41D33D808_METHOD_2_67BE94BC2A33DC20_OFFSET))(this, a1);
	}
};
