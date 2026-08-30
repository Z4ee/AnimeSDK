#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_D523FB777622F603.h"

namespace RPG::GameCore { class ThreadTaskConfig; }

#define CLASS_2_961AF441B82A290C_COLLECT_OFFSET UNITYSDK_OFFSET(0xBAC7FC0)
#define CLASS_2_961AF441B82A290C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAC7F40)
#define CLASS_2_961AF441B82A290C_FLUSH_OFFSET UNITYSDK_OFFSET(0xBAC82A0)
#define CLASS_2_961AF441B82A290C_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBAC8480)
#define CLASS_2_961AF441B82A290C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBAC7EE0)
#define CLASS_2_961AF441B82A290C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBAC7F80)
#define CLASS_2_961AF441B82A290C_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBAC8440)
#define CLASS_2_961AF441B82A290C_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBAC8400)
#define CLASS_2_961AF441B82A290C_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBAC8490)
#define CLASS_2_961AF441B82A290C__CTOR_OFFSET UNITYSDK_OFFSET(0xBAC7E60)

inline static constexpr unsigned int Class_2_961AF441B82A290C_TypeDefinitionIndex = 71073;

class Class_2_961AF441B82A290C : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_D523FB777622F603>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x38
	::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_SET_CONFIG_OFFSET))(this, a1);
	}
};
