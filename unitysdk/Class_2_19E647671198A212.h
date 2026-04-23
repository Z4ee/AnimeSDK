#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_05AEA17C440D9BC5.h"

class Class_1_56FF45D7B2C55655;
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_19E647671198A212_COLLECT_OFFSET UNITYSDK_OFFSET(0xE65DFA0)
#define CLASS_2_19E647671198A212_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE65DF50)
#define CLASS_2_19E647671198A212_FLUSH_OFFSET UNITYSDK_OFFSET(0xE65E0E0)
#define CLASS_2_19E647671198A212_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE65E2E0)
#define CLASS_2_19E647671198A212_METHOD_2_27562DB4C1EE53E3_OFFSET UNITYSDK_OFFSET(0xE65DDA0)
#define CLASS_2_19E647671198A212_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE65DD40)
#define CLASS_2_19E647671198A212_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xE65E290)
#define CLASS_2_19E647671198A212_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE65E250)
#define CLASS_2_19E647671198A212_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE65E210)
#define CLASS_2_19E647671198A212_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE65E2F0)
#define CLASS_2_19E647671198A212__CCTOR_OFFSET UNITYSDK_OFFSET(0xE65E300)
#define CLASS_2_19E647671198A212__CTOR_OFFSET UNITYSDK_OFFSET(0xE65DCC0)
#define CLASS_2_19E647671198A212___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0xE65E370)
#define CLASS_2_19E647671198A212___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE65E320)
#define CLASS_2_19E647671198A212___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0xE65E380)
#define CLASS_2_19E647671198A212___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE65E3D0)
#define CLASS_2_19E647671198A212___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE65E390)

inline static constexpr unsigned int Class_2_19E647671198A212_TypeDefinitionIndex = 65515;

class Class_2_19E647671198A212 : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_05AEA17C440D9BC5>
{
public:
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_19E647671198A212_TypeDefinitionIndex)->GetStaticField(0x35E0);
	}
	static ::System::Int32* StaticGet_Field_2_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_19E647671198A212_TypeDefinitionIndex)->GetStaticField(0x35E4);
	}
	static ::System::Int32* StaticGet_Field_2_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_19E647671198A212_TypeDefinitionIndex)->GetStaticField(0x35E8);
	}
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x40
	::Class_1_56FF45D7B2C55655* Field_2_0; // 0x48
	::RPG::GameCore::ThreadTaskType Field_2_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212__CCTOR_OFFSET))();
	}

	::System::Void Method_2_27562DB4C1EE53E3(::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_56FF45D7B2C55655*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_56FF45D7B2C55655*>*))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_METHOD_2_27562DB4C1EE53E3_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_DISPOSE_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_ONDISABLE_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E647671198A212___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
