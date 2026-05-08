#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0FED320E7A82FE89;
class Class_1_2582D22C0BC976C3;
class Class_1_B7E341C5F1A6F199;
class Class_1_D276261F488D3DEB;
class Class_2_186B4E1BC116EFF3;
class Class_3_1A345EAE5F749316_128;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MOVINGWALLSUBSYSTEM_GETBUILDER_OFFSET UNITYSDK_OFFSET(0x10BE08D0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_GET_PLATFORMBOUNDS_OFFSET UNITYSDK_OFFSET(0x10BE08B0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10BE0BE0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10BE0970)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x10BE12E0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x10BE1220)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_ONRESET_OFFSET UNITYSDK_OFFSET(0x10BE0B80)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10BE1600)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x10BE0F90)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_TRYGETNEXTCONTEXT_OFFSET UNITYSDK_OFFSET(0x10BE23A0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_UPDATEMOVINGWALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x10BE1560)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_UPDATEMOVINGWALLS_OFFSET UNITYSDK_OFFSET(0x10BE2100)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_UPDATEWALLBUILDERS_OFFSET UNITYSDK_OFFSET(0x10BE1650)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10BE2860)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10BE2880)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x10BE2910)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10BE29A0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x10BE2A30)

namespace MoleMole
{
	inline static constexpr unsigned int MovingWallSubsystem_TypeDefinitionIndex = 41853;

	class MovingWallSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::MovingWallSubsystem*>
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_0FED320E7A82FE89*>* _wallBuilders; // 0x10
		::System::Collections::Generic::List_1<::Class_1_D276261F488D3DEB*>* _movingWalls; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _entityIDToBuildIndex; // 0x20
		::System::Collections::Generic::List_1<::Class_1_2582D22C0BC976C3*>* _contents; // 0x28
		::MoleMole::Vector2Int _baseSlotCount; // 0x30
		::UnityEngine::Vector2 _basePrecision; // 0x38
		::System::Int32 _baseMaxHeightIndex; // 0x40
		::UnityEngine::Bounds _platformBounds; // 0x44
		::System::Int32 _buildIndex; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds get_PlatformBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_GET_PLATFORMBOUNDS_OFFSET))(this);
		}

		::Class_1_0FED320E7A82FE89* GetBuilder(::System::Int32 index)
		{
			return ((::Class_1_0FED320E7A82FE89*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_GETBUILDER_OFFSET))(this, index);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_ONRESET_OFFSET))(this);
		}

		::System::Void Initialize(::Class_3_1A345EAE5F749316_128* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_1A345EAE5F749316_128*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_INITIALIZE_OFFSET))(this, notify);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnEntityReady(::Class_2_186B4E1BC116EFF3* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_186B4E1BC116EFF3*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_ONENTITYREADY_OFFSET))(this, evt);
		}

		static ::Cysharp::Threading::Tasks::UniTask UpdateMovingWallContext(::System::UInt32 entityID, ::Class_1_2582D22C0BC976C3* ctx)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::UInt32, ::Class_1_2582D22C0BC976C3*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_UPDATEMOVINGWALLCONTEXT_OFFSET))(entityID, ctx);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void UpdateMovingWalls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_UPDATEMOVINGWALLS_OFFSET))(this);
		}

		::System::Void UpdateWallBuilders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_UPDATEWALLBUILDERS_OFFSET))(this);
		}

		::System::Boolean TryGetNextContext(::UnityEngine::Vector3 position, ::Class_1_2582D22C0BC976C3*& context, ::System::Single& distance)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Class_1_2582D22C0BC976C3*&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_TRYGETNEXTCONTEXT_OFFSET))(this, position, context, distance);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
