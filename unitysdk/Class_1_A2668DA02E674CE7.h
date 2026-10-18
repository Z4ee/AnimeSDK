#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphAimUnionNodeType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerLogicOperator.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_83665B095F1535B5_25;
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

#define CLASS_1_A2668DA02E674CE7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E8AED0)
#define CLASS_1_A2668DA02E674CE7_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15E8D3F0)
#define CLASS_1_A2668DA02E674CE7_GET_ISINRANGECACHE_OFFSET UNITYSDK_OFFSET(0x15E8D3D0)
#define CLASS_1_A2668DA02E674CE7_GET_ISVISIBLECACHE_OFFSET UNITYSDK_OFFSET(0x15E8D3B0)
#define CLASS_1_A2668DA02E674CE7_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x15E8D390)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x15E8BA70)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_1CDA02F618AA7DE8_OFFSET UNITYSDK_OFFSET(0x15E8BE30)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_31C534C262488ADB_OFFSET UNITYSDK_OFFSET(0x15E8AE50)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_3F07804D8892197E_OFFSET UNITYSDK_OFFSET(0x15E8CD50)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_45BCD41783F877BF_OFFSET UNITYSDK_OFFSET(0x15E8CA60)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_4CF27C5B348D1667_OFFSET UNITYSDK_OFFSET(0x15E8C580)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_4FDFCF0E824F852D_OFFSET UNITYSDK_OFFSET(0x15E8B280)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_5657BD02883C1D59_OFFSET UNITYSDK_OFFSET(0x15E8C000)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_6C9645B62C6A9A3B_OFFSET UNITYSDK_OFFSET(0x15E8D080)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_7F7F9A5A4E450AE5_OFFSET UNITYSDK_OFFSET(0x15E8B560)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_8249CBC66AA43E88_OFFSET UNITYSDK_OFFSET(0x15E8CF50)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_940C476FC6F87F12_OFFSET UNITYSDK_OFFSET(0x15E8CDE0)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x15E8CCB0)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x15E8CC10)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_B72D11B1E2A0052D_OFFSET UNITYSDK_OFFSET(0x15E8B120)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_B731FA418B4405BD_OFFSET UNITYSDK_OFFSET(0x15E8B3E0)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_CAC2AF2352C27911_OFFSET UNITYSDK_OFFSET(0x15E8BCD0)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x15E8BB60)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_EAA9473F5CD92E22_OFFSET UNITYSDK_OFFSET(0x15E8C1A0)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_EF9D55B90D4282AF_OFFSET UNITYSDK_OFFSET(0x15E8C690)
#define CLASS_1_A2668DA02E674CE7_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15E8D400)
#define CLASS_1_A2668DA02E674CE7_SET_ISINRANGECACHE_OFFSET UNITYSDK_OFFSET(0x15E8D3E0)
#define CLASS_1_A2668DA02E674CE7_SET_ISVISIBLECACHE_OFFSET UNITYSDK_OFFSET(0x15E8D3C0)
#define CLASS_1_A2668DA02E674CE7_SET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x15E8D3A0)
#define CLASS_1_A2668DA02E674CE7__CTOR_OFFSET UNITYSDK_OFFSET(0x15E8AE00)

inline static constexpr unsigned int Class_1_A2668DA02E674CE7_TypeDefinitionIndex = 69435;

