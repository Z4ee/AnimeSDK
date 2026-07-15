#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_811BD3202E0CC5FB_Class_1_4C3415F922B5C2E8;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OpenTimeRewindRecreateWorldPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_811BD3202E0CC5FB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D9B870)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x16D9CE20)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_29861B2485680DBB_1_OFFSET UNITYSDK_OFFSET(0x16D9CC50)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_29861B2485680DBB_OFFSET UNITYSDK_OFFSET(0x16D9C5F0)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_3ABD0165571B5EF8_OFFSET UNITYSDK_OFFSET(0x16D9CEE0)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x16D9C290)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x16D9C7C0)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x16D9CFD0)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x16D9CE80)
#define CLASS_2_811BD3202E0CC5FB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16D9BDA0)
#define CLASS_2_811BD3202E0CC5FB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16D9BBC0)
#define CLASS_2_811BD3202E0CC5FB_TICK_OFFSET UNITYSDK_OFFSET(0x16D9C3C0)
#define CLASS_2_811BD3202E0CC5FB__CTOR_OFFSET UNITYSDK_OFFSET(0x16D9B5E0)

inline static constexpr unsigned int Class_2_811BD3202E0CC5FB_TypeDefinitionIndex = 50949;

class Class_2_811BD3202E0CC5FB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::OpenTimeRewindRecreateWorldPage* Field_2_1; // 0x20
	::Il2CppArray<::Class_3_07C3C4D2990C49EE*>* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::Il2CppArray<::System::Boolean>* Field_2_4; // 0x38
	::Class_2_811BD3202E0CC5FB_Class_1_4C3415F922B5C2E8* Field_2_5; // 0x40
	::RPG::GameCore::GameEntity* Field_2_6; // 0x48
	::Class_3_07C3C4D2990C49EE* Field_2_7; // 0x50
	::Class_2_811BD3202E0CC5FB_Class_1_4C3415F922B5C2E8* Field_2_8; // 0x58
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

	::System::Void Method_2_29861B2485680DBB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_811BD3202E0CC5FB_METHOD_2_29861B2485680DBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_29861B2485680DBB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_811BD3202E0CC5FB_METHOD_2_29861B2485680DBB_1_OFFSET))(this, a1);
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
