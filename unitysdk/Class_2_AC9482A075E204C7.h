#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_8DF138C61E6ABA58.h"
#include "unitysdk/Struct_2_E4045ED9F744D7B4.h"

class Class_1_54715B955DC6C855;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AC9482A075E204C7_COLLECT_OFFSET UNITYSDK_OFFSET(0x92F5230)
#define CLASS_2_AC9482A075E204C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92F5170)
#define CLASS_2_AC9482A075E204C7_FLUSH_OFFSET UNITYSDK_OFFSET(0x92F5290)
#define CLASS_2_AC9482A075E204C7_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x92F53D0)
#define CLASS_2_AC9482A075E204C7_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x92F5110)
#define CLASS_2_AC9482A075E204C7_METHOD_2_6BDA8407EBA9C0B8_OFFSET UNITYSDK_OFFSET(0x92F5370)
#define CLASS_2_AC9482A075E204C7_METHOD_2_73AFA2C42D815B9F_OFFSET UNITYSDK_OFFSET(0x92F51C0)
#define CLASS_2_AC9482A075E204C7_METHOD_2_E631B63295647DB5_OFFSET UNITYSDK_OFFSET(0x92F50C0)
#define CLASS_2_AC9482A075E204C7_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x92F5330)
#define CLASS_2_AC9482A075E204C7_ONENABLE_OFFSET UNITYSDK_OFFSET(0x92F52F0)
#define CLASS_2_AC9482A075E204C7_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x92F53E0)
#define CLASS_2_AC9482A075E204C7__CTOR_OFFSET UNITYSDK_OFFSET(0x92F5010)
#define CLASS_2_AC9482A075E204C7___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0x92F5440)
#define CLASS_2_AC9482A075E204C7___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92F53F0)
#define CLASS_2_AC9482A075E204C7___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0x92F54A0)
#define CLASS_2_AC9482A075E204C7___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x92F5540)
#define CLASS_2_AC9482A075E204C7___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x92F5500)

inline static constexpr unsigned int Class_2_AC9482A075E204C7_TypeDefinitionIndex = 65501;

class Class_2_AC9482A075E204C7 : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_E4045ED9F744D7B4>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x30
	::RPG::GameCore::ThreadTaskType Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_73AFA2C42D815B9F(::RPG::GameCore::AdventureCharacterController* a1, ::Struct_2_8DF138C61E6ABA58& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*, ::Struct_2_8DF138C61E6ABA58&))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_METHOD_2_73AFA2C42D815B9F_OFFSET))(this, a1, a2);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_6BDA8407EBA9C0B8(::System::Collections::Generic::List_1<::Class_1_54715B955DC6C855*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_54715B955DC6C855*>*))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_METHOD_2_6BDA8407EBA9C0B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_E631B63295647DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_METHOD_2_E631B63295647DB5_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC9482A075E204C7___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
