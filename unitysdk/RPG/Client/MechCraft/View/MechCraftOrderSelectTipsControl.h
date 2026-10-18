#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::MechCraft::View { class MechCraftOrderSelectTipsControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderSelectTipsViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROL_METHOD_5_8B0C89067EA824EB_OFFSET UNITYSDK_OFFSET(0xD653790)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROL_METHOD_5_A0AFCA0CD83D691D_OFFSET UNITYSDK_OFFSET(0xD652BF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROL_METHOD_5_C8074E66B1F5B8FE_OFFSET UNITYSDK_OFFSET(0xD6537D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROL_METHOD_5_E197C0B2956C253D_OFFSET UNITYSDK_OFFSET(0xD654100)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD6546A0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderSelectTipsControl_TypeDefinitionIndex = 80005;

	class MechCraftOrderSelectTipsControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderSelectTipsViewModel* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftOrderSelectTipsControlBinder* _Binder; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderSelectTipsViewModel* Method_5_8B0C89067EA824EB()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderSelectTipsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROL_METHOD_5_8B0C89067EA824EB_OFFSET))(this);
		}

		::System::Void Method_5_A0AFCA0CD83D691D(::RPG::Client::MechCraft::ViewModel::MechCraftOrderSelectTipsViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderSelectTipsViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROL_METHOD_5_A0AFCA0CD83D691D_OFFSET))(this, a1);
		}

		::System::Void Method_5_E197C0B2956C253D(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROL_METHOD_5_E197C0B2956C253D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_C8074E66B1F5B8FE(::RPG::Client::MechCraft::ViewModel::MechCraftOrderSelectTipsViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderSelectTipsViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERSELECTTIPSCONTROL_METHOD_5_C8074E66B1F5B8FE_OFFSET))(this, a1);
		}
	};
}
