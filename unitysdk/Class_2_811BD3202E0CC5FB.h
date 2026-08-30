#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_811BD3202E0CC5FB_Class_1_4C3415F922B5C2E8;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OpenTimeRewindRecreateWorldPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_811BD3202E0CC5FB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBADC640)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0xBADDBF0)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_29861B2485680DBB_1_OFFSET UNITYSDK_OFFSET(0xBADDA20)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_29861B2485680DBB_OFFSET UNITYSDK_OFFSET(0xBADD3C0)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_3ABD0165571B5EF8_OFFSET UNITYSDK_OFFSET(0xBADDCB0)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xBADD060)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0xBADD590)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0xBADDD90)
#define CLASS_2_811BD3202E0CC5FB_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xBADDC50)
#define CLASS_2_811BD3202E0CC5FB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBADCB70)
#define CLASS_2_811BD3202E0CC5FB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBADC990)
#define CLASS_2_811BD3202E0CC5FB_TICK_OFFSET UNITYSDK_OFFSET(0xBADD190)
#define CLASS_2_811BD3202E0CC5FB__CTOR_OFFSET UNITYSDK_OFFSET(0xBADC3B0)

inline static constexpr unsigned int Class_2_811BD3202E0CC5FB_TypeDefinitionIndex = 53633;

class Class_2_811BD3202E0CC5FB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* JLGKECEAFIG; // 0x18
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x20
	::Class_3_07C3C4D2990C49EE* IOMHPJIENKM; // 0x28
	::Class_2_811BD3202E0CC5FB_Class_1_4C3415F922B5C2E8* MLDBKFBECPB; // 0x30
	::Il2CppArray<::Class_3_07C3C4D2990C49EE*>* BPKFMAOLAOC; // 0x38
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x40
	::RPG::GameCore::OpenTimeRewindRecreateWorldPage* OFKGLJOAMLD; // 0x48
	::Class_2_811BD3202E0CC5FB_Class_1_4C3415F922B5C2E8* EOMJAOMPAAH; // 0x50
	::Il2CppArray<::System::Boolean>* AIOEAPCKFBM; // 0x58
	::System::Single CDDGJKDCNMH; // 0x60
	::System::Int32 OHOGFBCFFFN; // 0x64
	::System::Single DNNONPLHEOI; // 0x68
	::System::Single BLFDNCLDLMP; // 0x6C
	::System::Int32 GOPKPNHHLIN; // 0x70

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
