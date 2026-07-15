#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_AA0343CD5D895891;
namespace RPG::Client { class MatchThreeBoard; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MATCHTHREEGRID_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1AB669D0)
#define RPG_CLIENT_MATCHTHREEGRID_GET_GRIDDATA_OFFSET UNITYSDK_OFFSET(0x1AB666E0)
#define RPG_CLIENT_MATCHTHREEGRID_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x1AB666C0)
#define RPG_CLIENT_MATCHTHREEGRID_INIT_OFFSET UNITYSDK_OFFSET(0x1AB66720)
#define RPG_CLIENT_MATCHTHREEGRID_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1AB66A10)
#define RPG_CLIENT_MATCHTHREEGRID_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1AB668F0)
#define RPG_CLIENT_MATCHTHREEGRID_SETSIZE_OFFSET UNITYSDK_OFFSET(0x1AB667E0)
#define RPG_CLIENT_MATCHTHREEGRID_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1AB66860)
#define RPG_CLIENT_MATCHTHREEGRID_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x1AB666D0)
#define RPG_CLIENT_MATCHTHREEGRID_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1AB66990)
#define RPG_CLIENT_MATCHTHREEGRID__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB66B90)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGrid_TypeDefinitionIndex = 63012;

	class MatchThreeGrid : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector2Int _PosIndex_k__BackingField; // 0x18
		::Class_1_AA0343CD5D895891* Field_5_1; // 0x20
		::RPG::Client::MatchThreeBoard* Field_5_2; // 0x28
		::UnityEngine::Transform* Field_5_3; // 0x30
		::UnityEngine::Transform* Field_5_4; // 0x38
		::UnityEngine::Transform* Field_5_5; // 0x40

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
