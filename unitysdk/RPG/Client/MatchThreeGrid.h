#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_AA0343CD5D895891;
namespace RPG::Client { class MatchThreeBoard; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MATCHTHREEGRID_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xD642850)
#define RPG_CLIENT_MATCHTHREEGRID_GET_GRIDDATA_OFFSET UNITYSDK_OFFSET(0xD62A140)
#define RPG_CLIENT_MATCHTHREEGRID_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xD6426B0)
#define RPG_CLIENT_MATCHTHREEGRID_INIT_OFFSET UNITYSDK_OFFSET(0xD6426D0)
#define RPG_CLIENT_MATCHTHREEGRID_ONCREATE_OFFSET UNITYSDK_OFFSET(0xD642890)
#define RPG_CLIENT_MATCHTHREEGRID_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xD629DC0)
#define RPG_CLIENT_MATCHTHREEGRID_SETSIZE_OFFSET UNITYSDK_OFFSET(0xD642790)
#define RPG_CLIENT_MATCHTHREEGRID_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xD629D30)
#define RPG_CLIENT_MATCHTHREEGRID_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xD6426C0)
#define RPG_CLIENT_MATCHTHREEGRID_SPAWNED_OFFSET UNITYSDK_OFFSET(0xD642810)
#define RPG_CLIENT_MATCHTHREEGRID__CTOR_OFFSET UNITYSDK_OFFSET(0xD642A10)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGrid_TypeDefinitionIndex = 65997;

	class MatchThreeGrid : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector2Int _PosIndex_k__BackingField; // 0x18
		::Class_1_AA0343CD5D895891* CKNHLLFEJAC; // 0x20
		::RPG::Client::MatchThreeBoard* MIPPNCGOJNM; // 0x28
		::UnityEngine::Transform* BDNINMDLECC; // 0x30
		::UnityEngine::Transform* PFAHCGGPAJH; // 0x38
		::UnityEngine::Transform* NNIGFBPEBFF; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGRID__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2Int get_PosIndex()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGRID_GET_POSINDEX_OFFSET))(this);
		}

		::System::Void set_PosIndex(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGRID_SET_POSINDEX_OFFSET))(this, a1);
		}

		::Class_1_AA0343CD5D895891* get_GridData()
		{
			return ((::Class_1_AA0343CD5D895891*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGRID_GET_GRIDDATA_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGRID_INIT_OFFSET))(this);
		}

		::System::Void SetSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGRID_SETSIZE_OFFSET))(this, a1);
		}

		::System::Void SetupView(::Class_1_AA0343CD5D895891* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AA0343CD5D895891*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGRID_SETUPVIEW_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGRID_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGRID_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGRID_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGRID_ONCREATE_OFFSET))(this, a1);
		}
	};
}