class Class_1_A2668DA02E674CE7 : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x10
	::System::String* KDJGDLAHDNI; // 0x18
	::RPG::GameCore::PhotoGraphAimContainerConfig* _Config_k__BackingField; // 0x20
	::Il2CppArray<::Class_1_A2668DA02E674CE7*>* NNJIGNBAHHL; // 0x28
	::System::Collections::Generic::List_1<::Class_1_EDE9079B7B0FAB9F*>* AHIDIFHJHFF; // 0x30
	::RPG::Client::PhotoGraphAimUnionNodeType _NodeType_k__BackingField; // 0x38
	::System::Int32 KJJJPMAPFOH; // 0x3C
	::System::Int32 PDDDKGKCAEL; // 0x40
	::System::Int32 BGOECBIKDEG; // 0x44
	::System::Int32 JPLDMLLPHOL; // 0x48
	::System::Boolean MEHPGGNLNGJ; // 0x4C
	::System::Boolean _IsVisibleCache_k__BackingField; // 0x4D
	::System::Boolean _IsInRangeCache_k__BackingField; // 0x4E
	::RPG::GameCore::PhotoGraphAimContainerLogicOperator GAKBBEHODFF; // 0x50
	::System::Int32 ADEKJDAPHFL; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_31C534C262488ADB(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_31C534C262488ADB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_B72D11B1E2A0052D(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_B72D11B1E2A0052D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4FDFCF0E824F852D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_4FDFCF0E824F852D_OFFSET))(this);
	}

	::System::Boolean Method_1_B731FA418B4405BD(::RPG::GameCore::PhotoGraphTargetSize* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_B731FA418B4405BD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_7F7F9A5A4E450AE5(::Class_1_EDE9079B7B0FAB9F* a1, ::RPG::GameCore::PhotoGraphTargetSize* a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EDE9079B7B0FAB9F*, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_7F7F9A5A4E450AE5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Boolean Method_1_DE45EA3A177BC33B(::Class_1_EDE9079B7B0FAB9F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EDE9079B7B0FAB9F*))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_DE45EA3A177BC33B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_CAC2AF2352C27911()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_CAC2AF2352C27911_OFFSET))(this);
	}

	::System::Void Method_1_5657BD02883C1D59(::UnityEngine::Vector3 a1, ::Class_1_87EAC1A8F0E1AE21* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Class_1_87EAC1A8F0E1AE21*))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_5657BD02883C1D59_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EAA9473F5CD92E22(::UnityEngine::Vector3 a1, ::Class_1_87EAC1A8F0E1AE21* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Class_1_87EAC1A8F0E1AE21*))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_EAA9473F5CD92E22_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_1CDA02F618AA7DE8()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_1CDA02F618AA7DE8_OFFSET))(this);
	}

	::System::Int32 Method_1_EF9D55B90D4282AF(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::Int32 a2, ::RPG::GameCore::PhotoGraphAimIdentifyType a3, ::Class_1_83665B095F1535B5_25* a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::Int32, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::Class_1_83665B095F1535B5_25*))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_EF9D55B90D4282AF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_45BCD41783F877BF(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::Int32 a2, ::RPG::GameCore::PhotoGraphAimIdentifyType a3, ::Class_1_83665B095F1535B5_25* a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::Int32, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::Class_1_83665B095F1535B5_25*))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_45BCD41783F877BF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Boolean Method_1_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_9CA35E5BF1A50E77_OFFSET))(this);
	}

	::System::Void Method_1_3F07804D8892197E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_3F07804D8892197E_OFFSET))(this, a1);
	}

	::System::Void Method_1_940C476FC6F87F12(::RPG::GameCore::GameEntity* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_940C476FC6F87F12_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8249CBC66AA43E88(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_8249CBC66AA43E88_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C9645B62C6A9A3B(::RPG::GameCore::GameEntity* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_6C9645B62C6A9A3B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4CF27C5B348D1667(::System::Single a1, ::RPG::Client::TextID& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_4CF27C5B348D1667_OFFSET))(this, a1, a2);
	}

	::RPG::Client::PhotoGraphAimUnionNodeType get_NodeType()
	{
		return ((::RPG::Client::PhotoGraphAimUnionNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_GET_NODETYPE_OFFSET))(this);
	}

	::System::Void set_NodeType(::RPG::Client::PhotoGraphAimUnionNodeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimUnionNodeType))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_SET_NODETYPE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsVisibleCache()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_GET_ISVISIBLECACHE_OFFSET))(this);
	}

	::System::Void set_IsVisibleCache(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_SET_ISVISIBLECACHE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsInRangeCache()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_GET_ISINRANGECACHE_OFFSET))(this);
	}

	::System::Void set_IsInRangeCache(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_SET_ISINRANGECACHE_OFFSET))(this, a1);
	}

	::RPG::GameCore::PhotoGraphAimContainerConfig* get_Config()
	{
		return ((::RPG::GameCore::PhotoGraphAimContainerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::PhotoGraphAimContainerConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_SET_CONFIG_OFFSET))(this, a1);
	}
};
