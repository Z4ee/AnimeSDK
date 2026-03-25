#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ConvinceInitialize; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B854FD6C970DC710_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11059100)
#define CLASS_2_B854FD6C970DC710_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11059400)
#define CLASS_2_B854FD6C970DC710_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11059150)
#define CLASS_2_B854FD6C970DC710_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11059350)
#define CLASS_2_B854FD6C970DC710_TICK_OFFSET UNITYSDK_OFFSET(0x110593A0)
#define CLASS_2_B854FD6C970DC710__CTOR_OFFSET UNITYSDK_OFFSET(0x110590F0)

inline static constexpr unsigned int Class_2_B854FD6C970DC710_TypeDefinitionIndex = 42657;

class Class_2_B854FD6C970DC710 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ConvinceInitialize* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceInitialize* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceInitialize*))((::PBYTE)hIl2Cpp + CLASS_2_B854FD6C970DC710__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B854FD6C970DC710_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B854FD6C970DC710_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B854FD6C970DC710_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B854FD6C970DC710_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B854FD6C970DC710_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
