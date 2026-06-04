#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_A9180AA7F443378D.h"

class Class_1_D70A30D666F20D90;
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_7A7E15803BB83F7A_COLLECT_OFFSET UNITYSDK_OFFSET(0xA4DA0D0)
#define CLASS_2_7A7E15803BB83F7A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4DA080)
#define CLASS_2_7A7E15803BB83F7A_FLUSH_OFFSET UNITYSDK_OFFSET(0xA4DA210)
#define CLASS_2_7A7E15803BB83F7A_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA4DA410)
#define CLASS_2_7A7E15803BB83F7A_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA4D9E70)
#define CLASS_2_7A7E15803BB83F7A_METHOD_2_81FB757B011A8054_OFFSET UNITYSDK_OFFSET(0xA4D9ED0)
#define CLASS_2_7A7E15803BB83F7A_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xA4DA3C0)
#define CLASS_2_7A7E15803BB83F7A_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA4DA380)
#define CLASS_2_7A7E15803BB83F7A_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA4DA340)
#define CLASS_2_7A7E15803BB83F7A_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA4DA420)
#define CLASS_2_7A7E15803BB83F7A__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4DA430)
#define CLASS_2_7A7E15803BB83F7A__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D9DF0)
#define CLASS_2_7A7E15803BB83F7A___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0xA4DA4A0)
#define CLASS_2_7A7E15803BB83F7A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4DA450)
#define CLASS_2_7A7E15803BB83F7A___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0xA4DA4B0)
#define CLASS_2_7A7E15803BB83F7A___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA4DA500)
#define CLASS_2_7A7E15803BB83F7A___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA4DA4C0)

inline static constexpr unsigned int Class_2_7A7E15803BB83F7A_TypeDefinitionIndex = 66445;

class Class_2_7A7E15803BB83F7A : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_A9180AA7F443378D>
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7A7E15803BB83F7A_TypeDefinitionIndex)->GetStaticField(0x11C60);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7A7E15803BB83F7A_TypeDefinitionIndex)->GetStaticField(0x11C64);
	}
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7A7E15803BB83F7A_TypeDefinitionIndex)->GetStaticField(0x11C68);
	}
	::Class_1_D70A30D666F20D90* Field_2_3; // 0x40
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x48
	::RPG::GameCore::ThreadTaskType Field_2_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A__CCTOR_OFFSET))();
	}

	::System::Void Method_2_81FB757B011A8054(::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_D70A30D666F20D90*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_D70A30D666F20D90*>*))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_METHOD_2_81FB757B011A8054_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_DISPOSE_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_ONDISABLE_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A7E15803BB83F7A___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
