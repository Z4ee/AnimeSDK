#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_153BE034A1108AC0.h"

namespace RPG::Client::CityCarFlow { class MonoCityCarConfigure; }
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace UnityEngine { class Object; }

#define CLASS_2_7B67FF624B0BA4C7_COLLECT_OFFSET UNITYSDK_OFFSET(0x16E95BA0)
#define CLASS_2_7B67FF624B0BA4C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E95B10)
#define CLASS_2_7B67FF624B0BA4C7_FLUSH_OFFSET UNITYSDK_OFFSET(0x16E95BE0)
#define CLASS_2_7B67FF624B0BA4C7_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x16E95CA0)
#define CLASS_2_7B67FF624B0BA4C7_METHOD_2_3167F7BC6D335213_OFFSET UNITYSDK_OFFSET(0x16E95A70)
#define CLASS_2_7B67FF624B0BA4C7_METHOD_2_3451BB81C2284A77_OFFSET UNITYSDK_OFFSET(0x16E95750)
#define CLASS_2_7B67FF624B0BA4C7_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16E956F0)
#define CLASS_2_7B67FF624B0BA4C7_METHOD_2_B3C3FE20F7F01305_OFFSET UNITYSDK_OFFSET(0x16E95910)
#define CLASS_2_7B67FF624B0BA4C7_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16E95690)
#define CLASS_2_7B67FF624B0BA4C7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16E95B60)
#define CLASS_2_7B67FF624B0BA4C7_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16E95C60)
#define CLASS_2_7B67FF624B0BA4C7_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16E95C20)
#define CLASS_2_7B67FF624B0BA4C7_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x16E95CB0)
#define CLASS_2_7B67FF624B0BA4C7__CTOR_OFFSET UNITYSDK_OFFSET(0x16E955D0)

inline static constexpr unsigned int Class_2_7B67FF624B0BA4C7_TypeDefinitionIndex = 71043;

class Class_2_7B67FF624B0BA4C7 : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_153BE034A1108AC0>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x38
	::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B67FF624B0BA4C7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_3451BB81C2284A77(::RPG::Client::CityCarFlow::MonoCityCarConfigure* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CityCarFlow::MonoCityCarConfigure*))((::PBYTE)hIl2Cpp + CLASS_2_7B67FF624B0BA4C7_METHOD_2_3451BB81C2284A77_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3C3FE20F7F01305(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7B67FF624B0BA4C7_METHOD_2_B3C3FE20F7F01305_OFFSET))(this, a1);
	}

	::System::Void Method_2_3167F7BC6D335213(::UnityEngine::Object* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7B67FF624B0BA4C7_METHOD_2_3167F7BC6D335213_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B67FF624B0BA4C7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B67FF624B0BA4C7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B67FF624B0BA4C7_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B67FF624B0BA4C7_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B67FF624B0BA4C7_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B67FF624B0BA4C7_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B67FF624B0BA4C7_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B67FF624B0BA4C7_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B67FF624B0BA4C7_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_7B67FF624B0BA4C7_SET_CONFIG_OFFSET))(this, a1);
	}
};
