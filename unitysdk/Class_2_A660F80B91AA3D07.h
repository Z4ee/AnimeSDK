#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PropEscalatorSetup; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_A660F80B91AA3D07_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8774710)
#define CLASS_2_A660F80B91AA3D07_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x87747B0)
#define CLASS_2_A660F80B91AA3D07_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8774760)
#define CLASS_2_A660F80B91AA3D07_TICK_OFFSET UNITYSDK_OFFSET(0x8774D90)
#define CLASS_2_A660F80B91AA3D07__CTOR_OFFSET UNITYSDK_OFFSET(0x8774700)

inline static constexpr unsigned int Class_2_A660F80B91AA3D07_TypeDefinitionIndex = 47059;

class Class_2_A660F80B91AA3D07 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::String* Field_2_2; // 0x18
	::RPG::GameCore::PropEscalatorSetup* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28

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
