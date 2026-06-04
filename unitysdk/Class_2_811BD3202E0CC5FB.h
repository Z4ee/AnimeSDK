#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_811BD3202E0CC5FB_Class_1_4C3415F922B5C2E8;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OpenTimeRewindRecreateWorldPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_811BD3202E0CC5FB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA98C630)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0xA98DA80)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_29861B2485680DBB_OFFSET UNITYSDK_OFFSET(0xA98D8B0)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_3ABD0165571B5EF8_OFFSET UNITYSDK_OFFSET(0xA98DB40)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_7B7D6BD6F55BCF32_OFFSET UNITYSDK_OFFSET(0xA98D250)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xA98CEF0)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0xA98D420)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0xA98DC30)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xA98DAE0)
#define CLASS_2_811BD3202E0CC5FB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA98CA00)
#define CLASS_2_811BD3202E0CC5FB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA98C820)
#define CLASS_2_811BD3202E0CC5FB_TICK_OFFSET UNITYSDK_OFFSET(0xA98D020)
#define CLASS_2_811BD3202E0CC5FB__CTOR_OFFSET UNITYSDK_OFFSET(0xA98C3A0)

inline static constexpr unsigned int Class_2_811BD3202E0CC5FB_TypeDefinitionIndex = 49872;

class Class_2_811BD3202E0CC5FB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Il2CppArray<::System::Boolean>* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::RPG::GameCore::GameEntity* Field_2_3; // 0x30
	::RPG::GameCore::OpenTimeRewindRecreateWorldPage* Field_2_4; // 0x38
	::Class_2_811BD3202E0CC5FB_Class_1_4C3415F922B5C2E8* Field_2_5; // 0x40
	::Il2CppArray<::Class_3_07C3C4D2990C49EE*>* Field_2_6; // 0x48
	::Class_2_811BD3202E0CC5FB_Class_1_4C3415F922B5C2E8* Field_2_7; // 0x50
	::Class_3_07C3C4D2990C49EE* Field_2_8; // 0x58
	::System::Int32 Field_2_9; // 0x60
	::System::Single Field_2_10; // 0x64
	::System::Int32 Field_2_11; // 0x68
	::System::Single Field_2_12; // 0x6C
	::System::Single Field_2_13; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenTimeRewindRecreateWorldPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenTimeRewindRecreateWorldPage*))((::PBYTE)hIl2Cpp + CLASS_2_811BD3202E0CC5FB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_811BD3202E0CC5FB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_811BD3202E0CC5FB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_811BD3202E0CC5FB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_811BD3202E0CC5FB_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B7D6BD6F55BCF32(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_811BD3202E0CC5FB_METHOD_2_7B7D6BD6F55BCF32_OFFSET))(this, a1);
	}

	::System::Void Method_2_29861B2485680DBB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_811BD3202E0CC5FB_METHOD_2_29861B2485680DBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_0581090195E9C81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_811BD3202E0CC5FB_METHOD_2_0581090195E9C81F_OFFSET))(this);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_811BD3202E0CC5FB_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_811BD3202E0CC5FB_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_811BD3202E0CC5FB_METHOD_2_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Void Method_2_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_811BD3202E0CC5FB_METHOD_2_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::System::Single Method_2_3ABD0165571B5EF8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_811BD3202E0CC5FB_METHOD_2_3ABD0165571B5EF8_OFFSET))(this);
	}
};
