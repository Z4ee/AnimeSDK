#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::MechCraft::View { class MechCraftOrderDetailInfoControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderDetailInfoViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD64B660)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_METHOD_5_0BABE374DB243B13_OFFSET UNITYSDK_OFFSET(0xD64B720)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_METHOD_5_5A224A67287A3DCB_OFFSET UNITYSDK_OFFSET(0xD64BCD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_METHOD_5_7E04534C297B27DA_OFFSET UNITYSDK_OFFSET(0xD64B970)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_METHOD_5_B4ABBC778C87613D_OFFSET UNITYSDK_OFFSET(0xD64B840)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD64B6A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD64BE90)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderDetailInfoControl_TypeDefinitionIndex = 79987;

	class MechCraftOrderDetailInfoControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftOrderDetailInfoControlBinder* _Binder; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void Method_5_B4ABBC778C87613D(::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_METHOD_5_B4ABBC778C87613D_OFFSET))(this, a1);
		}

		::System::Void Method_5_0BABE374DB243B13(::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_METHOD_5_0BABE374DB243B13_OFFSET))(this, a1);
		}

		::System::Void Method_5_5A224A67287A3DCB(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_METHOD_5_5A224A67287A3DCB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_7E04534C297B27DA(::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderDetailInfoViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERDETAILINFOCONTROL_METHOD_5_7E04534C297B27DA_OFFSET))(this, a1);
		}
	};
}
