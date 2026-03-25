#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphAimUnionNodeType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerLogicOperator.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_24E6408184BB5D78;
class Class_1_83665B095F1535B5_21;
class Class_1_87EAC1A8F0E1AE21;
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_859C8B90384D9B45_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7D4060)
#define CLASS_1_859C8B90384D9B45_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD7D5D00)
#define CLASS_1_859C8B90384D9B45_GET_ISINRANGECACHE_OFFSET UNITYSDK_OFFSET(0xD7D5CE0)
#define CLASS_1_859C8B90384D9B45_GET_ISVISIBLECACHE_OFFSET UNITYSDK_OFFSET(0xD7D5CC0)
#define CLASS_1_859C8B90384D9B45_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0xD7D5CA0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_1DC66375F15E73A5_OFFSET UNITYSDK_OFFSET(0xD7D4C30)
#define CLASS_1_859C8B90384D9B45_METHOD_1_29F25F8149104FAC_OFFSET UNITYSDK_OFFSET(0xD7D55A0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xD7D56C0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_31C534C262488ADB_OFFSET UNITYSDK_OFFSET(0xD7D3FE0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_3763EF841C43390F_OFFSET UNITYSDK_OFFSET(0xD7D43F0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_37C7AE8E5D429FB2_OFFSET UNITYSDK_OFFSET(0xD7D5390)
#define CLASS_1_859C8B90384D9B45_METHOD_1_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0xD7D4330)
#define CLASS_1_859C8B90384D9B45_METHOD_1_4BDDA83A3E9868DC_OFFSET UNITYSDK_OFFSET(0xD7D4D00)
#define CLASS_1_859C8B90384D9B45_METHOD_1_4CF27C5B348D1667_OFFSET UNITYSDK_OFFSET(0xD7D5280)
#define CLASS_1_859C8B90384D9B45_METHOD_1_50DF31859BD36D53_OFFSET UNITYSDK_OFFSET(0xD7D41F0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_7009071BE80D5B0A_OFFSET UNITYSDK_OFFSET(0xD7D5850)
#define CLASS_1_859C8B90384D9B45_METHOD_1_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0xD7D5740)
#define CLASS_1_859C8B90384D9B45_METHOD_1_A87307C3DF83DEC4_OFFSET UNITYSDK_OFFSET(0xD7D4DC0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_B0611157BA64C1FE_OFFSET UNITYSDK_OFFSET(0xD7D59E0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0xD7D57D0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0xD7D4AC0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_DFA7358BCB413C04_OFFSET UNITYSDK_OFFSET(0xD7D5930)
#define CLASS_1_859C8B90384D9B45_METHOD_1_EAA9473F5CD92E22_OFFSET UNITYSDK_OFFSET(0xD7D4ED0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xD7D49D0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_FEB3B4A14C149D1C_OFFSET UNITYSDK_OFFSET(0xD7D4590)
#define CLASS_1_859C8B90384D9B45_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD7D5D10)
#define CLASS_1_859C8B90384D9B45_SET_ISINRANGECACHE_OFFSET UNITYSDK_OFFSET(0xD7D5CF0)
#define CLASS_1_859C8B90384D9B45_SET_ISVISIBLECACHE_OFFSET UNITYSDK_OFFSET(0xD7D5CD0)
#define CLASS_1_859C8B90384D9B45_SET_NODETYPE_OFFSET UNITYSDK_OFFSET(0xD7D5CB0)
#define CLASS_1_859C8B90384D9B45__CTOR_OFFSET UNITYSDK_OFFSET(0xD7D3FA0)

inline static constexpr unsigned int Class_1_859C8B90384D9B45_TypeDefinitionIndex = 56739;

