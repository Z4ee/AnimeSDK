#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PropEscalatorSetup; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_A660F80B91AA3D07_DISPOSE_OFFSET UNITYSDK_OFFSET(0x185A2980)
#define CLASS_2_A660F80B91AA3D07_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x185A2A20)
#define CLASS_2_A660F80B91AA3D07_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x185A29D0)
#define CLASS_2_A660F80B91AA3D07_TICK_OFFSET UNITYSDK_OFFSET(0x185A3000)
#define CLASS_2_A660F80B91AA3D07__CTOR_OFFSET UNITYSDK_OFFSET(0x185A2970)

inline static constexpr unsigned int Class_2_A660F80B91AA3D07_TypeDefinitionIndex = 55740;

class Class_2_A660F80B91AA3D07 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropEscalatorSetup* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropEscalatorSetup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropEscalatorSetup*))((::PBYTE)hIl2Cpp + CLASS_2_A660F80B91AA3D07__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A660F80B91AA3D07_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A660F80B91AA3D07_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A660F80B91AA3D07_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A660F80B91AA3D07_TICK_OFFSET))(this, a1);
	}
};
