#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_44B8EC842F459D62;
namespace RPG::Client::LittleGame { template <typename T> class NavigationRequest_1; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameWayPointGraphConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int GraphNavigationService_1_TypeDefinitionIndex = 62275;

	template <typename TEntity>
	class GraphNavigationService_1 : public ::System::Object
	{
	public:
		::System::Boolean _IsGraphIgnoreInvalidPoints; // 0x0
		::System::Collections::Generic::HashSet_1<::System::Int32>* _PendingInvalidPointIndexs; // 0x0
		::System::Collections::Generic::HashSet_1<::System::Int32>* _InvalidPointIndexs; // 0x0
		::UnityEngine::Transform* _Root; // 0x0
		static ::System::String** StaticGet__BGCurveProxyPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GraphNavigationService_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::GameObject* _BGCurvePrefabAsset; // 0x0
		::System::Collections::Generic::Stack_1<::UnityEngine::GameObject*>* _BGCurveCache; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* _BgCurveMap; // 0x0
		::RPG::GameCore::LittleGameWayPointGraphConfig* _WayPointConfig; // 0x0
		::Il2CppArray<::System::Single>* _Graph; // 0x0
		::System::Int32 _GraphLength; // 0x0
		::Class_1_44B8EC842F459D62* _Dijkstra; // 0x0
		::System::Collections::Generic::List_1<TEntity>* _NavAgents; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::NavigationRequest_1<TEntity>*>* _NavRequests; // 0x0
	};
}
