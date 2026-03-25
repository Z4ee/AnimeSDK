#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetTextJoinValue; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_591C6A1BF4E2866D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C02D20)
#define CLASS_2_591C6A1BF4E2866D_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x8C02DC0)
#define CLASS_2_591C6A1BF4E2866D_METHOD_2_60466F559594E331_OFFSET UNITYSDK_OFFSET(0x8C02B10)
#define CLASS_2_591C6A1BF4E2866D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8C02940)
#define CLASS_2_591C6A1BF4E2866D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8C02880)
#define CLASS_2_591C6A1BF4E2866D_TICK_OFFSET UNITYSDK_OFFSET(0x8C028E0)
#define CLASS_2_591C6A1BF4E2866D__CTOR_OFFSET UNITYSDK_OFFSET(0x8C02860)

inline static constexpr unsigned int Class_2_591C6A1BF4E2866D_TypeDefinitionIndex = 43118;

class Class_2_591C6A1BF4E2866D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetTextJoinValue* Field_2_0; // 0x18
	::System::String* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTextJoinValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTextJoinValue*))((::PBYTE)hIl2Cpp + CLASS_2_591C6A1BF4E2866D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_591C6A1BF4E2866D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_591C6A1BF4E2866D_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_591C6A1BF4E2866D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_591C6A1BF4E2866D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_591C6A1BF4E2866D_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_60466F559594E331(::RPG::GameCore::TextJoinConfigRow* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_591C6A1BF4E2866D_METHOD_2_60466F559594E331_OFFSET))(this, a1, a2);
	}
};
