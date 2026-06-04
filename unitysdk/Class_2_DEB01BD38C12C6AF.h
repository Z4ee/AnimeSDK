#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class WaitPlanetFesGetUseItemFirstTime; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_DEB01BD38C12C6AF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A914B0)
#define CLASS_2_DEB01BD38C12C6AF_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x13A91650)
#define CLASS_2_DEB01BD38C12C6AF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A91540)
#define CLASS_2_DEB01BD38C12C6AF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A915A0)
#define CLASS_2_DEB01BD38C12C6AF_TICK_OFFSET UNITYSDK_OFFSET(0x13A915F0)
#define CLASS_2_DEB01BD38C12C6AF__CTOR_OFFSET UNITYSDK_OFFSET(0x13A91420)

inline static constexpr unsigned int Class_2_DEB01BD38C12C6AF_TypeDefinitionIndex = 55043;

class Class_2_DEB01BD38C12C6AF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::Client::WaitPlanetFesGetUseItemFirstTime* Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::WaitPlanetFesGetUseItemFirstTime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::WaitPlanetFesGetUseItemFirstTime*))((::PBYTE)hIl2Cpp + CLASS_2_DEB01BD38C12C6AF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEB01BD38C12C6AF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEB01BD38C12C6AF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEB01BD38C12C6AF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DEB01BD38C12C6AF_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DEB01BD38C12C6AF_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
