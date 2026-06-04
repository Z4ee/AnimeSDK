#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphAimUnionNodeType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerLogicOperator.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_83665B095F1535B5_22;
class Class_1_87EAC1A8F0E1AE21;
class Class_1_EDE9079B7B0FAB9F;
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_859C8B90384D9B45_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C2F4F0)
#define CLASS_1_859C8B90384D9B45_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x13C31430)
#define CLASS_1_859C8B90384D9B45_GET_ISINRANGECACHE_OFFSET UNITYSDK_OFFSET(0x13C31410)
#define CLASS_1_859C8B90384D9B45_GET_ISVISIBLECACHE_OFFSET UNITYSDK_OFFSET(0x13C313F0)
#define CLASS_1_859C8B90384D9B45_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x13C313D0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_014C324351F8FF79_OFFSET UNITYSDK_OFFSET(0x13C310B0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_03E4D29DEA69355E_OFFSET UNITYSDK_OFFSET(0x13C301E0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x13C2FEC0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_1DC66375F15E73A5_OFFSET UNITYSDK_OFFSET(0x13C30120)
#define CLASS_1_859C8B90384D9B45_METHOD_1_29F25F8149104FAC_OFFSET UNITYSDK_OFFSET(0x13C30B20)
#define CLASS_1_859C8B90384D9B45_METHOD_1_31C534C262488ADB_OFFSET UNITYSDK_OFFSET(0x13C2F470)
#define CLASS_1_859C8B90384D9B45_METHOD_1_3F07804D8892197E_OFFSET UNITYSDK_OFFSET(0x13C30D80)
#define CLASS_1_859C8B90384D9B45_METHOD_1_4CF27C5B348D1667_OFFSET UNITYSDK_OFFSET(0x13C307A0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_8249CBC66AA43E88_OFFSET UNITYSDK_OFFSET(0x13C30F80)
#define CLASS_1_859C8B90384D9B45_METHOD_1_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x13C2F820)
#define CLASS_1_859C8B90384D9B45_METHOD_1_940C476FC6F87F12_OFFSET UNITYSDK_OFFSET(0x13C30E10)
#define CLASS_1_859C8B90384D9B45_METHOD_1_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x13C30CE0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_A87307C3DF83DEC4_OFFSET UNITYSDK_OFFSET(0x13C302B0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x13C30C40)
#define CLASS_1_859C8B90384D9B45_METHOD_1_AD40EB57DF57A35E_OFFSET UNITYSDK_OFFSET(0x13C308B0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_B72D11B1E2A0052D_OFFSET UNITYSDK_OFFSET(0x13C2F6C0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_B731FA418B4405BD_OFFSET UNITYSDK_OFFSET(0x13C2F900)
#define CLASS_1_859C8B90384D9B45_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x13C2FFB0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_EAA9473F5CD92E22_OFFSET UNITYSDK_OFFSET(0x13C303C0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_FEB3B4A14C149D1C_OFFSET UNITYSDK_OFFSET(0x13C2FA80)
#define CLASS_1_859C8B90384D9B45_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x13C31440)
#define CLASS_1_859C8B90384D9B45_SET_ISINRANGECACHE_OFFSET UNITYSDK_OFFSET(0x13C31420)
#define CLASS_1_859C8B90384D9B45_SET_ISVISIBLECACHE_OFFSET UNITYSDK_OFFSET(0x13C31400)
#define CLASS_1_859C8B90384D9B45_SET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x13C313E0)
#define CLASS_1_859C8B90384D9B45__CTOR_OFFSET UNITYSDK_OFFSET(0x13C2F420)

inline static constexpr unsigned int Class_1_859C8B90384D9B45_TypeDefinitionIndex = 64905;

