#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_8BE3C66A8F21F652.h"
#include "unitysdk/Struct_2_C011C4309B1E1D24_1.h"

class Class_1_3F28033F34305C46;
class Class_1_56FF45D7B2C55655;
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_005632CBEA145D5B_COLLECT_OFFSET UNITYSDK_OFFSET(0x111E6460)
#define CLASS_2_005632CBEA145D5B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111E6410)
#define CLASS_2_005632CBEA145D5B_FLUSH_OFFSET UNITYSDK_OFFSET(0x111E6830)
#define CLASS_2_005632CBEA145D5B_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x111E6970)
#define CLASS_2_005632CBEA145D5B_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x111E5ED0)
#define CLASS_2_005632CBEA145D5B_METHOD_2_A1D2E76B2480061C_OFFSET UNITYSDK_OFFSET(0x111E6190)
#define CLASS_2_005632CBEA145D5B_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x111E63C0)
#define CLASS_2_005632CBEA145D5B_METHOD_2_ACD0B8513C9DEAD9_OFFSET UNITYSDK_OFFSET(0x111E5F30)
#define CLASS_2_005632CBEA145D5B_METHOD_2_F289A5A170401D6B_OFFSET UNITYSDK_OFFSET(0x111E60B0)
#define CLASS_2_005632CBEA145D5B_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x111E6930)
#define CLASS_2_005632CBEA145D5B_ONENABLE_OFFSET UNITYSDK_OFFSET(0x111E68F0)
#define CLASS_2_005632CBEA145D5B_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x111E6980)
#define CLASS_2_005632CBEA145D5B__CTOR_OFFSET UNITYSDK_OFFSET(0x111E5E50)
#define CLASS_2_005632CBEA145D5B___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0x111E69E0)
#define CLASS_2_005632CBEA145D5B___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111E6990)
#define CLASS_2_005632CBEA145D5B___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0x111E69F0)
#define CLASS_2_005632CBEA145D5B___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x111E6AF0)
#define CLASS_2_005632CBEA145D5B___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x111E6AB0)

inline static constexpr unsigned int Class_2_005632CBEA145D5B_TypeDefinitionIndex = 58236;

class Class_2_005632CBEA145D5B : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_C011C4309B1E1D24_1>
{
public:
	::Class_1_56FF45D7B2C55655* Field_2_2; // 0x40
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x48
	::System::Collections::Generic::List_1<::Struct_2_8BE3C66A8F21F652>* Field_2_0; // 0x50
	::System::Collections::Generic::HashSet_1<::Struct_2_8BE3C66A8F21F652>* Field_2_1; // 0x58
	::RPG::GameCore::ThreadTaskType Field_2_4; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005632CBEA145D5B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ACD0B8513C9DEAD9(::Class_1_56FF45D7B2C55655* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_005632CBEA145D5B_METHOD_2_ACD0B8513C9DEAD9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F289A5A170401D6B(::Struct_2_8BE3C66A8F21F652 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_8BE3C66A8F21F652))((::PBYTE)hIl2Cpp + CLASS_2_005632CBEA145D5B_METHOD_2_F289A5A170401D6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1D2E76B2480061C(::Class_1_3F28033F34305C46* a1, ::Struct_2_8BE3C66A8F21F652& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Struct_2_8BE3C66A8F21F652&))((::PBYTE)hIl2Cpp + CLASS_2_005632CBEA145D5B_METHOD_2_A1D2E76B2480061C_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005632CBEA145D5B_DISPOSE_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005632CBEA145D5B_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005632CBEA145D5B_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005632CBEA145D5B_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005632CBEA145D5B_ONDISABLE_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005632CBEA145D5B_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005632CBEA145D5B_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005632CBEA145D5B_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_005632CBEA145D5B_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005632CBEA145D5B___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005632CBEA145D5B___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005632CBEA145D5B___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005632CBEA145D5B___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_005632CBEA145D5B___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
