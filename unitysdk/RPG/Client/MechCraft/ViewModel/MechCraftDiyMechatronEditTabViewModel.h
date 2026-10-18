#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftDiyMechatronEditTabViewModel_EditType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITTABVIEWMODEL_GET_EDITINGTYPE_OFFSET UNITYSDK_OFFSET(0xD671150)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITTABVIEWMODEL_GET_TABICON_OFFSET UNITYSDK_OFFSET(0xD671160)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITTABVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD671170)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiyMechatronEditTabViewModel_TypeDefinitionIndex = 79613;

	class MechCraftDiyMechatronEditTabViewModel : public ::System::Object
	{
	public:
		::System::String* _TabIcon_k__BackingField; // 0x10
		::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronEditTabViewModel_EditType _EditingType_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronEditTabViewModel_EditType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronEditTabViewModel_EditType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITTABVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronEditTabViewModel_EditType get_EditingType()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronEditTabViewModel_EditType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITTABVIEWMODEL_GET_EDITINGTYPE_OFFSET))(this);
		}

		::System::String* get_TabIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITTABVIEWMODEL_GET_TABICON_OFFSET))(this);
		}
	};
}
