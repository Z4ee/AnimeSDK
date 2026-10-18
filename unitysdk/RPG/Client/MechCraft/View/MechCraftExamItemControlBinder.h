#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class UIStateCtrl; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROLBINDER_GET_IMGEXAMINERHEAD_OFFSET UNITYSDK_OFFSET(0xD63A450)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROLBINDER_GET_STATECTRL_OFFSET UNITYSDK_OFFSET(0xD63A500)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD63A790)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftExamItemControlBinder_TypeDefinitionIndex = 79962;

	class MechCraftExamItemControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_StateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROLBINDER_GET_STATECTRL_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_ImgExaminerHead()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROLBINDER_GET_IMGEXAMINERHEAD_OFFSET))(this);
		}
	};
}