class Class_1_859C8B90384D9B45 : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* Field_1_12; // 0x10
	::System::Collections::Generic::List_1<::Class_1_24E6408184BB5D78*>* Field_1_9; // 0x18
	::RPG::GameCore::PhotoGraphAimContainerConfig* _Config_k__BackingField; // 0x20
	::System::String* Field_1_6; // 0x28
	::Il2CppArray<::Class_1_859C8B90384D9B45*>* Field_1_1; // 0x30
	::RPG::GameCore::PhotoGraphAimContainerLogicOperator Field_1_7; // 0x38
	::System::Boolean Field_1_8; // 0x3C
	::System::Boolean _IsVisibleCache_k__BackingField; // 0x3D
	::System::Boolean _IsInRangeCache_k__BackingField; // 0x3E
	::RPG::Client::PhotoGraphAimUnionNodeType _NodeType_k__BackingField; // 0x40
	::System::Int32 Field_1_2; // 0x44
	::System::Int32 Field_1_13; // 0x48
	::System::Int32 Field_1_14; // 0x4C
	::System::Int32 Field_1_11; // 0x50
	::System::Int32 Field_1_10; // 0x54

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

	::System::Boolean Method_1_50DF31859BD36D53(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_50DF31859BD36D53_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Boolean Method_1_3763EF841C43390F(::RPG::GameCore::PhotoGraphTargetSize* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_3763EF841C43390F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FEB3B4A14C149D1C(::Class_1_24E6408184BB5D78* a1, ::RPG::GameCore::PhotoGraphTargetSize* a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_24E6408184BB5D78*, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_FEB3B4A14C149D1C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Boolean Method_1_DE45EA3A177BC33B(::Class_1_24E6408184BB5D78* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_24E6408184BB5D78*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_DE45EA3A177BC33B_OFFSET))(this, a1);
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

	::System::Int32 Method_1_4BDDA83A3E9868DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_4BDDA83A3E9868DC_OFFSET))(this);
	}

	::System::Int32 Method_1_37C7AE8E5D429FB2(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::Int32 a2, ::RPG::GameCore::PhotoGraphAimIdentifyType a3, ::Class_1_83665B095F1535B5_21* a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::Int32, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::Class_1_83665B095F1535B5_21*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_37C7AE8E5D429FB2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_29F25F8149104FAC(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::Int32 a2, ::RPG::GameCore::PhotoGraphAimIdentifyType a3, ::Class_1_83665B095F1535B5_21* a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::Int32, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::Class_1_83665B095F1535B5_21*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_29F25F8149104FAC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_1_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_8A76897D6A693475_OFFSET))(this);
	}

	::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
	}

	::System::Void Method_1_7009071BE80D5B0A(::RPG::GameCore::GameEntity* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_7009071BE80D5B0A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DFA7358BCB413C04(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_DFA7358BCB413C04_OFFSET))(this, a1);
	}

	::System::Void Method_1_B0611157BA64C1FE(::RPG::GameCore::GameEntity* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_B0611157BA64C1FE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4CF27C5B348D1667(::System::Single a1, ::RPG::Client::TextID& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_4CF27C5B348D1667_OFFSET))(this, a1, a2);
	}

	::RPG::Client::PhotoGraphAimUnionNodeType get_NodeType()
	{
		return ((::RPG::Client::PhotoGraphAimUnionNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_GET_NODETYPE_OFFSET))(this);
	}

	::System::Void set_NodeType(::RPG::Client::PhotoGraphAimUnionNodeType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimUnionNodeType))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_SET_NODETYPE_OFFSET))(this, value);
	}

	::System::Boolean get_IsVisibleCache()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_GET_ISVISIBLECACHE_OFFSET))(this);
	}

	::System::Void set_IsVisibleCache(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_SET_ISVISIBLECACHE_OFFSET))(this, value);
	}

	::System::Boolean get_IsInRangeCache()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_GET_ISINRANGECACHE_OFFSET))(this);
	}

	::System::Void set_IsInRangeCache(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_SET_ISINRANGECACHE_OFFSET))(this, value);
	}

	::RPG::GameCore::PhotoGraphAimContainerConfig* get_Config()
	{
		return ((::RPG::GameCore::PhotoGraphAimContainerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::PhotoGraphAimContainerConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_SET_CONFIG_OFFSET))(this, value);
	}
};
