#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_1500;
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client::MechCraft::View { class MechCraftOrderMainTargetControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderMainTargetViewModel; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD646060)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_METHOD_5_26079465E46E532C_OFFSET UNITYSDK_OFFSET(0xD646240)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_METHOD_5_9B7E699BE1A5969A_OFFSET UNITYSDK_OFFSET(0xD646120)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_METHOD_5_A8F9136120FCBF8F_OFFSET UNITYSDK_OFFSET(0xD6465D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_METHOD_5_CB436AB4E3FC7CF0_OFFSET UNITYSDK_OFFSET(0xD6466E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_METHOD_5_F90DA0F144FCC521_OFFSET UNITYSDK_OFFSET(0xD646370)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_METHOD_5_FECCA0E420BA9D53_OFFSET UNITYSDK_OFFSET(0xD646AA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD6460A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD646C00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL___REFRESH_B__9_0_OFFSET UNITYSDK_OFFSET(0xD646C10)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderMainTargetControl_TypeDefinitionIndex = 79990;

	class MechCraftOrderMainTargetControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel* LFGMLJCCPCH; // 0x18
		::System::Boolean PHBCJPCHDHC; // 0x20
		::RPG::Client::MechCraft::View::MechCraftOrderMainTargetControlBinder* _Binder; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void Method_5_26079465E46E532C(::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_METHOD_5_26079465E46E532C_OFFSET))(this, a1);
		}

		::System::Void Method_5_9B7E699BE1A5969A(::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_METHOD_5_9B7E699BE1A5969A_OFFSET))(this, a1);
		}

		::System::Void Method_5_A8F9136120FCBF8F(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_METHOD_5_A8F9136120FCBF8F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_F90DA0F144FCC521(::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_METHOD_5_F90DA0F144FCC521_OFFSET))(this, a1);
		}

		::System::Void Method_5_CB436AB4E3FC7CF0(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1500*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1500*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_METHOD_5_CB436AB4E3FC7CF0_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* Method_5_FECCA0E420BA9D53(::RPG::Client::StaticListView* a1, ::Class_0_16E4307DCC419505_1500* a2)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::RPG::Client::StaticListView*, ::Class_0_16E4307DCC419505_1500*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_METHOD_5_FECCA0E420BA9D53_OFFSET))(this, a1, a2);
		}

		::RPG::Client::StaticListViewItem* __Refresh_b__9_0(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL___REFRESH_B__9_0_OFFSET))(this, a1, a2, a3);
		}
	};
}
