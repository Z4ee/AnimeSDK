#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LookAt; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_FDBC2964D07BE44E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1138C390)
#define CLASS_2_FDBC2964D07BE44E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1138C3D0)
#define CLASS_2_FDBC2964D07BE44E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1138D120)
#define CLASS_2_FDBC2964D07BE44E_TICK_OFFSET UNITYSDK_OFFSET(0x1138D170)
#define CLASS_2_FDBC2964D07BE44E__CTOR_OFFSET UNITYSDK_OFFSET(0x1138C380)

inline static constexpr unsigned int Class_2_FDBC2964D07BE44E_TypeDefinitionIndex = 44145;

class Class_2_FDBC2964D07BE44E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::LookAt* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LookAt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LookAt*))((::PBYTE)hIl2Cpp + CLASS_2_FDBC2964D07BE44E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDBC2964D07BE44E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDBC2964D07BE44E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDBC2964D07BE44E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FDBC2964D07BE44E_TICK_OFFSET))(this, a1);
	}
};
