#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class SetFlipperLightDeviceFollowPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CF642B8D18D8F5C0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F26AE0)
#define CLASS_2_CF642B8D18D8F5C0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F26810)
#define CLASS_2_CF642B8D18D8F5C0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18F26B20)
#define CLASS_2_CF642B8D18D8F5C0_TICK_OFFSET UNITYSDK_OFFSET(0x18F26C20)
#define CLASS_2_CF642B8D18D8F5C0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F26790)

inline static constexpr unsigned int Class_2_CF642B8D18D8F5C0_TypeDefinitionIndex = 53046;

class Class_2_CF642B8D18D8F5C0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::Promises::Promise* BCFFALPHNMN; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_3_07C3C4D2990C49EE* KKFFHMEJAPL; // 0x28
	::RPG::GameCore::SetFlipperLightDeviceFollowPlayer* OFKGLJOAMLD; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFlipperLightDeviceFollowPlayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFlipperLightDeviceFollowPlayer*))((::PBYTE)hIl2Cpp + CLASS_2_CF642B8D18D8F5C0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF642B8D18D8F5C0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF642B8D18D8F5C0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF642B8D18D8F5C0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CF642B8D18D8F5C0_TICK_OFFSET))(this, a1);
	}
};
