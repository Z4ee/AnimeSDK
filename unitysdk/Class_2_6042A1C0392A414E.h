#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByMultiModifierValueSum; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6042A1C0392A414E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8AA6010)
#define CLASS_2_6042A1C0392A414E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8AA6050)
#define CLASS_2_6042A1C0392A414E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8AA6350)
#define CLASS_2_6042A1C0392A414E_TICK_OFFSET UNITYSDK_OFFSET(0x8AA63A0)
#define CLASS_2_6042A1C0392A414E__CTOR_OFFSET UNITYSDK_OFFSET(0x8AA5F40)

inline static constexpr unsigned int Class_2_6042A1C0392A414E_TypeDefinitionIndex = 44409;

class Class_2_6042A1C0392A414E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetDynamicValueByMultiModifierValueSum* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
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
