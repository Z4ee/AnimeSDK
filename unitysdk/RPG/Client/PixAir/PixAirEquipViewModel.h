#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::PixAir { class PixAirEquipmentGhost; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xDAFCA90)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_BURNPOWER_OFFSET UNITYSDK_OFFSET(0xDAFE7E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_CDPROGRESS_OFFSET UNITYSDK_OFFSET(0xDAFF620)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0xDAFF470)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_DAMAGEPOWER_OFFSET UNITYSDK_OFFSET(0xDAFE5E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ENABLEBURN_OFFSET UNITYSDK_OFFSET(0xDAF59D0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ENABLEDAMAGE_OFFSET UNITYSDK_OFFSET(0xDAF5950)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ENABLESHIELD_OFFSET UNITYSDK_OFFSET(0xDAF5990)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0xDAFF290)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDAF58E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ISPLAYEREQUIPPED_OFFSET UNITYSDK_OFFSET(0xDAFF6E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDAFF340)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ONCLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0xDAFF740)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_SHIELDPOWER_OFFSET UNITYSDK_OFFSET(0xDAFE6E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xDAFF3B0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_SKILLDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xDAFF400)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_STARLEVEL_OFFSET UNITYSDK_OFFSET(0xDAF5E30)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_TAGS_OFFSET UNITYSDK_OFFSET(0xDAFF4E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_SET_ENABLEBURN_OFFSET UNITYSDK_OFFSET(0xDAFE850)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_SET_ENABLEDAMAGE_OFFSET UNITYSDK_OFFSET(0xDAFE650)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_SET_ENABLESHIELD_OFFSET UNITYSDK_OFFSET(0xDAFE750)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_SET_ONCLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0xDAFF750)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xDAFE110)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xDAFE130)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL__ONCLICK_OFFSET UNITYSDK_OFFSET(0xDAFF160)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL__ONGHOSTPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xDAFE8E0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipViewModel_TypeDefinitionIndex = 78785;

	class PixAirEquipViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Class_1_5F4D64A4B97E38F9* _UIMessenger; // 0x20
		::RPG::Client::PixAir::PixAirEquipmentGhost* _Ghost; // 0x28
		::Sofa::Core::SimpleCommand* _OnClickCommand_k__BackingField; // 0x30
		::System::Boolean _EnableShield; // 0x38
		::System::Boolean _EnableBurn; // 0x39
		::System::Boolean _EnableDamage; // 0x3A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEquipViewModel* Create(::RPG::Client::PixAir::PixAirEquipmentGhost* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::RPG::Client::PixAir::PixAirEquipViewModel*(*)(::RPG::Client::PixAir::PixAirEquipmentGhost*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void _OnGhostPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL__ONGHOSTPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL__ONCLICK_OFFSET))(this);
		}

		::System::Int32 get_EquipmentID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_EQUIPMENTID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Int32 get_StarLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_STARLEVEL_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::PixAirSlotType get_Size()
		{
			return ((::RPG::GameCore::PixAirSlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_SIZE_OFFSET))(this);
		}

		::System::String* get_SkillDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_SKILLDESCRIPTION_OFFSET))(this);
		}

		::System::Single get_CoolDown()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_COOLDOWN_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* get_Tags()
		{
			return ((::Il2CppArray<::RPG::GameCore::PixAirEquipTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_TAGS_OFFSET))(this);
		}

		::System::Int32 get_DamagePower()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_DAMAGEPOWER_OFFSET))(this);
		}

		::System::Int32 get_ShieldPower()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_SHIELDPOWER_OFFSET))(this);
		}

		::System::Int32 get_BurnPower()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_BURNPOWER_OFFSET))(this);
		}

		::System::Single get_CDProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_CDPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_EnableDamage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ENABLEDAMAGE_OFFSET))(this);
		}

		::System::Void set_EnableDamage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_SET_ENABLEDAMAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ENABLESHIELD_OFFSET))(this);
		}

		::System::Void set_EnableShield(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_SET_ENABLESHIELD_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableBurn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ENABLEBURN_OFFSET))(this);
		}

		::System::Void set_EnableBurn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_SET_ENABLEBURN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayerEquipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ISPLAYEREQUIPPED_OFFSET))(this);
		}

		::Sofa::Core::SimpleCommand* get_OnClickCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ONCLICKCOMMAND_OFFSET))(this);
		}

		::System::Void set_OnClickCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_SET_ONCLICKCOMMAND_OFFSET))(this, a1);
		}
	};
}
