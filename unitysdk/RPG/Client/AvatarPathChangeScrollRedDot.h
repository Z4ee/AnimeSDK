#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarPathChangeScrollRedDot_ItemRedDotData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace SuperScrollView { class LoopListView2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ScrollRect; }

#define RPG_CLIENT_AVATARPATHCHANGESCROLLREDDOT_ADDITEMREDDOTROOT_OFFSET UNITYSDK_OFFSET(0xC839A40)
#define RPG_CLIENT_AVATARPATHCHANGESCROLLREDDOT_CLEARITEMREDDOTROOTLIST_OFFSET UNITYSDK_OFFSET(0xC839AF0)
#define RPG_CLIENT_AVATARPATHCHANGESCROLLREDDOT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC839B60)
#define RPG_CLIENT_AVATARPATHCHANGESCROLLREDDOT__CTOR_OFFSET UNITYSDK_OFFSET(0xC83A070)
#define RPG_CLIENT_AVATARPATHCHANGESCROLLREDDOT__ISSHOWINGREDDOT_OFFSET UNITYSDK_OFFSET(0xC839F90)
#define RPG_CLIENT_AVATARPATHCHANGESCROLLREDDOT__REFRESHSCROLLREDDOT_OFFSET UNITYSDK_OFFSET(0xC839D00)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPathChangeScrollRedDot_TypeDefinitionIndex = 71302;

	class AvatarPathChangeScrollRedDot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _ScrollRedDotTop; // 0x18
		::UnityEngine::Transform* _ScrollRedDotBottom; // 0x20
		::UnityEngine::UI::ScrollRect* _ScrollRect; // 0x28
		::SuperScrollView::LoopListView2* _LoopListView; // 0x30
		::System::Single _Offset; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::AvatarPathChangeScrollRedDot_ItemRedDotData>* _ItemRedDotRootList; // 0x40
		::Il2CppArray<::UnityEngine::Vector3>* _TempPoints; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGESCROLLREDDOT__CTOR_OFFSET))(this);
		}

		::System::Void AddItemRedDotRoot(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGESCROLLREDDOT_ADDITEMREDDOTROOT_OFFSET))(this, a1, a2);
		}

		::System::Void ClearItemRedDotRootList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGESCROLLREDDOT_CLEARITEMREDDOTROOTLIST_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGESCROLLREDDOT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void _RefreshScrollRedDot(::RPG::Client::AvatarPathChangeScrollRedDot_ItemRedDotData a1, ::System::Boolean& a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarPathChangeScrollRedDot_ItemRedDotData, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGESCROLLREDDOT__REFRESHSCROLLREDDOT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _IsShowingRedDot(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGESCROLLREDDOT__ISSHOWINGREDDOT_OFFSET))(this, a1);
		}
	};
}
