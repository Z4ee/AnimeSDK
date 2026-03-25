#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_D7A1ADCA41D6F234.h"

namespace RPG::GameCore { class ThreadTaskConfig; }

#define CLASS_2_98A98524861813CA_COLLECT_OFFSET UNITYSDK_OFFSET(0xB8ACD70)
#define CLASS_2_98A98524861813CA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8ACCF0)
#define CLASS_2_98A98524861813CA_FLUSH_OFFSET UNITYSDK_OFFSET(0xB8ACE40)
#define CLASS_2_98A98524861813CA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB8ACF80)
#define CLASS_2_98A98524861813CA_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB8ACC90)
#define CLASS_2_98A98524861813CA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB8ACD30)
#define CLASS_2_98A98524861813CA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB8ACF40)
#define CLASS_2_98A98524861813CA_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB8ACF00)
#define CLASS_2_98A98524861813CA_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB8ACF90)
#define CLASS_2_98A98524861813CA__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8ACFA0)
#define CLASS_2_98A98524861813CA__CTOR_OFFSET UNITYSDK_OFFSET(0xB8ACC10)
#define CLASS_2_98A98524861813CA___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0xB8ACFF0)
#define CLASS_2_98A98524861813CA___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8ACFB0)
#define CLASS_2_98A98524861813CA___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0xB8AD000)
#define CLASS_2_98A98524861813CA___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB8AD050)
#define CLASS_2_98A98524861813CA___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB8AD010)

inline static constexpr unsigned int Class_2_98A98524861813CA_TypeDefinitionIndex = 58243;

class Class_2_98A98524861813CA : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_D7A1ADCA41D6F234>
{
public:
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_98A98524861813CA_TypeDefinitionIndex)->GetStaticField(0xF720);
	}
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x30
	::RPG::GameCore::ThreadTaskType Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A98524861813CA___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
