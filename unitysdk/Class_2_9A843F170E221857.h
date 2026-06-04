#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetTextJoinValue; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_9A843F170E221857_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA5AFE0)
#define CLASS_2_9A843F170E221857_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0xAA5B080)
#define CLASS_2_9A843F170E221857_METHOD_2_96DF1C1F0EC5F05D_OFFSET UNITYSDK_OFFSET(0xAA5ADD0)
#define CLASS_2_9A843F170E221857_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA5AC10)
#define CLASS_2_9A843F170E221857_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAA5AB50)
#define CLASS_2_9A843F170E221857_TICK_OFFSET UNITYSDK_OFFSET(0xAA5ABB0)
#define CLASS_2_9A843F170E221857__CTOR_OFFSET UNITYSDK_OFFSET(0xAA5AB30)

inline static constexpr unsigned int Class_2_9A843F170E221857_TypeDefinitionIndex = 49775;

class Class_2_9A843F170E221857 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetTextJoinValue* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTextJoinValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTextJoinValue*))((::PBYTE)hIl2Cpp + CLASS_2_9A843F170E221857__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A843F170E221857_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A843F170E221857_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A843F170E221857_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A843F170E221857_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9A843F170E221857_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_96DF1C1F0EC5F05D(::RPG::GameCore::TextJoinConfigRow* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9A843F170E221857_METHOD_2_96DF1C1F0EC5F05D_OFFSET))(this, a1, a2);
	}
};
