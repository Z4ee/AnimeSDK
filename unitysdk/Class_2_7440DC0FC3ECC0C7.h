#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_44EF3BC6A9A1AE8B.h"
#include "unitysdk/Struct_2_C011C4309B1E1D24.h"

class Class_1_3F28033F34305C46;
class Class_1_D70A30D666F20D90;
class Class_2_FC978391A642283C;
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7440DC0FC3ECC0C7_COLLECT_OFFSET UNITYSDK_OFFSET(0x12AA0570)
#define CLASS_2_7440DC0FC3ECC0C7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AA0460)
#define CLASS_2_7440DC0FC3ECC0C7_FLUSH_OFFSET UNITYSDK_OFFSET(0x12AA0800)
#define CLASS_2_7440DC0FC3ECC0C7_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x12AA09F0)
#define CLASS_2_7440DC0FC3ECC0C7_METHOD_2_125AC30F7B145735_OFFSET UNITYSDK_OFFSET(0x12AA00F0)
#define CLASS_2_7440DC0FC3ECC0C7_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12A9FE30)
#define CLASS_2_7440DC0FC3ECC0C7_METHOD_2_480A9644B5367A58_OFFSET UNITYSDK_OFFSET(0x12A9FE90)
#define CLASS_2_7440DC0FC3ECC0C7_METHOD_2_5E4EA6567CD175DA_OFFSET UNITYSDK_OFFSET(0x12AA01F0)
#define CLASS_2_7440DC0FC3ECC0C7_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x12AA0400)
#define CLASS_2_7440DC0FC3ECC0C7_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x12AA03B0)
#define CLASS_2_7440DC0FC3ECC0C7_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12AA09B0)
#define CLASS_2_7440DC0FC3ECC0C7_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12AA0970)
#define CLASS_2_7440DC0FC3ECC0C7_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x12AA0A00)
#define CLASS_2_7440DC0FC3ECC0C7__CTOR_OFFSET UNITYSDK_OFFSET(0x12A9FDB0)
#define CLASS_2_7440DC0FC3ECC0C7___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0x12AA0A20)
#define CLASS_2_7440DC0FC3ECC0C7___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AA0A10)
#define CLASS_2_7440DC0FC3ECC0C7___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0x12AA0A30)
#define CLASS_2_7440DC0FC3ECC0C7___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12AA0A80)
#define CLASS_2_7440DC0FC3ECC0C7___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12AA0A40)

inline static constexpr unsigned int Class_2_7440DC0FC3ECC0C7_TypeDefinitionIndex = 66451;

class Class_2_7440DC0FC3ECC0C7 : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_C011C4309B1E1D24>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x40
	::System::Collections::Generic::HashSet_1<::Struct_2_44EF3BC6A9A1AE8B>* Field_2_1; // 0x48
	::Class_2_FC978391A642283C* Field_2_2; // 0x50
	::Class_1_D70A30D666F20D90* Field_2_3; // 0x58
	::System::Collections::Generic::List_1<::Struct_2_44EF3BC6A9A1AE8B>* Field_2_4; // 0x60
	::RPG::GameCore::ThreadTaskType Field_2_5; // 0x68
	::System::Int32 Field_2_6; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_480A9644B5367A58(::Class_1_D70A30D666F20D90* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7_METHOD_2_480A9644B5367A58_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_125AC30F7B145735(::Struct_2_44EF3BC6A9A1AE8B a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_44EF3BC6A9A1AE8B))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7_METHOD_2_125AC30F7B145735_OFFSET))(this, a1);
	}

	::System::Void Method_2_5E4EA6567CD175DA(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::Class_1_3F28033F34305C46* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7_METHOD_2_5E4EA6567CD175DA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7_DISPOSE_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7_ONDISABLE_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7440DC0FC3ECC0C7___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
