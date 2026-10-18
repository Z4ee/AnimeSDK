#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_116;
class Class_0_16E4307DCC419505_117;
class Class_0_16E4307DCC419505_126;
class Class_0_16E4307DCC419505_167;
class Class_1_6241E1C44338E6DB;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftCraftProgressAttrRadarViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCRAFTPROGRESSATTRRADARVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xD670780)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCRAFTPROGRESSATTRRADARVIEWMODEL_FACTORY__CREATE_B__4_0_OFFSET UNITYSDK_OFFSET(0xD670B90)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCRAFTPROGRESSATTRRADARVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xD670770)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftCraftProgressAttrRadarViewModel_Factory_TypeDefinitionIndex = 79546;

	class MechCraftCraftProgressAttrRadarViewModel_Factory : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_126* _ConstantConfigRepository; // 0x10
		::Class_0_16E4307DCC419505_116* _AttributeDisplayConfigRepository; // 0x18
		::Class_0_16E4307DCC419505_167* _AttributeTypeCompareService; // 0x20

		::System::Void _ctor(::Class_0_16E4307DCC419505_126* a1, ::Class_0_16E4307DCC419505_167* a2, ::Class_0_16E4307DCC419505_116* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_126*, ::Class_0_16E4307DCC419505_167*, ::Class_0_16E4307DCC419505_116*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCRAFTPROGRESSATTRRADARVIEWMODEL_FACTORY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel* Create(::Class_1_6241E1C44338E6DB* a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel*(*)(::PVOID, ::Class_1_6241E1C44338E6DB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCRAFTPROGRESSATTRRADARVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}

		::System::Int32 _Create_b__4_0(::Class_0_16E4307DCC419505_117* a1, ::Class_0_16E4307DCC419505_117* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_117*, ::Class_0_16E4307DCC419505_117*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTCRAFTPROGRESSATTRRADARVIEWMODEL_FACTORY__CREATE_B__4_0_OFFSET))(this, a1, a2);
		}
	};
}
