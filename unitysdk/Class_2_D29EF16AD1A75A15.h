#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ShiftLocalPlayerByAnchor; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_D29EF16AD1A75A15_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BAB6E0)
#define CLASS_2_D29EF16AD1A75A15_METHOD_2_6A535332060949F6_OFFSET UNITYSDK_OFFSET(0x18BAB720)
#define CLASS_2_D29EF16AD1A75A15_METHOD_2_BEFE21FC0773CE57_OFFSET UNITYSDK_OFFSET(0x18BABD70)
#define CLASS_2_D29EF16AD1A75A15_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18BAB8C0)
#define CLASS_2_D29EF16AD1A75A15_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18BAC060)
#define CLASS_2_D29EF16AD1A75A15_TICK_OFFSET UNITYSDK_OFFSET(0x18BAC0B0)
#define CLASS_2_D29EF16AD1A75A15__CTOR_OFFSET UNITYSDK_OFFSET(0x18BAB6D0)

inline static constexpr unsigned int Class_2_D29EF16AD1A75A15_TypeDefinitionIndex = 50837;

class Class_2_D29EF16AD1A75A15 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ShiftLocalPlayerByAnchor* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShiftLocalPlayerByAnchor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShiftLocalPlayerByAnchor*))((::PBYTE)hIl2Cpp + CLASS_2_D29EF16AD1A75A15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D29EF16AD1A75A15_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_6A535332060949F6(::RPG::GameCore::DynamicString* a1, ::RPG::GameCore::DynamicString* a2, ::RPG::GameCore::DynamicString* a3, ::System::String*& a4, ::System::String*& a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DynamicString*, ::RPG::GameCore::DynamicString*, ::RPG::GameCore::DynamicString*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_D29EF16AD1A75A15_METHOD_2_6A535332060949F6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D29EF16AD1A75A15_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D29EF16AD1A75A15_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D29EF16AD1A75A15_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BEFE21FC0773CE57(::System::String* a1, ::System::String* a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_D29EF16AD1A75A15_METHOD_2_BEFE21FC0773CE57_OFFSET))(this, a1, a2, a3, a4);
	}
};
