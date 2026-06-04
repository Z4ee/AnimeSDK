#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_5C05B865B0E3235A_2.h"
#include "unitysdk/Struct_2_984AA94FB23486F9_2.h"
#include "unitysdk/Struct_2_E4C0B765BB81CBBA.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E067F907AAEAD5D2_COLLECT_OFFSET UNITYSDK_OFFSET(0xB9F1CC0)
#define CLASS_2_E067F907AAEAD5D2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9F1AA0)
#define CLASS_2_E067F907AAEAD5D2_FLUSH_OFFSET UNITYSDK_OFFSET(0xB9F1E30)
#define CLASS_2_E067F907AAEAD5D2_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB9F2000)
#define CLASS_2_E067F907AAEAD5D2_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xB9F19E0)
#define CLASS_2_E067F907AAEAD5D2_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB9F1A40)
#define CLASS_2_E067F907AAEAD5D2_METHOD_2_C62F007113686C62_OFFSET UNITYSDK_OFFSET(0xB9F1B30)
#define CLASS_2_E067F907AAEAD5D2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB9F1AF0)
#define CLASS_2_E067F907AAEAD5D2_METHOD_2_E960A1DAA7852087_OFFSET UNITYSDK_OFFSET(0xB9F1C40)
#define CLASS_2_E067F907AAEAD5D2_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB9F1FC0)
#define CLASS_2_E067F907AAEAD5D2_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB9F1F80)
#define CLASS_2_E067F907AAEAD5D2_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB9F2010)
#define CLASS_2_E067F907AAEAD5D2__CTOR_OFFSET UNITYSDK_OFFSET(0xB9F17E0)
#define CLASS_2_E067F907AAEAD5D2___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0xB9F2070)
#define CLASS_2_E067F907AAEAD5D2___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9F2020)
#define CLASS_2_E067F907AAEAD5D2___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0xB9F2080)
#define CLASS_2_E067F907AAEAD5D2___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB9F20D0)
#define CLASS_2_E067F907AAEAD5D2___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB9F2090)

inline static constexpr unsigned int Class_2_E067F907AAEAD5D2_TypeDefinitionIndex = 66439;

class Class_2_E067F907AAEAD5D2 : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_E4C0B765BB81CBBA>
{
public:
	::System::Collections::Generic::List_1<::Struct_2_984AA94FB23486F9_2>* Field_2_0; // 0x50
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x58
	::System::Collections::Generic::List_1<::Struct_2_5C05B865B0E3235A_2>* Field_2_2; // 0x60
	::RPG::GameCore::ThreadTaskType Field_2_3; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E067F907AAEAD5D2__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E067F907AAEAD5D2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E067F907AAEAD5D2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C62F007113686C62(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E067F907AAEAD5D2_METHOD_2_C62F007113686C62_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E960A1DAA7852087(::System::Collections::Generic::List_1<::Struct_2_5C05B865B0E3235A_2>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_5C05B865B0E3235A_2>*))((::PBYTE)hIl2Cpp + CLASS_2_E067F907AAEAD5D2_METHOD_2_E960A1DAA7852087_OFFSET))(this, a1);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E067F907AAEAD5D2_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E067F907AAEAD5D2_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E067F907AAEAD5D2_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E067F907AAEAD5D2_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E067F907AAEAD5D2_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E067F907AAEAD5D2_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E067F907AAEAD5D2_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_E067F907AAEAD5D2_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E067F907AAEAD5D2___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E067F907AAEAD5D2___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E067F907AAEAD5D2___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E067F907AAEAD5D2___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E067F907AAEAD5D2___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
