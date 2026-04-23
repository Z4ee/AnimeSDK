#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_5D35411E06013B23.h"

class Class_2_7F4574E2AA5F0809;
namespace RPG::GameCore { class ThreadTaskConfig; }

#define CLASS_2_8B3E44A52CD80E24_COLLECT_OFFSET UNITYSDK_OFFSET(0xA2D9F80)
#define CLASS_2_8B3E44A52CD80E24_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2D9F00)
#define CLASS_2_8B3E44A52CD80E24_FLUSH_OFFSET UNITYSDK_OFFSET(0xA2D9FC0)
#define CLASS_2_8B3E44A52CD80E24_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA2DA0A0)
#define CLASS_2_8B3E44A52CD80E24_METHOD_2_01953D7882459DEC_OFFSET UNITYSDK_OFFSET(0xA2D9E70)
#define CLASS_2_8B3E44A52CD80E24_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA2D9E10)
#define CLASS_2_8B3E44A52CD80E24_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA2D9F40)
#define CLASS_2_8B3E44A52CD80E24_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA2DA060)
#define CLASS_2_8B3E44A52CD80E24_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA2DA020)
#define CLASS_2_8B3E44A52CD80E24_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA2DA0B0)
#define CLASS_2_8B3E44A52CD80E24__CTOR_OFFSET UNITYSDK_OFFSET(0xA2D9DA0)
#define CLASS_2_8B3E44A52CD80E24___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0xA2DA100)
#define CLASS_2_8B3E44A52CD80E24___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2DA0C0)
#define CLASS_2_8B3E44A52CD80E24___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0xA2DA140)
#define CLASS_2_8B3E44A52CD80E24___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA2DA1E0)
#define CLASS_2_8B3E44A52CD80E24___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA2DA1A0)

inline static constexpr unsigned int Class_2_8B3E44A52CD80E24_TypeDefinitionIndex = 65527;

class Class_2_8B3E44A52CD80E24 : public ::RPG::Client::Multithread::JobThreadTask_1<::Struct_2_5D35411E06013B23>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x28
	::RPG::GameCore::ThreadTaskType Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3E44A52CD80E24__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_01953D7882459DEC(::Class_2_7F4574E2AA5F0809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7F4574E2AA5F0809*))((::PBYTE)hIl2Cpp + CLASS_2_8B3E44A52CD80E24_METHOD_2_01953D7882459DEC_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3E44A52CD80E24_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3E44A52CD80E24_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3E44A52CD80E24_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3E44A52CD80E24_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3E44A52CD80E24_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3E44A52CD80E24_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3E44A52CD80E24_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3E44A52CD80E24_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_8B3E44A52CD80E24_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3E44A52CD80E24___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3E44A52CD80E24___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3E44A52CD80E24___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3E44A52CD80E24___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B3E44A52CD80E24___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
