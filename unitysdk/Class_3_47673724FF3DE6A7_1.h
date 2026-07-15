#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_29ADE9724E15BDC9;
class Class_3_7BA01DB1D8CEE96E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_47673724FF3DE6A7_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157D7F90)
#define CLASS_3_47673724FF3DE6A7_1_METHOD_3_671B1631A0BA5CC8_OFFSET UNITYSDK_OFFSET(0x157D8100)
#define CLASS_3_47673724FF3DE6A7_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157D7FD0)
#define CLASS_3_47673724FF3DE6A7_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157D8520)
#define CLASS_3_47673724FF3DE6A7_1_TICK_OFFSET UNITYSDK_OFFSET(0x157D8570)
#define CLASS_3_47673724FF3DE6A7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x157D7F60)

inline static constexpr unsigned int Class_3_47673724FF3DE6A7_1_TypeDefinitionIndex = 55591;

class Class_3_47673724FF3DE6A7_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7BA01DB1D8CEE96E*>
{
public:
	::Class_3_7BA01DB1D8CEE96E* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7BA01DB1D8CEE96E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7BA01DB1D8CEE96E*))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_671B1631A0BA5CC8(::Class_1_29ADE9724E15BDC9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_29ADE9724E15BDC9*))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_1_METHOD_3_671B1631A0BA5CC8_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_1_TICK_OFFSET))(this, a1);
	}
};
