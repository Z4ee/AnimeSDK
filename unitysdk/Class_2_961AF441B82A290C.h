#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_D523FB777622F603.h"

namespace RPG::GameCore { class ThreadTaskConfig; }

#define CLASS_2_961AF441B82A290C_COLLECT_OFFSET UNITYSDK_OFFSET(0x1A43C1B0)
#define CLASS_2_961AF441B82A290C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A43C130)
#define CLASS_2_961AF441B82A290C_FLUSH_OFFSET UNITYSDK_OFFSET(0x1A43C490)
#define CLASS_2_961AF441B82A290C_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1A43C670)
#define CLASS_2_961AF441B82A290C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A43C0D0)
#define CLASS_2_961AF441B82A290C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A43C170)
#define CLASS_2_961AF441B82A290C_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A43C630)
#define CLASS_2_961AF441B82A290C_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A43C5F0)
#define CLASS_2_961AF441B82A290C_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1A43C680)
#define CLASS_2_961AF441B82A290C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A43C050)

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
