#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayMusicRhythmTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_C6247ED3A12D531A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA4CAD0)
#define CLASS_2_C6247ED3A12D531A_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xBA4CFB0)
#define CLASS_2_C6247ED3A12D531A_METHOD_2_E239382DD8D3653B_OFFSET UNITYSDK_OFFSET(0xBA4CC60)
#define CLASS_2_C6247ED3A12D531A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA4CB80)
#define CLASS_2_C6247ED3A12D531A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA4CF00)
#define CLASS_2_C6247ED3A12D531A_TICK_OFFSET UNITYSDK_OFFSET(0xBA4CF50)
#define CLASS_2_C6247ED3A12D531A__CTOR_OFFSET UNITYSDK_OFFSET(0xBA4CAC0)

inline static constexpr unsigned int Class_2_C6247ED3A12D531A_TypeDefinitionIndex = 53357;

class Class_2_C6247ED3A12D531A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PlayMusicRhythmTalk* IGHAHBNLIJA; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
	::System::Boolean BHEIANKOOPN; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMusicRhythmTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMusicRhythmTalk*))((::PBYTE)hIl2Cpp + CLASS_2_C6247ED3A12D531A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6247ED3A12D531A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6247ED3A12D531A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6247ED3A12D531A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C6247ED3A12D531A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C6247ED3A12D531A_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_E239382DD8D3653B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6247ED3A12D531A_METHOD_2_E239382DD8D3653B_OFFSET))(this);
	}
};
