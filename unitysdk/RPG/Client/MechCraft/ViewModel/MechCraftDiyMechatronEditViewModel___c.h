#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_131;
class Class_0_16E4307DCC419505_137;
class Class_0_16E4307DCC419505_138;
namespace RPG::Client::MechCraft::ViewModel { class IMechCraftDiyMechatronColorItemViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class IMechCraftDiyMechatronEffectItemViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class IMechCraftDiyMechatronPoseItemViewModel; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD67CCE0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD67CD20)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___CTOR_B__71_0_OFFSET UNITYSDK_OFFSET(0xD67CD30)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___CTOR_B__71_1_OFFSET UNITYSDK_OFFSET(0xD67CD90)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___CTOR_B__71_2_OFFSET UNITYSDK_OFFSET(0xD67CDF0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___SAVE_B__84_1_OFFSET UNITYSDK_OFFSET(0xD67CE50)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftDiyMechatronEditViewModel___c_TypeDefinitionIndex = 79609;

	class MechCraftDiyMechatronEditViewModel___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__84_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(MechCraftDiyMechatronEditViewModel___c_TypeDefinitionIndex)->GetStaticField(0x56850);
		}
		static ::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronEditViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::MechCraft::ViewModel::MechCraftDiyMechatronEditViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(MechCraftDiyMechatronEditViewModel___c_TypeDefinitionIndex)->GetStaticField(0x56858);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_131*, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronEffectItemViewModel*>** StaticGet___9__71_2()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_131*, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronEffectItemViewModel*>**)Il2CppClass::FromTypeDefinitionIndex(MechCraftDiyMechatronEditViewModel___c_TypeDefinitionIndex)->GetStaticField(0x56860);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_137*, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronPoseItemViewModel*>** StaticGet___9__71_0()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_137*, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronPoseItemViewModel*>**)Il2CppClass::FromTypeDefinitionIndex(MechCraftDiyMechatronEditViewModel___c_TypeDefinitionIndex)->GetStaticField(0x56868);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_138*, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronColorItemViewModel*>** StaticGet___9__71_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_138*, ::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronColorItemViewModel*>**)Il2CppClass::FromTypeDefinitionIndex(MechCraftDiyMechatronEditViewModel___c_TypeDefinitionIndex)->GetStaticField(0x56870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronPoseItemViewModel* __ctor_b__71_0(::Class_0_16E4307DCC419505_137* a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronPoseItemViewModel*(*)(::PVOID, ::Class_0_16E4307DCC419505_137*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___CTOR_B__71_0_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronColorItemViewModel* __ctor_b__71_1(::Class_0_16E4307DCC419505_138* a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronColorItemViewModel*(*)(::PVOID, ::Class_0_16E4307DCC419505_138*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___CTOR_B__71_1_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronEffectItemViewModel* __ctor_b__71_2(::Class_0_16E4307DCC419505_131* a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::IMechCraftDiyMechatronEffectItemViewModel*(*)(::PVOID, ::Class_0_16E4307DCC419505_131*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___CTOR_B__71_2_OFFSET))(this, a1);
		}

		::System::Void __Save_b__84_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTDIYMECHATRONEDITVIEWMODEL___C___SAVE_B__84_1_OFFSET))(this, a1);
		}
	};
}
