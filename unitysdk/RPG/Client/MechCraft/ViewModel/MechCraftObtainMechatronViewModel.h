#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::ViewModel { class MechCraftObtainMechatronUI3DViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTOBTAINMECHATRONVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD682E30)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTOBTAINMECHATRONVIEWMODEL_GET_UI3DVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD682E50)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTOBTAINMECHATRONVIEWMODEL_SET_NAME_OFFSET UNITYSDK_OFFSET(0xD682E40)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTOBTAINMECHATRONVIEWMODEL_SET_UI3DVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD682E60)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTOBTAINMECHATRONVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD682E70)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftObtainMechatronViewModel_TypeDefinitionIndex = 79654;

	class MechCraftObtainMechatronViewModel : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftObtainMechatronUI3DViewModel* _UI3DViewModel_k__BackingField; // 0x10
		::RPG::Client::TextID _Name_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTOBTAINMECHATRONVIEWMODEL__CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTOBTAINMECHATRONVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTOBTAINMECHATRONVIEWMODEL_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftObtainMechatronUI3DViewModel* get_UI3DViewModel()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftObtainMechatronUI3DViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTOBTAINMECHATRONVIEWMODEL_GET_UI3DVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_UI3DViewModel(::RPG::Client::MechCraft::ViewModel::MechCraftObtainMechatronUI3DViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftObtainMechatronUI3DViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTOBTAINMECHATRONVIEWMODEL_SET_UI3DVIEWMODEL_OFFSET))(this, a1);
		}
	};
}
