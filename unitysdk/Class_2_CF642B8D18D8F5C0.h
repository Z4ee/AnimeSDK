#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class SetFlipperLightDeviceFollowPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CF642B8D18D8F5C0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8874240)
#define CLASS_2_CF642B8D18D8F5C0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8873F80)
#define CLASS_2_CF642B8D18D8F5C0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8874280)
#define CLASS_2_CF642B8D18D8F5C0_TICK_OFFSET UNITYSDK_OFFSET(0x8874360)
#define CLASS_2_CF642B8D18D8F5C0__CTOR_OFFSET UNITYSDK_OFFSET(0x8873F00)

inline static constexpr unsigned int Class_2_CF642B8D18D8F5C0_TypeDefinitionIndex = 42723;

class Class_2_CF642B8D18D8F5C0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::Promises::Promise* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20
	::RPG::GameCore::SetFlipperLightDeviceFollowPlayer* Field_2_1; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x30

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
