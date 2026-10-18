#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_0_16E4307DCC419505_1639;
class Class_1_1294FEF8E985635C;
class Class_1_9ADBCED7022FBD6A;
class Class_1_DB0D8C97EC270D19;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::ActivityFinalityBattle::Level { class FinalityBattleMazeBuffItem; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_BF01A723AB4005C0;

#define CLASS_2_E90CCA14FBA7BF67_ADD_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1551DCC0)
#define CLASS_2_E90CCA14FBA7BF67_GET_AVATARFEVERDESC_OFFSET UNITYSDK_OFFSET(0x1551E010)
#define CLASS_2_E90CCA14FBA7BF67_GET_CLICKBUFF_OFFSET UNITYSDK_OFFSET(0x1551DCA0)
#define CLASS_2_E90CCA14FBA7BF67_GET_CLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x1551DC80)
#define CLASS_2_E90CCA14FBA7BF67_GET_CURRENTBUFF_OFFSET UNITYSDK_OFFSET(0x1551DEF0)
#define CLASS_2_E90CCA14FBA7BF67_GET_LEADERAVATAR_OFFSET UNITYSDK_OFFSET(0x1551DD80)
#define CLASS_2_E90CCA14FBA7BF67_METHOD_2_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x1551DA40)
#define CLASS_2_E90CCA14FBA7BF67_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1551DEA0)
#define CLASS_2_E90CCA14FBA7BF67_METHOD_2_65568FF244CB95CB_OFFSET UNITYSDK_OFFSET(0x1551DC10)
#define CLASS_2_E90CCA14FBA7BF67_METHOD_2_82E78E5C348471FD_OFFSET UNITYSDK_OFFSET(0x1551DB80)
#define CLASS_2_E90CCA14FBA7BF67_METHOD_2_DF4811E171577469_OFFSET UNITYSDK_OFFSET(0x1551DDA0)
#define CLASS_2_E90CCA14FBA7BF67_METHOD_2_E00BFF76DB51353F_OFFSET UNITYSDK_OFFSET(0x1551DF10)
#define CLASS_2_E90CCA14FBA7BF67_REMOVE_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1551DD20)
#define CLASS_2_E90CCA14FBA7BF67_SET_AVATARFEVERDESC_OFFSET UNITYSDK_OFFSET(0x1551E020)
#define CLASS_2_E90CCA14FBA7BF67_SET_CLICKBUFF_OFFSET UNITYSDK_OFFSET(0x1551DCB0)
#define CLASS_2_E90CCA14FBA7BF67_SET_CLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x1551DC90)
#define CLASS_2_E90CCA14FBA7BF67_SET_CURRENTBUFF_OFFSET UNITYSDK_OFFSET(0x1551DF00)
#define CLASS_2_E90CCA14FBA7BF67_SET_LEADERAVATAR_OFFSET UNITYSDK_OFFSET(0x1551DD90)
#define CLASS_2_E90CCA14FBA7BF67__CTOR_OFFSET UNITYSDK_OFFSET(0x1551D940)

inline static constexpr unsigned int Class_2_E90CCA14FBA7BF67_TypeDefinitionIndex = 82089;

class Class_2_E90CCA14FBA7BF67 : public ::RPG::Client::FateRin::BaseViewModel
{
public:
	::System::Action* OnRefresh; // 0x20
	::RPG::AvatarSystem::IAvatar* _LeaderAvatar_k__BackingField; // 0x28
	::Sofa::Core::SimpleCommand* _ClickClose_k__BackingField; // 0x30
	::Class_0_16E4307DCC419505_1639* LBNAGLIGKIO; // 0x38
	::Class_1_1294FEF8E985635C* GJALMBBNNOF; // 0x40
	::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GPALAPHKDIK; // 0x48
	::System::Collections::Generic::List_1<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*>* NKHCILGCGHE; // 0x50
	::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem* _CurrentBuff_k__BackingField; // 0x58
	::Class_1_9ADBCED7022FBD6A* ADJNOFMEIKM; // 0x60
	::System::String* _AvatarFeverDesc_k__BackingField; // 0x68
	::Class_1_BF01A723AB4005C0<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*>* _ClickBuff_k__BackingField; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_369BB5E7FA6A1768(::Class_1_DB0D8C97EC270D19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DB0D8C97EC270D19*))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67_METHOD_2_369BB5E7FA6A1768_OFFSET))(this, a1);
	}

	::System::Void Method_2_82E78E5C348471FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67_METHOD_2_82E78E5C348471FD_OFFSET))(this);
	}

	::System::Void Method_2_65568FF244CB95CB(::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67_METHOD_2_65568FF244CB95CB_OFFSET))(this, a1);
	}

	::Sofa::Core::SimpleCommand* get_ClickClose()
	{
		return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67_GET_CLICKCLOSE_OFFSET))(this);
	}

	::System::Void set_ClickClose(::Sofa::Core::SimpleCommand* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67_SET_CLICKCLOSE_OFFSET))(this, a1);
	}

	::Class_1_BF01A723AB4005C0<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*>* get_ClickBuff()
	{
		return ((::Class_1_BF01A723AB4005C0<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67_GET_CLICKBUFF_OFFSET))(this);
	}

	::System::Void set_ClickBuff(::Class_1_BF01A723AB4005C0<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BF01A723AB4005C0<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*>*))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67_SET_CLICKBUFF_OFFSET))(this, a1);
	}

	::System::Void add_OnRefresh(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67_ADD_ONREFRESH_OFFSET))(this, a1);
	}

	::System::Void remove_OnRefresh(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67_REMOVE_ONREFRESH_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* get_LeaderAvatar()
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67_GET_LEADERAVATAR_OFFSET))(this);
	}

	::System::Void set_LeaderAvatar(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67_SET_LEADERAVATAR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* Method_2_DF4811E171577469()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67_METHOD_2_DF4811E171577469_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem* get_CurrentBuff()
	{
		return ((::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67_GET_CURRENTBUFF_OFFSET))(this);
	}

	::System::Void set_CurrentBuff(::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67_SET_CURRENTBUFF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*>* Method_2_E00BFF76DB51353F()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67_METHOD_2_E00BFF76DB51353F_OFFSET))(this);
	}

	::System::String* get_AvatarFeverDesc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67_GET_AVATARFEVERDESC_OFFSET))(this);
	}

	::System::Void set_AvatarFeverDesc(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E90CCA14FBA7BF67_SET_AVATARFEVERDESC_OFFSET))(this, a1);
	}
};
