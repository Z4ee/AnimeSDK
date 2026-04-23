#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWDESCLISTCONTROL_METHOD_6_933A237F9F33FB1E_OFFSET UNITYSDK_OFFSET(0xA746E50)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWDESCLISTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xA7471F0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWDESCLISTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA746D40)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWDESCLISTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA746C20)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWDESCLISTCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA747260)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWDESCLISTCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA747200)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsInterviewDescListControl_TypeDefinitionIndex = 68443;

	class LimaoNewsInterviewDescListControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::StaticListView* Field_6_0; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWDESCLISTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWDESCLISTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWDESCLISTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* Method_6_933A237F9F33FB1E(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWDESCLISTCONTROL_METHOD_6_933A237F9F33FB1E_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWDESCLISTCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSINTERVIEWDESCLISTCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
