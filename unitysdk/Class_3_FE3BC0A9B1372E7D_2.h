#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_611A13B01AEF3C43;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3BC0A9B1372E7D_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x160D4490)
#define CLASS_3_FE3BC0A9B1372E7D_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x160D4170)
#define CLASS_3_FE3BC0A9B1372E7D_2__CTOR_OFFSET UNITYSDK_OFFSET(0x160D40F0)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_2_TypeDefinitionIndex = 52925;

class Class_3_FE3BC0A9B1372E7D_2 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_611A13B01AEF3C43*>
{
public:
	::Class_2_5436AF4270279182* NFJGMKPFPOC; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_611A13B01AEF3C43* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_611A13B01AEF3C43*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_2_DISPOSE_OFFSET))(this);
	}
};
