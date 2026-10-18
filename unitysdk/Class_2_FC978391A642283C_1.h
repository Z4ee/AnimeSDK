#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_5D35411E06013B23.h"

class Class_2_7F4574E2AA5F0809;
namespace RPG::GameCore { class ThreadTaskConfig; }

#define CLASS_2_FC978391A642283C_1_COLLECT_OFFSET UNITYSDK_OFFSET(0xE240C20)
#define CLASS_2_FC978391A642283C_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE240BA0)
#define CLASS_2_FC978391A642283C_1_FLUSH_OFFSET UNITYSDK_OFFSET(0xE240C60)
#define CLASS_2_FC978391A642283C_1_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE240DB0)
#define CLASS_2_FC978391A642283C_1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE240A40)
#define CLASS_2_FC978391A642283C_1_METHOD_2_A4A798E0E81B27AE_OFFSET UNITYSDK_OFFSET(0xE240AA0)
#define CLASS_2_FC978391A642283C_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE240BE0)
#define CLASS_2_FC978391A642283C_1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE240D70)
#define CLASS_2_FC978391A642283C_1_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE240D30)
#define CLASS_2_FC978391A642283C_1_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE240DC0)
#define CLASS_2_FC978391A642283C_1__CTOR_OFFSET UNITYSDK_OFFSET(0xE2409D0)

inline static constexpr unsigned int Class_2_FC978391A642283C_1_TypeDefinitionIndex = 71098;

class Class_2_FC978391A642283C_1 : public ::RPG::Client::Multithread::JobThreadTask_1<::Struct_2_5D35411E06013B23>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x28
	::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A4A798E0E81B27AE(::Class_2_7F4574E2AA5F0809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7F4574E2AA5F0809*))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_1_METHOD_2_A4A798E0E81B27AE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_1_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_1_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_1_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_1_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_1_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_FC978391A642283C_1_SET_CONFIG_OFFSET))(this, a1);
	}
};
