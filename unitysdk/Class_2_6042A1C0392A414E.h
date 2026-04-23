#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByMultiModifierValueSum; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6042A1C0392A414E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1287A390)
#define CLASS_2_6042A1C0392A414E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1287A3D0)
#define CLASS_2_6042A1C0392A414E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1287AB50)
#define CLASS_2_6042A1C0392A414E_TICK_OFFSET UNITYSDK_OFFSET(0x1287ABA0)
#define CLASS_2_6042A1C0392A414E__CTOR_OFFSET UNITYSDK_OFFSET(0x1287A2C0)

inline static constexpr unsigned int Class_2_6042A1C0392A414E_TypeDefinitionIndex = 51127;

class Class_2_6042A1C0392A414E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SetDynamicValueByMultiModifierValueSum* Field_2_0; // 0x20
	::RPG::GameCore::StringHash Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByMultiModifierValueSum* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByMultiModifierValueSum*))((::PBYTE)hIl2Cpp + CLASS_2_6042A1C0392A414E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6042A1C0392A414E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6042A1C0392A414E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6042A1C0392A414E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6042A1C0392A414E_TICK_OFFSET))(this, a1);
	}
};
