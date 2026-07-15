#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_B026207A8C6DA56A.h"

class Class_1_411C76A6422C8F62;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class ThreadTaskConfig; }

#define CLASS_2_81CCE365F952E97C_COLLECT_OFFSET UNITYSDK_OFFSET(0x15F0A6F0)
#define CLASS_2_81CCE365F952E97C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F0A5E0)
#define CLASS_2_81CCE365F952E97C_FLUSH_OFFSET UNITYSDK_OFFSET(0x15F0A790)
#define CLASS_2_81CCE365F952E97C_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15F0A970)
#define CLASS_2_81CCE365F952E97C_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x15F0A3E0)
#define CLASS_2_81CCE365F952E97C_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x15F0A960)
#define CLASS_2_81CCE365F952E97C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15F0A450)
#define CLASS_2_81CCE365F952E97C_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x15F0A890)
#define CLASS_2_81CCE365F952E97C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15F0A6B0)
#define CLASS_2_81CCE365F952E97C_METHOD_2_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x15F0A540)
#define CLASS_2_81CCE365F952E97C_METHOD_2_F969B68DBC0A635C_OFFSET UNITYSDK_OFFSET(0x15F0A4B0)
#define CLASS_2_81CCE365F952E97C_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15F0A670)
#define CLASS_2_81CCE365F952E97C_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15F0A630)
#define CLASS_2_81CCE365F952E97C_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15F0A980)
#define CLASS_2_81CCE365F952E97C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F0A310)

inline static constexpr unsigned int Class_2_81CCE365F952E97C_TypeDefinitionIndex = 67879;

class Class_2_81CCE365F952E97C : public ::RPG::Client::Multithread::JobThreadTask_1<::Struct_2_B026207A8C6DA56A>
{
public:
	::Class_1_411C76A6422C8F62* Field_2_0; // 0x28
	::RPG::GameCore::AdventureCharacterController* Field_2_1; // 0x30
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x38
	::RPG::GameCore::ThreadTaskType Field_2_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81CCE365F952E97C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F969B68DBC0A635C(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_81CCE365F952E97C_METHOD_2_F969B68DBC0A635C_OFFSET))(this, a1);
	}

	::System::Void Method_2_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81CCE365F952E97C_METHOD_2_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81CCE365F952E97C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81CCE365F952E97C_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81CCE365F952E97C_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81CCE365F952E97C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81CCE365F952E97C_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81CCE365F952E97C_FLUSH_OFFSET))(this);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81CCE365F952E97C_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81CCE365F952E97C_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::Class_1_411C76A6422C8F62* Method_2_24748FC20F375725()
	{
		return ((::Class_1_411C76A6422C8F62*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81CCE365F952E97C_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81CCE365F952E97C_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81CCE365F952E97C_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_81CCE365F952E97C_SET_CONFIG_OFFSET))(this, a1);
	}
};
