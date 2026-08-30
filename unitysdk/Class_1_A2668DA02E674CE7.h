#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphAimUnionNodeType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerLogicOperator.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_83665B095F1535B5_24;
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

#define CLASS_1_A2668DA02E674CE7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CC59A0)
#define CLASS_1_A2668DA02E674CE7_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15CC7ED0)
#define CLASS_1_A2668DA02E674CE7_GET_ISINRANGECACHE_OFFSET UNITYSDK_OFFSET(0x15CC7EB0)
#define CLASS_1_A2668DA02E674CE7_GET_ISVISIBLECACHE_OFFSET UNITYSDK_OFFSET(0x15CC7E90)
#define CLASS_1_A2668DA02E674CE7_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x15CC7E70)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_014C324351F8FF79_OFFSET UNITYSDK_OFFSET(0x15CC7B50)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x15CC6540)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_1CDA02F618AA7DE8_OFFSET UNITYSDK_OFFSET(0x15CC6900)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_31C534C262488ADB_OFFSET UNITYSDK_OFFSET(0x15CC5920)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_3F07804D8892197E_OFFSET UNITYSDK_OFFSET(0x15CC7820)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_45BCD41783F877BF_OFFSET UNITYSDK_OFFSET(0x15CC7530)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_4CF27C5B348D1667_OFFSET UNITYSDK_OFFSET(0x15CC7050)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_4FDFCF0E824F852D_OFFSET UNITYSDK_OFFSET(0x15CC5D50)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_5657BD02883C1D59_OFFSET UNITYSDK_OFFSET(0x15CC6AD0)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_7F7F9A5A4E450AE5_OFFSET UNITYSDK_OFFSET(0x15CC6030)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_8249CBC66AA43E88_OFFSET UNITYSDK_OFFSET(0x15CC7A20)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_940C476FC6F87F12_OFFSET UNITYSDK_OFFSET(0x15CC78B0)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x15CC7780)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x15CC76E0)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_B72D11B1E2A0052D_OFFSET UNITYSDK_OFFSET(0x15CC5BF0)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_B731FA418B4405BD_OFFSET UNITYSDK_OFFSET(0x15CC5EB0)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_CAC2AF2352C27911_OFFSET UNITYSDK_OFFSET(0x15CC67A0)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x15CC6630)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_EAA9473F5CD92E22_OFFSET UNITYSDK_OFFSET(0x15CC6C70)
#define CLASS_1_A2668DA02E674CE7_METHOD_1_EF9D55B90D4282AF_OFFSET UNITYSDK_OFFSET(0x15CC7160)
#define CLASS_1_A2668DA02E674CE7_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15CC7EE0)
#define CLASS_1_A2668DA02E674CE7_SET_ISINRANGECACHE_OFFSET UNITYSDK_OFFSET(0x15CC7EC0)
#define CLASS_1_A2668DA02E674CE7_SET_ISVISIBLECACHE_OFFSET UNITYSDK_OFFSET(0x15CC7EA0)
#define CLASS_1_A2668DA02E674CE7_SET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x15CC7E80)
#define CLASS_1_A2668DA02E674CE7__CTOR_OFFSET UNITYSDK_OFFSET(0x15CC58D0)

inline static constexpr unsigned int Class_1_A2668DA02E674CE7_TypeDefinitionIndex = 69399;

class Class_1_A2668DA02E674CE7 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_A2668DA02E674CE7*>* NNJIGNBAHHL; // 0x10
	::System::Collections::Generic::List_1<::Class_1_EDE9079B7B0FAB9F*>* AHIDIFHJHFF; // 0x18
	::System::String* KDJGDLAHDNI; // 0x20
	::RPG::GameCore::PhotoGraphAimContainerConfig* _Config_k__BackingField; // 0x28
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
	::System::Int32 KJJJPMAPFOH; // 0x38
	::System::Int32 BGOECBIKDEG; // 0x3C
	::RPG::Client::PhotoGraphAimUnionNodeType _NodeType_k__BackingField; // 0x40
	::RPG::GameCore::PhotoGraphAimContainerLogicOperator GAKBBEHODFF; // 0x44
	::System::Boolean _IsInRangeCache_k__BackingField; // 0x48
	::System::Boolean MEHPGGNLNGJ; // 0x49
	::System::Boolean _IsVisibleCache_k__BackingField; // 0x4A
	::System::Int32 JPLDMLLPHOL; // 0x4C
	::System::Int32 PDDDKGKCAEL; // 0x50
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

	::System::Int32 Method_1_EF9D55B90D4282AF(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::Int32 a2, ::RPG::GameCore::PhotoGraphAimIdentifyType a3, ::Class_1_83665B095F1535B5_24* a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::Int32, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::Class_1_83665B095F1535B5_24*))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_EF9D55B90D4282AF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_45BCD41783F877BF(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::Int32 a2, ::RPG::GameCore::PhotoGraphAimIdentifyType a3, ::Class_1_83665B095F1535B5_24* a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::Int32, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::Class_1_83665B095F1535B5_24*))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_45BCD41783F877BF_OFFSET))(this, a1, a2, a3, a4);
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

	::System::Void Method_1_014C324351F8FF79(::RPG::GameCore::GameEntity* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A2668DA02E674CE7_METHOD_1_014C324351F8FF79_OFFSET))(this, a1, a2);
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
