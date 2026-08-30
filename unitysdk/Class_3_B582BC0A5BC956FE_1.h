#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_291F7DA21A504FC4;
class Class_3_8FED9084EF6E3F3C;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B582BC0A5BC956FE_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17CD77F0)
#define CLASS_3_B582BC0A5BC956FE_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17CD78D0)
#define CLASS_3_B582BC0A5BC956FE_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17CD8370)
#define CLASS_3_B582BC0A5BC956FE_1_TICK_OFFSET UNITYSDK_OFFSET(0x17CD83C0)
#define CLASS_3_B582BC0A5BC956FE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD7760)

inline static constexpr unsigned int Class_3_B582BC0A5BC956FE_1_TypeDefinitionIndex = 54108;

class Class_3_B582BC0A5BC956FE_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8FED9084EF6E3F3C*>
{
public:
	::System::Collections::Generic::List_1<::Class_2_291F7DA21A504FC4*>* FABICEFOKHC; // 0x28
	::System::Collections::Generic::List_1<::Class_2_291F7DA21A504FC4*>* BNLAOKGEFLK; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8FED9084EF6E3F3C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8FED9084EF6E3F3C*))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B582BC0A5BC956FE_1_TICK_OFFSET))(this, a1);
	}
};