class Class_1_859C8B90384D9B45 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_859C8B90384D9B45*>* Field_1_0; // 0x10
	::RPG::GameCore::TaskContext* Field_1_1; // 0x18
	::RPG::GameCore::PhotoGraphAimContainerConfig* _Config_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::Class_1_EDE9079B7B0FAB9F*>* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::RPG::GameCore::PhotoGraphAimContainerLogicOperator Field_1_6; // 0x3C
	::System::Int32 Field_1_7; // 0x40
	::RPG::Client::PhotoGraphAimUnionNodeType _NodeType_k__BackingField; // 0x44
	::System::Int32 Field_1_9; // 0x48
	::System::Boolean Field_1_10; // 0x4C
	::System::Boolean _IsInRangeCache_k__BackingField; // 0x4D
	::System::Boolean _IsVisibleCache_k__BackingField; // 0x4E
	::System::Int32 Field_1_13; // 0x50
	::System::Int32 Field_1_14; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_31C534C262488ADB(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_31C534C262488ADB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_B72D11B1E2A0052D(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_B72D11B1E2A0052D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8F059A365E90744C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_8F059A365E90744C_OFFSET))(this);
	}

	::System::Boolean Method_1_B731FA418B4405BD(::RPG::GameCore::PhotoGraphTargetSize* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_B731FA418B4405BD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FEB3B4A14C149D1C(::Class_1_EDE9079B7B0FAB9F* a1, ::RPG::GameCore::PhotoGraphTargetSize* a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EDE9079B7B0FAB9F*, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_FEB3B4A14C149D1C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Boolean Method_1_DE45EA3A177BC33B(::Class_1_EDE9079B7B0FAB9F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EDE9079B7B0FAB9F*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_DE45EA3A177BC33B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_1DC66375F15E73A5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_1DC66375F15E73A5_OFFSET))(this);
	}

	::System::Void Method_1_A87307C3DF83DEC4(::UnityEngine::Vector3 a1, ::Class_1_87EAC1A8F0E1AE21* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Class_1_87EAC1A8F0E1AE21*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_A87307C3DF83DEC4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EAA9473F5CD92E22(::UnityEngine::Vector3 a1, ::Class_1_87EAC1A8F0E1AE21* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Class_1_87EAC1A8F0E1AE21*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_EAA9473F5CD92E22_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_03E4D29DEA69355E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_03E4D29DEA69355E_OFFSET))(this);
	}

	::System::Int32 Method_1_AD40EB57DF57A35E(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::Int32 a2, ::RPG::GameCore::PhotoGraphAimIdentifyType a3, ::Class_1_83665B095F1535B5_22* a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::Int32, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::Class_1_83665B095F1535B5_22*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_AD40EB57DF57A35E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_29F25F8149104FAC(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::Int32 a2, ::RPG::GameCore::PhotoGraphAimIdentifyType a3, ::Class_1_83665B095F1535B5_22* a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::Int32, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::Class_1_83665B095F1535B5_22*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_29F25F8149104FAC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Boolean Method_1_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_9CA35E5BF1A50E77_OFFSET))(this);
	}

	::System::Void Method_1_3F07804D8892197E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_3F07804D8892197E_OFFSET))(this, a1);
	}

	::System::Void Method_1_940C476FC6F87F12(::RPG::GameCore::GameEntity* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_940C476FC6F87F12_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8249CBC66AA43E88(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_8249CBC66AA43E88_OFFSET))(this, a1);
	}

	::System::Void Method_1_014C324351F8FF79(::RPG::GameCore::GameEntity* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_014C324351F8FF79_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4CF27C5B348D1667(::System::Single a1, ::RPG::Client::TextID& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_4CF27C5B348D1667_OFFSET))(this, a1, a2);
	}

	::RPG::Client::PhotoGraphAimUnionNodeType get_NodeType()
	{
		return ((::RPG::Client::PhotoGraphAimUnionNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_GET_NODETYPE_OFFSET))(this);
	}

	::System::Void set_NodeType(::RPG::Client::PhotoGraphAimUnionNodeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimUnionNodeType))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_SET_NODETYPE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsVisibleCache()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_GET_ISVISIBLECACHE_OFFSET))(this);
	}

	::System::Void set_IsVisibleCache(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_SET_ISVISIBLECACHE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsInRangeCache()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_GET_ISINRANGECACHE_OFFSET))(this);
	}

	::System::Void set_IsInRangeCache(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_SET_ISINRANGECACHE_OFFSET))(this, a1);
	}

	::RPG::GameCore::PhotoGraphAimContainerConfig* get_Config()
	{
		return ((::RPG::GameCore::PhotoGraphAimContainerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::PhotoGraphAimContainerConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_SET_CONFIG_OFFSET))(this, a1);
	}
};
