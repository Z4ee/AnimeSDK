#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftDiyEditItemViewModelBase.h"

class Class_0_16E4307DCC419505_138;
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONCOLORITEMVIEWMODEL_GET_MATERIALPATH_OFFSET UNITYSDK_OFFSET(0xD67A6D0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONCOLORITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD67A6E0)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiyMechatronColorItemViewModel_TypeDefinitionIndex = 79603;

	class MechCraftDiyMechatronColorItemViewModel : public ::RPG::Client::MechCraft::ViewModel::MechCraftDiyEditItemViewModelBase
	{
	public:
		::System::String* _MaterialPath_k__BackingField; // 0x20

		::System::Void _ctor(::Class_0_16E4307DCC419505_138* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_138*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONCOLORITEMVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_MaterialPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONCOLORITEMVIEWMODEL_GET_MATERIALPATH_OFFSET))(this);
		}
	};
}
