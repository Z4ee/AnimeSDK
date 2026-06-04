#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_44EF3BC6A9A1AE8B.h"
#include "unitysdk/Struct_2_C011C4309B1E1D24_1.h"

class Class_1_3F28033F34305C46;
class Class_1_D70A30D666F20D90;
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7929C8904ABF4407_COLLECT_OFFSET UNITYSDK_OFFSET(0xCEB0F60)
#define CLASS_2_7929C8904ABF4407_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEB0F10)
#define CLASS_2_7929C8904ABF4407_FLUSH_OFFSET UNITYSDK_OFFSET(0xCEB12E0)
#define CLASS_2_7929C8904ABF4407_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xCEB1420)
#define CLASS_2_7929C8904ABF4407_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCEB0AE0)
#define CLASS_2_7929C8904ABF4407_METHOD_2_92F493A0D4B9ABBD_OFFSET UNITYSDK_OFFSET(0xCEB0B40)
#define CLASS_2_7929C8904ABF4407_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xCEB0EC0)
#define CLASS_2_7929C8904ABF4407_METHOD_2_CCC6A3002C391211_OFFSET UNITYSDK_OFFSET(0xCEB0C50)
#define CLASS_2_7929C8904ABF4407_METHOD_2_E85078DF9B2A1CB0_OFFSET UNITYSDK_OFFSET(0xCEB0D90)
#define CLASS_2_7929C8904ABF4407_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCEB13E0)
#define CLASS_2_7929C8904ABF4407_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCEB13A0)
#define CLASS_2_7929C8904ABF4407_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xCEB1430)
#define CLASS_2_7929C8904ABF4407__CTOR_OFFSET UNITYSDK_OFFSET(0xCEB0A60)
#define CLASS_2_7929C8904ABF4407___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0xCEB1490)
#define CLASS_2_7929C8904ABF4407___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEB1440)
#define CLASS_2_7929C8904ABF4407___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0xCEB14A0)
#define CLASS_2_7929C8904ABF4407___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCEB14F0)
#define CLASS_2_7929C8904ABF4407___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCEB14B0)

inline static constexpr unsigned int Class_2_7929C8904ABF4407_TypeDefinitionIndex = 66453;

class Class_2_7929C8904ABF4407 : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_C011C4309B1E1D24_1>
{
public:
	::Class_1_D70A30D666F20D90* Field_2_0; // 0x40
	::System::Collections::Generic::List_1<::Struct_2_44EF3BC6A9A1AE8B>* Field_2_1; // 0x48
	::System::Collections::Generic::HashSet_1<::Struct_2_44EF3BC6A9A1AE8B>* Field_2_2; // 0x50
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x58
	::RPG::GameCore::ThreadTaskType Field_2_4; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7929C8904ABF4407__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_92F493A0D4B9ABBD(::Class_1_D70A30D666F20D90* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7929C8904ABF4407_METHOD_2_92F493A0D4B9ABBD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CCC6A3002C391211(::Struct_2_44EF3BC6A9A1AE8B a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_44EF3BC6A9A1AE8B))((::PBYTE)hIl2Cpp + CLASS_2_7929C8904ABF4407_METHOD_2_CCC6A3002C391211_OFFSET))(this, a1);
	}

	::System::Void Method_2_E85078DF9B2A1CB0(::Class_1_3F28033F34305C46* a1, ::Struct_2_44EF3BC6A9A1AE8B& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Struct_2_44EF3BC6A9A1AE8B&))((::PBYTE)hIl2Cpp + CLASS_2_7929C8904ABF4407_METHOD_2_E85078DF9B2A1CB0_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7929C8904ABF4407_DISPOSE_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7929C8904ABF4407_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7929C8904ABF4407_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7929C8904ABF4407_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7929C8904ABF4407_ONDISABLE_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7929C8904ABF4407_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7929C8904ABF4407_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7929C8904ABF4407_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_7929C8904ABF4407_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7929C8904ABF4407___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7929C8904ABF4407___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7929C8904ABF4407___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7929C8904ABF4407___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7929C8904ABF4407___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
