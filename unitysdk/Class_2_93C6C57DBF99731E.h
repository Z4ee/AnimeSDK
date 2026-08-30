#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_C011C4309B1E1D24.h"
#include "unitysdk/Struct_2_C62A9157F813660C.h"

class Class_1_3F28033F34305C46;
class Class_1_D70A30D666F20D90;
class Class_2_FC978391A642283C;
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_93C6C57DBF99731E_COLLECT_OFFSET UNITYSDK_OFFSET(0x134C0410)
#define CLASS_2_93C6C57DBF99731E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134C02B0)
#define CLASS_2_93C6C57DBF99731E_FLUSH_OFFSET UNITYSDK_OFFSET(0x134C06A0)
#define CLASS_2_93C6C57DBF99731E_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x134C08F0)
#define CLASS_2_93C6C57DBF99731E_METHOD_2_125AC30F7B145735_OFFSET UNITYSDK_OFFSET(0x134BFEB0)
#define CLASS_2_93C6C57DBF99731E_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x134BFB80)
#define CLASS_2_93C6C57DBF99731E_METHOD_2_71D1A6BF100E1B81_OFFSET UNITYSDK_OFFSET(0x134BFBE0)
#define CLASS_2_93C6C57DBF99731E_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x134C0250)
#define CLASS_2_93C6C57DBF99731E_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x134C0200)
#define CLASS_2_93C6C57DBF99731E_METHOD_2_D76710FBC99CCF39_OFFSET UNITYSDK_OFFSET(0x134BFFB0)
#define CLASS_2_93C6C57DBF99731E_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x134C08B0)
#define CLASS_2_93C6C57DBF99731E_ONENABLE_OFFSET UNITYSDK_OFFSET(0x134C0870)
#define CLASS_2_93C6C57DBF99731E_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x134C0900)
#define CLASS_2_93C6C57DBF99731E__CTOR_OFFSET UNITYSDK_OFFSET(0x134BFB00)

inline static constexpr unsigned int Class_2_93C6C57DBF99731E_TypeDefinitionIndex = 71060;

class Class_2_93C6C57DBF99731E : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_C011C4309B1E1D24>
{
public:
	::System::Collections::Generic::HashSet_1<::Struct_2_C62A9157F813660C>* GDPEKBPKAEI; // 0x40
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x48
	::Class_1_D70A30D666F20D90* IMNPNIIDKMF; // 0x50
	::System::Collections::Generic::List_1<::Struct_2_C62A9157F813660C>* PEAGOBBPIEK; // 0x58
	::Class_2_FC978391A642283C* JIMMMLLHKAM; // 0x60
	::System::Int32 NGGLDOPKGLM; // 0x68
	::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93C6C57DBF99731E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_71D1A6BF100E1B81(::Class_1_D70A30D666F20D90* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_93C6C57DBF99731E_METHOD_2_71D1A6BF100E1B81_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_125AC30F7B145735(::Struct_2_C62A9157F813660C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C62A9157F813660C))((::PBYTE)hIl2Cpp + CLASS_2_93C6C57DBF99731E_METHOD_2_125AC30F7B145735_OFFSET))(this, a1);
	}

	::System::Void Method_2_D76710FBC99CCF39(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::Class_1_3F28033F34305C46* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_93C6C57DBF99731E_METHOD_2_D76710FBC99CCF39_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93C6C57DBF99731E_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93C6C57DBF99731E_DISPOSE_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93C6C57DBF99731E_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93C6C57DBF99731E_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93C6C57DBF99731E_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93C6C57DBF99731E_ONDISABLE_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93C6C57DBF99731E_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93C6C57DBF99731E_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93C6C57DBF99731E_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_93C6C57DBF99731E_SET_CONFIG_OFFSET))(this, a1);
	}
};
