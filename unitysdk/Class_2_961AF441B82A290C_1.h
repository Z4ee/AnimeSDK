#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_29A08CF84D71E600.h"

namespace RPG::GameCore { class ThreadTaskConfig; }

#define CLASS_2_961AF441B82A290C_1_COLLECT_OFFSET UNITYSDK_OFFSET(0x1872EF00)
#define CLASS_2_961AF441B82A290C_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1872EE70)
#define CLASS_2_961AF441B82A290C_1_FLUSH_OFFSET UNITYSDK_OFFSET(0x1872EF80)
#define CLASS_2_961AF441B82A290C_1_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1872F060)
#define CLASS_2_961AF441B82A290C_1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1872EE10)
#define CLASS_2_961AF441B82A290C_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1872EDB0)
#define CLASS_2_961AF441B82A290C_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1872EEC0)
#define CLASS_2_961AF441B82A290C_1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1872F020)
#define CLASS_2_961AF441B82A290C_1_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1872EFE0)
#define CLASS_2_961AF441B82A290C_1_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1872F070)
#define CLASS_2_961AF441B82A290C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1872ED00)

inline static constexpr unsigned int Class_2_961AF441B82A290C_1_TypeDefinitionIndex = 67873;

class Class_2_961AF441B82A290C_1 : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_29A08CF84D71E600>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x38
	::RPG::GameCore::ThreadTaskType Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_1__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_1_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_1_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_1_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_1_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_1_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_1_SET_CONFIG_OFFSET))(this, a1);
	}
};
