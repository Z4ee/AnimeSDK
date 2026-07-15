#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_74A38A154652C141;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_299D3DE687C0F414_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B89440)
#define CLASS_2_299D3DE687C0F414_METHOD_2_2A887DFC7A5BB2CB_OFFSET UNITYSDK_OFFSET(0x18B89740)
#define CLASS_2_299D3DE687C0F414_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x18B89930)
#define CLASS_2_299D3DE687C0F414_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18B89570)
#define CLASS_2_299D3DE687C0F414_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18B89520)
#define CLASS_2_299D3DE687C0F414_TICK_OFFSET UNITYSDK_OFFSET(0x18B898C0)
#define CLASS_2_299D3DE687C0F414__CTOR_OFFSET UNITYSDK_OFFSET(0x18B893B0)

inline static constexpr unsigned int Class_2_299D3DE687C0F414_TypeDefinitionIndex = 52454;

class Class_2_299D3DE687C0F414 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::Class_3_74A38A154652C141* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_74A38A154652C141* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_74A38A154652C141*))((::PBYTE)hIl2Cpp + CLASS_2_299D3DE687C0F414__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_299D3DE687C0F414_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_299D3DE687C0F414_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_299D3DE687C0F414_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_299D3DE687C0F414_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_299D3DE687C0F414_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Boolean Method_2_2A887DFC7A5BB2CB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_299D3DE687C0F414_METHOD_2_2A887DFC7A5BB2CB_OFFSET))(this);
	}
};
