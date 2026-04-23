#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_B39165A94502B74A;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueGambleBaseFunc; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_0C1E3530C6C7B918_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11C49AB0)
#define CLASS_2_0C1E3530C6C7B918_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x11C4A6A0)
#define CLASS_2_0C1E3530C6C7B918_METHOD_2_1290EA767C459179_2_OFFSET UNITYSDK_OFFSET(0x11C4A8A0)
#define CLASS_2_0C1E3530C6C7B918_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11C4A9F0)
#define CLASS_2_0C1E3530C6C7B918_METHOD_2_1851BEED4EC7EAA8_OFFSET UNITYSDK_OFFSET(0x11C4A530)
#define CLASS_2_0C1E3530C6C7B918_METHOD_2_5276488EF6F1DA44_OFFSET UNITYSDK_OFFSET(0x11C4A2A0)
#define CLASS_2_0C1E3530C6C7B918_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x11C4A060)
#define CLASS_2_0C1E3530C6C7B918_METHOD_2_7601F22E6FD05853_OFFSET UNITYSDK_OFFSET(0x11C4A980)
#define CLASS_2_0C1E3530C6C7B918_METHOD_2_862A46B7ADA3ADE1_OFFSET UNITYSDK_OFFSET(0x11C4A2F0)
#define CLASS_2_0C1E3530C6C7B918_METHOD_2_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x11C4AAD0)
#define CLASS_2_0C1E3530C6C7B918_METHOD_2_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x11C4A780)
#define CLASS_2_0C1E3530C6C7B918_METHOD_2_DFD7F5C5419FD422_OFFSET UNITYSDK_OFFSET(0x11C49F50)
#define CLASS_2_0C1E3530C6C7B918_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11C49BF0)
#define CLASS_2_0C1E3530C6C7B918_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11C49A60)
#define CLASS_2_0C1E3530C6C7B918_TICK_OFFSET UNITYSDK_OFFSET(0x11C49970)
#define CLASS_2_0C1E3530C6C7B918__CTOR_OFFSET UNITYSDK_OFFSET(0x11C497B0)

inline static constexpr unsigned int Class_2_0C1E3530C6C7B918_TypeDefinitionIndex = 53919;

class Class_2_0C1E3530C6C7B918 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::Client::LuaUIController* Field_2_6; // 0x20
	::RPG::Client::RogueGambleBaseFunc* Field_2_10; // 0x28
	::Class_3_B39165A94502B74A* Field_2_1; // 0x30
	::RPG::GameCore::PropComponent* Field_2_9; // 0x38
	::Class_3_E21F6DE9B7FA4D05* Field_2_5; // 0x40
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x48
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x50
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x58
	::System::UInt32 Field_2_8; // 0x60
	::System::Boolean Field_2_7; // 0x64

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B39165A94502B74A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B39165A94502B74A*))((::PBYTE)hIl2Cpp + CLASS_2_0C1E3530C6C7B918__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0C1E3530C6C7B918_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C1E3530C6C7B918_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C1E3530C6C7B918_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C1E3530C6C7B918_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_DFD7F5C5419FD422(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0C1E3530C6C7B918_METHOD_2_DFD7F5C5419FD422_OFFSET))(this, a1);
	}

	::System::Void Method_2_5276488EF6F1DA44(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0C1E3530C6C7B918_METHOD_2_5276488EF6F1DA44_OFFSET))(this, a1);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C1E3530C6C7B918_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_862A46B7ADA3ADE1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0C1E3530C6C7B918_METHOD_2_862A46B7ADA3ADE1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0C1E3530C6C7B918_METHOD_2_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void Method_2_7601F22E6FD05853(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0C1E3530C6C7B918_METHOD_2_7601F22E6FD05853_OFFSET))(this, a1);
	}

	::System::Void Method_2_1851BEED4EC7EAA8(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0C1E3530C6C7B918_METHOD_2_1851BEED4EC7EAA8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C1E3530C6C7B918_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C1E3530C6C7B918_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C1E3530C6C7B918_METHOD_2_1290EA767C459179_2_OFFSET))(this);
	}

	::System::Void Method_2_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C1E3530C6C7B918_METHOD_2_B961D33AD47A2113_OFFSET))(this);
	}
};
