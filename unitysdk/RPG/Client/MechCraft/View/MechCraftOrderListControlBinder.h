#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace SuperScrollView { class LoopGridView; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROLBINDER_GET_ORDERGRIDLIST_OFFSET UNITYSDK_OFFSET(0xD645860)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROLBINDER_GET_PARTICLECAMERA_OFFSET UNITYSDK_OFFSET(0xD645BD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD646010)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderListControlBinder_TypeDefinitionIndex = 80018;

	class MechCraftOrderListControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::SuperScrollView::LoopGridView* get_OrderGridList()
		{
			return ((::SuperScrollView::LoopGridView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROLBINDER_GET_ORDERGRIDLIST_OFFSET))(this);
		}

		::UnityEngine::Camera* get_ParticleCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROLBINDER_GET_PARTICLECAMERA_OFFSET))(this);
		}
	};
}
