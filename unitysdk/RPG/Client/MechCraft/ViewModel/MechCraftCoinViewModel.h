#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_126;
namespace RPG::Client { class ItemData; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xD66DC50)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD66DD00)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0xD66E7E0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL_REFRESH_OFFSET UNITYSDK_OFFSET(0xD66E0E0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD66E930)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftCoinViewModel_TypeDefinitionIndex = 79418;

	class MechCraftCoinViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::UInt32 _ItemID; // 0x18

		::System::Void _ctor(::Class_0_16E4307DCC419505_126* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_126*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* get_ItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL_GET_ITEMDATA_OFFSET))(this);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL_GET_COUNT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCOINVIEWMODEL_REFRESH_OFFSET))(this);
		}
	};
}
