#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::PixAir { class PixAirEquipmentGhost; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1C83DEA0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_GET_CLOSECOMMAND_OFFSET UNITYSDK_OFFSET(0x1C83E5E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x1C83D9E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C83E3A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_GET_ISPLAYEREQUIPPED_OFFSET UNITYSDK_OFFSET(0x1C834070)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C83D900)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_GET_SKILLDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1C83D970)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_GET_STARLEVEL_OFFSET UNITYSDK_OFFSET(0x1C83E450)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x1C83DBA0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_SET_CLOSECOMMAND_OFFSET UNITYSDK_OFFSET(0x1C83E5F0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C83DF60)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0x1C83DF80)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL__ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1C83E250)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL__ONGHOSTPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1C83E0F0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipInfoViewModel_TypeDefinitionIndex = 78782;

	class PixAirEquipInfoViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::PixAir::PixAirEquipmentGhost* _Ghost; // 0x20
		::Sofa::Core::SimpleCommand* _CloseCommand_k__BackingField; // 0x28
		::Class_1_5F4D64A4B97E38F9* _UIMessenger; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEquipInfoViewModel* Create(::RPG::Client::PixAir::PixAirEquipmentGhost* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::RPG::Client::PixAir::PixAirEquipInfoViewModel*(*)(::RPG::Client::PixAir::PixAirEquipmentGhost*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void _OnGhostPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL__ONGHOSTPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL__ONCLOSE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Int32 get_StarLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_GET_STARLEVEL_OFFSET))(this);
		}

		::System::String* get_SkillDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_GET_SKILLDESCRIPTION_OFFSET))(this);
		}

		::System::Single get_CoolDown()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_GET_COOLDOWN_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* get_Tags()
		{
			return ((::Il2CppArray<::RPG::GameCore::PixAirEquipTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_GET_TAGS_OFFSET))(this);
		}

		::Sofa::Core::SimpleCommand* get_CloseCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_GET_CLOSECOMMAND_OFFSET))(this);
		}

		::System::Void set_CloseCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_SET_CLOSECOMMAND_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayerEquipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPINFOVIEWMODEL_GET_ISPLAYEREQUIPPED_OFFSET))(this);
		}
	};
}
