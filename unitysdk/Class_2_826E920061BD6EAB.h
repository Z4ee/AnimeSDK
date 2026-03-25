#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_5C05B865B0E3235A_2.h"
#include "unitysdk/Struct_2_984AA94FB23486F9_1.h"
#include "unitysdk/Struct_2_E4C0B765BB81CBBA.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_826E920061BD6EAB_COLLECT_OFFSET UNITYSDK_OFFSET(0x114AF4E0)
#define CLASS_2_826E920061BD6EAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114AF2F0)
#define CLASS_2_826E920061BD6EAB_FLUSH_OFFSET UNITYSDK_OFFSET(0x114AF640)
#define CLASS_2_826E920061BD6EAB_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x114AF7B0)
#define CLASS_2_826E920061BD6EAB_METHOD_2_33503A1ADCBF822D_OFFSET UNITYSDK_OFFSET(0x114AF430)
#define CLASS_2_826E920061BD6EAB_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x114AF230)
#define CLASS_2_826E920061BD6EAB_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x114AF290)
#define CLASS_2_826E920061BD6EAB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x114AF340)
#define CLASS_2_826E920061BD6EAB_METHOD_2_F1BFC2CD2ECE3431_OFFSET UNITYSDK_OFFSET(0x114AF380)
#define CLASS_2_826E920061BD6EAB_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x114AF770)
#define CLASS_2_826E920061BD6EAB_ONENABLE_OFFSET UNITYSDK_OFFSET(0x114AF730)
#define CLASS_2_826E920061BD6EAB_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x114AF7C0)
#define CLASS_2_826E920061BD6EAB__CTOR_OFFSET UNITYSDK_OFFSET(0x114AF030)
#define CLASS_2_826E920061BD6EAB___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0x114AF820)
#define CLASS_2_826E920061BD6EAB___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114AF7D0)
#define CLASS_2_826E920061BD6EAB___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0x114AF830)
#define CLASS_2_826E920061BD6EAB___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x114AF880)
#define CLASS_2_826E920061BD6EAB___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x114AF840)

inline static constexpr unsigned int Class_2_826E920061BD6EAB_TypeDefinitionIndex = 58222;

class Class_2_826E920061BD6EAB : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_E4C0B765BB81CBBA>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x50
	::System::Collections::Generic::List_1<::Struct_2_984AA94FB23486F9_1>* Field_2_0; // 0x58
	::System::Collections::Generic::List_1<::Struct_2_5C05B865B0E3235A_2>* Field_2_1; // 0x60
	::RPG::GameCore::ThreadTaskType Field_2_3; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_826E920061BD6EAB__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_826E920061BD6EAB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_826E920061BD6EAB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_F1BFC2CD2ECE3431(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_826E920061BD6EAB_METHOD_2_F1BFC2CD2ECE3431_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_33503A1ADCBF822D(::System::Collections::Generic::List_1<::Struct_2_5C05B865B0E3235A_2>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_5C05B865B0E3235A_2>*))((::PBYTE)hIl2Cpp + CLASS_2_826E920061BD6EAB_METHOD_2_33503A1ADCBF822D_OFFSET))(this, a1);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_826E920061BD6EAB_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_826E920061BD6EAB_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_826E920061BD6EAB_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_826E920061BD6EAB_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_826E920061BD6EAB_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_826E920061BD6EAB_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_826E920061BD6EAB_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_826E920061BD6EAB_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_826E920061BD6EAB___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_826E920061BD6EAB___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_826E920061BD6EAB___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_826E920061BD6EAB___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_826E920061BD6EAB___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
