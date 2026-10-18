#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_114;
class Class_0_16E4307DCC419505_1499;
class Class_0_16E4307DCC419505_156;
class Class_1_2F63565FD6190B4E;
class Class_1_31522EB1D598DA68;
class Class_1_3E8412A97A3D0DF7;
class Class_1_3E8412A97A3D0DF7_1;
class Class_1_5B254097CF00004F;
class Class_1_6C2E97D5633F6538;
class Class_1_B26E06FC40F846CD;
class Class_1_D501FC103C8A2714;
class Class_1_E53D03144907E50F;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftExamSettleViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderSettleViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTSETTLEVIEWMODEL_FACTORY_CREATEFOREXAM_OFFSET UNITYSDK_OFFSET(0xD685AC0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTSETTLEVIEWMODEL_FACTORY_CREATEFORORDER_OFFSET UNITYSDK_OFFSET(0xD6858C0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTSETTLEVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xD685C00)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftSettleViewModel_Factory_TypeDefinitionIndex = 79729;

	class MechCraftSettleViewModel_Factory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTSETTLEVIEWMODEL_FACTORY__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderSettleViewModel* CreateForOrder(::Class_0_16E4307DCC419505_1499* a1, ::Class_1_D501FC103C8A2714* a2, ::Class_1_31522EB1D598DA68* a3, ::Class_1_E53D03144907E50F* a4, ::Class_0_16E4307DCC419505_156* a5, ::Class_1_6C2E97D5633F6538* a6, ::Class_1_3E8412A97A3D0DF7* a7, ::Class_1_5B254097CF00004F* a8, ::Class_1_3E8412A97A3D0DF7_1* a9, ::Class_1_B26E06FC40F846CD* a10, ::Class_1_2F63565FD6190B4E* a11, ::System::UInt32 a12, ::System::UInt32 a13, ::System::Boolean a14)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderSettleViewModel*(*)(::PVOID, ::Class_0_16E4307DCC419505_1499*, ::Class_1_D501FC103C8A2714*, ::Class_1_31522EB1D598DA68*, ::Class_1_E53D03144907E50F*, ::Class_0_16E4307DCC419505_156*, ::Class_1_6C2E97D5633F6538*, ::Class_1_3E8412A97A3D0DF7*, ::Class_1_5B254097CF00004F*, ::Class_1_3E8412A97A3D0DF7_1*, ::Class_1_B26E06FC40F846CD*, ::Class_1_2F63565FD6190B4E*, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTSETTLEVIEWMODEL_FACTORY_CREATEFORORDER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftExamSettleViewModel* CreateForExam(::Class_0_16E4307DCC419505_1499* a1, ::Class_1_D501FC103C8A2714* a2, ::Class_1_31522EB1D598DA68* a3, ::Class_1_E53D03144907E50F* a4, ::Class_1_6C2E97D5633F6538* a5, ::Class_1_3E8412A97A3D0DF7* a6, ::Class_1_3E8412A97A3D0DF7_1* a7, ::Class_0_16E4307DCC419505_114* a8)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftExamSettleViewModel*(*)(::PVOID, ::Class_0_16E4307DCC419505_1499*, ::Class_1_D501FC103C8A2714*, ::Class_1_31522EB1D598DA68*, ::Class_1_E53D03144907E50F*, ::Class_1_6C2E97D5633F6538*, ::Class_1_3E8412A97A3D0DF7*, ::Class_1_3E8412A97A3D0DF7_1*, ::Class_0_16E4307DCC419505_114*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTSETTLEVIEWMODEL_FACTORY_CREATEFOREXAM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
