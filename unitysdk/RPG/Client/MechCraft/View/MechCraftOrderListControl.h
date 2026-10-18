#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_E64C5E78139B800A;
namespace RPG::Client::MechCraft::View { class MechCraftOrderListControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderItemViewModel; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace SuperScrollView { class LoopGridViewItem; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL_METHOD_5_64065F804D376B64_OFFSET UNITYSDK_OFFSET(0xD645910)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL_METHOD_5_A0BF5729B5768209_OFFSET UNITYSDK_OFFSET(0xD645360)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL_METHOD_5_CD64FADAE3A9747A_OFFSET UNITYSDK_OFFSET(0xD645300)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL_METHOD_5_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xD6452C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD645C80)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderListControl_TypeDefinitionIndex = 80016;

	class MechCraftOrderListControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_E64C5E78139B800A* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftOrderListControlBinder* _Binder; // 0x20
		::RPG::UINavigation::UINavigationZoneManager* _ZoneManager; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_E64C5E78139B800A* Method_5_F8B73ECE7F883AC1()
		{
			return ((::Class_1_E64C5E78139B800A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL_METHOD_5_F8B73ECE7F883AC1_OFFSET))(this);
		}

		::System::Void Method_5_CD64FADAE3A9747A(::Class_1_E64C5E78139B800A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E64C5E78139B800A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL_METHOD_5_CD64FADAE3A9747A_OFFSET))(this, a1);
		}

		::System::Void Method_5_A0BF5729B5768209(::Class_1_E64C5E78139B800A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E64C5E78139B800A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL_METHOD_5_A0BF5729B5768209_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopGridViewItem* Method_5_64065F804D376B64(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL_METHOD_5_64065F804D376B64_OFFSET))(this, a1);
		}
	};
}
