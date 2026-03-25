#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_56FF45D7B2C55655;
class Class_1_8A6989C352B0F0F0;
class Class_1_DE4C6B309308A230;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_25ED8E5635B0767A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1158F110)
#define CLASS_2_25ED8E5635B0767A_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x1158F6D0)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_1626D6FA8E8D11C7_OFFSET UNITYSDK_OFFSET(0x11590380)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1158FC40)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_1FFB392329DBE0D7_OFFSET UNITYSDK_OFFSET(0x11590370)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_2658A1BA84098413_OFFSET UNITYSDK_OFFSET(0x1158F330)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x1158FF10)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_37D4A49951A1616C_OFFSET UNITYSDK_OFFSET(0x115903C0)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_3F3693110F25FD62_OFFSET UNITYSDK_OFFSET(0x1158EF10)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_43141A6EFF873C5B_OFFSET UNITYSDK_OFFSET(0x1158EEA0)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_78F973D910DE3190_OFFSET UNITYSDK_OFFSET(0x1158F060)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_7EBD3E9F2AC9C1C3_OFFSET UNITYSDK_OFFSET(0x1158FD10)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_7F5CA8E7BEEFA729_OFFSET UNITYSDK_OFFSET(0x11590390)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x11590100)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x1158F860)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_A5A370FE36CACDE8_OFFSET UNITYSDK_OFFSET(0x1158FCA0)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_B5C9D094ECB8735E_OFFSET UNITYSDK_OFFSET(0x1158FE10)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_BF7F293AEAA5E93F_OFFSET UNITYSDK_OFFSET(0x115903B0)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_C0688C2E36BAE128_OFFSET UNITYSDK_OFFSET(0x1158FD90)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_D25C89118EA58E36_OFFSET UNITYSDK_OFFSET(0x1158FE80)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_DCCD946018337720_OFFSET UNITYSDK_OFFSET(0x1158F470)
#define CLASS_2_25ED8E5635B0767A_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1158FF00)
#define CLASS_2_25ED8E5635B0767A_TOHLOD_OFFSET UNITYSDK_OFFSET(0x1158EE60)
#define CLASS_2_25ED8E5635B0767A__CTOR_OFFSET UNITYSDK_OFFSET(0x1158ED20)
#define CLASS_2_25ED8E5635B0767A__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x115902C0)
#define CLASS_2_25ED8E5635B0767A__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x11590310)
#define CLASS_2_25ED8E5635B0767A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x115903A0)
#define CLASS_2_25ED8E5635B0767A___IFIXBASEPROXY_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x115903D0)
#define CLASS_2_25ED8E5635B0767A___IFIXBASEPROXY_TOHLOD_OFFSET UNITYSDK_OFFSET(0x11590360)
#define CLASS_2_25ED8E5635B0767A___IFIXBASEPROXY__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x115903E0)
#define CLASS_2_25ED8E5635B0767A___IFIXBASEPROXY__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x11590470)

inline static constexpr unsigned int Class_2_25ED8E5635B0767A_TypeDefinitionIndex = 60463;

class Class_2_25ED8E5635B0767A : public ::Class_1_5B228A4605C15E47
{
public:
	// static const ::System::Single Field_2_9; // 0x0
	::System::Action_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* Field_2_1; // 0x168
	::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_5; // 0x170
	::System::Action_3<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean>* Field_2_2; // 0x178
	::System::Collections::Generic::List_1<::Class_1_8A6989C352B0F0F0*>* Field_2_7; // 0x180
	::System::Action_1<::Class_1_8A6989C352B0F0F0*>* Field_2_3; // 0x188
	::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_4; // 0x190
	::UnityEngine::Vector2 Field_2_8; // 0x198
	::System::Boolean Field_2_6; // 0x1A0
	::System::Boolean Field_2_0; // 0x1A1

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_56FF45D7B2C55655* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_56FF45D7B2C55655*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void ToHLOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_TOHLOD_OFFSET))(this);
	}

	::System::Void Method_2_43141A6EFF873C5B(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_43141A6EFF873C5B_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F3693110F25FD62(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_3F3693110F25FD62_OFFSET))(this, a1);
	}

	::System::Void Method_2_78F973D910DE3190(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_78F973D910DE3190_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_DISPOSE_OFFSET))(this);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_2658A1BA84098413(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_2658A1BA84098413_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DCCD946018337720(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_DCCD946018337720_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetItemLodLevel(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_A5A370FE36CACDE8(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_A5A370FE36CACDE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7EBD3E9F2AC9C1C3(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_7EBD3E9F2AC9C1C3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C0688C2E36BAE128(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_C0688C2E36BAE128_OFFSET))(this, a1);
	}

	::System::Void Method_2_B5C9D094ECB8735E(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_B5C9D094ECB8735E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D25C89118EA58E36(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_D25C89118EA58E36_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_2_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void _RegisterInstanceToCullingSystem(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET))(this, a1);
	}

	::System::Void _UnRegisterInstanceFromCullingSystem(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_ToHLOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A___IFIXBASEPROXY_TOHLOD_OFFSET))(this);
	}

	::System::Void Method_2_1FFB392329DBE0D7(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_1FFB392329DBE0D7_OFFSET))(this, P0);
	}

	::System::Void Method_2_1626D6FA8E8D11C7(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_1626D6FA8E8D11C7_OFFSET))(this, P0);
	}

	::System::Void Method_2_7F5CA8E7BEEFA729(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_7F5CA8E7BEEFA729_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_BF7F293AEAA5E93F(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_BF7F293AEAA5E93F_OFFSET))(this, P0);
	}

	::System::Boolean Method_2_37D4A49951A1616C(::RPG::Client::OpenWorld::StreamingItemData* P0, ::System::Boolean P1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A_METHOD_2_37D4A49951A1616C_OFFSET))(this, P0, P1);
	}

	::System::Int32 __iFixBaseProxy_GetItemLodLevel(::Class_1_3F28033F34305C46* P0, ::Class_1_DE4C6B309308A230* P1, ::RPG::Client::OpenWorld::StreamingItemData* P2, ::RPG::Client::OpenWorld::StreamingItemData* P3, ::System::Int32 P4, ::System::Boolean P5)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A___IFIXBASEPROXY_GETITEMLODLEVEL_OFFSET))(this, P0, P1, P2, P3, P4, P5);
	}

	::System::Void __iFixBaseProxy__RegisterInstanceToCullingSystem(::Class_1_8A6989C352B0F0F0* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A___IFIXBASEPROXY__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__UnRegisterInstanceFromCullingSystem(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_25ED8E5635B0767A___IFIXBASEPROXY__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET))(this, P0);
	}
};
