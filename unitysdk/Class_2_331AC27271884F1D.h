#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_331AC27271884F1D_GobackStage.h"

class Class_1_F3391C70DC37088D;
class Class_2_3F4D673D3F90D12C;
class Class_2_469A56953483CA0D;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdvNPCGoback; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_331AC27271884F1D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14AF3340)
#define CLASS_2_331AC27271884F1D_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x14AF3640)
#define CLASS_2_331AC27271884F1D_METHOD_2_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x14AF39B0)
#define CLASS_2_331AC27271884F1D_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x14AF3A10)
#define CLASS_2_331AC27271884F1D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14AF33A0)
#define CLASS_2_331AC27271884F1D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14AF37A0)
#define CLASS_2_331AC27271884F1D_TICK_OFFSET UNITYSDK_OFFSET(0x14AF38F0)
#define CLASS_2_331AC27271884F1D__CTOR_OFFSET UNITYSDK_OFFSET(0x14AF2CE0)

inline static constexpr unsigned int Class_2_331AC27271884F1D_TypeDefinitionIndex = 50037;

class Class_2_331AC27271884F1D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_2_0; // 0x18
	::RPG::GameCore::NPCComponent* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::Class_2_A0580152EB393340* Field_2_3; // 0x30
	::RPG::GameCore::AdvNPCGoback* Field_2_4; // 0x38
	::Class_1_F3391C70DC37088D* Field_2_5; // 0x40
	::Class_1_F3391C70DC37088D* Field_2_6; // 0x48
	::Class_2_3F4D673D3F90D12C* Field_2_7; // 0x50
	::Class_2_469A56953483CA0D* Field_2_8; // 0x58
	::Class_2_331AC27271884F1D_GobackStage Field_2_9; // 0x60

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCGoback* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCGoback*))((::PBYTE)hIl2Cpp + CLASS_2_331AC27271884F1D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_331AC27271884F1D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_331AC27271884F1D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_331AC27271884F1D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_331AC27271884F1D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_331AC27271884F1D_METHOD_2_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Void Method_2_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_331AC27271884F1D_METHOD_2_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_331AC27271884F1D_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}
};
