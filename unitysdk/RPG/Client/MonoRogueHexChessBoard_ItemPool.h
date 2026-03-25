#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_ITEMPOOL_GETITEM_OFFSET UNITYSDK_OFFSET(0x9D31EE0)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_ITEMPOOL_HIDEUNUSEDITEMS_OFFSET UNITYSDK_OFFSET(0x9D32110)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_ITEMPOOL_RESETUSEDCOUNT_OFFSET UNITYSDK_OFFSET(0x9D31E90)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_ITEMPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x9D31E80)
#define RPG_CLIENT_MONOROGUEHEXCHESSBOARD_ITEMPOOL__SETITEMACTIVE_OFFSET UNITYSDK_OFFSET(0x9D32430)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRogueHexChessBoard_ItemPool_TypeDefinitionIndex = 56313;

	class MonoRogueHexChessBoard_ItemPool : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _Prefab; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _ItemList; // 0x18
		::System::Int32 _UsedCount; // 0x20

		::System::Void _ctor(::UnityEngine::GameObject* prefab)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD_ITEMPOOL__CTOR_OFFSET))(this, prefab);
		}

		::System::Void ResetUsedCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD_ITEMPOOL_RESETUSEDCOUNT_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetItem(::UnityEngine::Transform* parentTransform)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD_ITEMPOOL_GETITEM_OFFSET))(this, parentTransform);
		}

		::System::Void HideUnUsedItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD_ITEMPOOL_HIDEUNUSEDITEMS_OFFSET))(this);
		}

		::System::Void _SetItemActive(::UnityEngine::GameObject* go, ::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOROGUEHEXCHESSBOARD_ITEMPOOL__SETITEMACTIVE_OFFSET))(this, go, active);
		}
	};
}
