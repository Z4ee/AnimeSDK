#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetTextJoinValue; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_9A843F170E221857_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118E44D0)
#define CLASS_2_9A843F170E221857_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x118E4570)
#define CLASS_2_9A843F170E221857_METHOD_2_E03293DEA26D8903_OFFSET UNITYSDK_OFFSET(0x118E42C0)
#define CLASS_2_9A843F170E221857_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118E40F0)
#define CLASS_2_9A843F170E221857_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x118E4030)
#define CLASS_2_9A843F170E221857_TICK_OFFSET UNITYSDK_OFFSET(0x118E4090)
#define CLASS_2_9A843F170E221857__CTOR_OFFSET UNITYSDK_OFFSET(0x118E4010)

inline static constexpr unsigned int Class_2_9A843F170E221857_TypeDefinitionIndex = 49108;

class Class_2_9A843F170E221857 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::String* Field_2_2; // 0x18
	::RPG::GameCore::SetTextJoinValue* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28

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

	::System::Void Method_2_E03293DEA26D8903(::RPG::GameCore::TextJoinConfigRow* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9A843F170E221857_METHOD_2_E03293DEA26D8903_OFFSET))(this, a1, a2);
	}
};
