#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_8BE3C66A8F21F652.h"
#include "unitysdk/Struct_2_C011C4309B1E1D24.h"

class Class_1_3F28033F34305C46;
class Class_1_56FF45D7B2C55655;
class Class_2_3961036B853D1CE1;
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4B679B755430DC97_COLLECT_OFFSET UNITYSDK_OFFSET(0x10A2C710)
#define CLASS_2_4B679B755430DC97_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A2C600)
#define CLASS_2_4B679B755430DC97_FLUSH_OFFSET UNITYSDK_OFFSET(0x10A2C900)
#define CLASS_2_4B679B755430DC97_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x10A2CB00)
#define CLASS_2_4B679B755430DC97_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10A2BEB0)
#define CLASS_2_4B679B755430DC97_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x10A2C5A0)
#define CLASS_2_4B679B755430DC97_METHOD_2_885BDF68059CF9BA_OFFSET UNITYSDK_OFFSET(0x10A2BF10)
#define CLASS_2_4B679B755430DC97_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x10A2C550)
#define CLASS_2_4B679B755430DC97_METHOD_2_F26CE4FC4BEDB222_OFFSET UNITYSDK_OFFSET(0x10A2C180)
#define CLASS_2_4B679B755430DC97_METHOD_2_FDB81FB2032D3D08_OFFSET UNITYSDK_OFFSET(0x10A2C230)
#define CLASS_2_4B679B755430DC97_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10A2CAC0)
#define CLASS_2_4B679B755430DC97_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10A2CA80)
#define CLASS_2_4B679B755430DC97_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x10A2CB10)
#define CLASS_2_4B679B755430DC97__CTOR_OFFSET UNITYSDK_OFFSET(0x10A2BE30)
#define CLASS_2_4B679B755430DC97___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0x10A2CB30)
#define CLASS_2_4B679B755430DC97___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A2CB20)
#define CLASS_2_4B679B755430DC97___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0x10A2CB40)
#define CLASS_2_4B679B755430DC97___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10A2CB90)
#define CLASS_2_4B679B755430DC97___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10A2CB50)

inline static constexpr unsigned int Class_2_4B679B755430DC97_TypeDefinitionIndex = 58234;

class Class_2_4B679B755430DC97 : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_C011C4309B1E1D24>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x40
	::System::Collections::Generic::List_1<::Struct_2_8BE3C66A8F21F652>* Field_2_0; // 0x48
	::Class_2_3961036B853D1CE1* Field_2_2; // 0x50
	::System::Collections::Generic::HashSet_1<::Struct_2_8BE3C66A8F21F652>* Field_2_1; // 0x58
	::Class_1_56FF45D7B2C55655* Field_2_4; // 0x60
	::RPG::GameCore::ThreadTaskType Field_2_6; // 0x68
	::System::Int32 Field_2_3; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_885BDF68059CF9BA(::Class_1_56FF45D7B2C55655* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97_METHOD_2_885BDF68059CF9BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F26CE4FC4BEDB222(::Struct_2_8BE3C66A8F21F652 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_8BE3C66A8F21F652))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97_METHOD_2_F26CE4FC4BEDB222_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDB81FB2032D3D08(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::Class_1_3F28033F34305C46* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97_METHOD_2_FDB81FB2032D3D08_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97_DISPOSE_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97_ONDISABLE_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B679B755430DC97___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
