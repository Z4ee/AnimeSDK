#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_5D1EBFEDD35C45FC_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0xACAD130)
#define CLASS_2_5D1EBFEDD35C45FC_METHOD_2_2658A1BA84098413_OFFSET UNITYSDK_OFFSET(0xACACF70)
#define CLASS_2_5D1EBFEDD35C45FC_METHOD_2_37F4556F1574C3C9_OFFSET UNITYSDK_OFFSET(0xACAD0C0)
#define CLASS_2_5D1EBFEDD35C45FC_METHOD_2_76FB0C4ED730F58B_OFFSET UNITYSDK_OFFSET(0xACAD260)
#define CLASS_2_5D1EBFEDD35C45FC_METHOD_2_C8980ADF7BF59F51_OFFSET UNITYSDK_OFFSET(0xACAD270)
#define CLASS_2_5D1EBFEDD35C45FC__CTOR_OFFSET UNITYSDK_OFFSET(0xACACF10)
#define CLASS_2_5D1EBFEDD35C45FC__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0xACAD1C0)
#define CLASS_2_5D1EBFEDD35C45FC__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0xACAD210)
#define CLASS_2_5D1EBFEDD35C45FC___IFIXBASEPROXY_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0xACAD280)
#define CLASS_2_5D1EBFEDD35C45FC___IFIXBASEPROXY__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0xACAD2B0)
#define CLASS_2_5D1EBFEDD35C45FC___IFIXBASEPROXY__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0xACAD340)

inline static constexpr unsigned int Class_2_5D1EBFEDD35C45FC_TypeDefinitionIndex = 68914;

class Class_2_5D1EBFEDD35C45FC : public ::Class_1_5B228A4605C15E47
{
public:
	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_D70A30D666F20D90* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_D70A30D666F20D90*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_5D1EBFEDD35C45FC__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_2658A1BA84098413(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_5D1EBFEDD35C45FC_METHOD_2_2658A1BA84098413_OFFSET))(this, a1);
	}

	::System::Void Method_2_37F4556F1574C3C9(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_5D1EBFEDD35C45FC_METHOD_2_37F4556F1574C3C9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_5D1EBFEDD35C45FC_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _RegisterInstanceToCullingSystem(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_5D1EBFEDD35C45FC__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET))(this, a1);
	}

	::System::Void _UnRegisterInstanceFromCullingSystem(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_5D1EBFEDD35C45FC__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET))(this, a1);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_76FB0C4ED730F58B(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_5D1EBFEDD35C45FC_METHOD_2_76FB0C4ED730F58B_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8980ADF7BF59F51(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_5D1EBFEDD35C45FC_METHOD_2_C8980ADF7BF59F51_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void __iFixBaseProxy_CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_5D1EBFEDD35C45FC___IFIXBASEPROXY_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void __iFixBaseProxy__RegisterInstanceToCullingSystem(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_5D1EBFEDD35C45FC___IFIXBASEPROXY__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__UnRegisterInstanceFromCullingSystem(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_5D1EBFEDD35C45FC___IFIXBASEPROXY__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET))(this, a1);
	}
};
