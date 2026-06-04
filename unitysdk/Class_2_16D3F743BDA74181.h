#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_72A48ACB00DC6E2A.h"

namespace RPG::GameCore { class ThreadTaskConfig; }

#define CLASS_2_16D3F743BDA74181_COLLECT_OFFSET UNITYSDK_OFFSET(0xA96CB70)
#define CLASS_2_16D3F743BDA74181_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA96CAF0)
#define CLASS_2_16D3F743BDA74181_FLUSH_OFFSET UNITYSDK_OFFSET(0xA96CC40)
#define CLASS_2_16D3F743BDA74181_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA96CD80)
#define CLASS_2_16D3F743BDA74181_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA96CA90)
#define CLASS_2_16D3F743BDA74181_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA96CB30)
#define CLASS_2_16D3F743BDA74181_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA96CD40)
#define CLASS_2_16D3F743BDA74181_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA96CD00)
#define CLASS_2_16D3F743BDA74181_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA96CD90)
#define CLASS_2_16D3F743BDA74181__CCTOR_OFFSET UNITYSDK_OFFSET(0xA96CDA0)
#define CLASS_2_16D3F743BDA74181__CTOR_OFFSET UNITYSDK_OFFSET(0xA96CA10)
#define CLASS_2_16D3F743BDA74181___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0xA96CDF0)
#define CLASS_2_16D3F743BDA74181___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA96CDB0)
#define CLASS_2_16D3F743BDA74181___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0xA96CE00)
#define CLASS_2_16D3F743BDA74181___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA96CE50)
#define CLASS_2_16D3F743BDA74181___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA96CE10)

inline static constexpr unsigned int Class_2_16D3F743BDA74181_TypeDefinitionIndex = 66460;

class Class_2_16D3F743BDA74181 : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_72A48ACB00DC6E2A>
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_16D3F743BDA74181_TypeDefinitionIndex)->GetStaticField(0x13120);
	}
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x30
	::RPG::GameCore::ThreadTaskType Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16D3F743BDA74181___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
