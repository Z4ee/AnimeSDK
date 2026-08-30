#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMusicRhythmSongChangeEvent; }
namespace System { class Object; }

#define CLASS_2_503F42E3C830DCDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1889AE00)
#define CLASS_2_503F42E3C830DCDF_METHOD_2_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x1889AF50)
#define CLASS_2_503F42E3C830DCDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1889ACF0)
#define CLASS_2_503F42E3C830DCDF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1889ADB0)
#define CLASS_2_503F42E3C830DCDF_TICK_OFFSET UNITYSDK_OFFSET(0x1889B040)
#define CLASS_2_503F42E3C830DCDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1889AC60)

inline static constexpr unsigned int Class_2_503F42E3C830DCDF_TypeDefinitionIndex = 53737;

class Class_2_503F42E3C830DCDF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* ILEMLGEGLCC; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
	::RPG::GameCore::WaitMusicRhythmSongChangeEvent* IGHAHBNLIJA; // 0x28
	::System::Boolean BHEIANKOOPN; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMusicRhythmSongChangeEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMusicRhythmSongChangeEvent*))((::PBYTE)hIl2Cpp + CLASS_2_503F42E3C830DCDF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_503F42E3C830DCDF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_503F42E3C830DCDF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_503F42E3C830DCDF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_503F42E3C830DCDF_METHOD_2_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_503F42E3C830DCDF_TICK_OFFSET))(this, a1);
	}
};
