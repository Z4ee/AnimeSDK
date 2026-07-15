#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDESCLISTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A76D4E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDESCLISTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A76D060)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDESCLISTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A76CF70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDESCLISTCONTROL__ONNEWITEM_OFFSET UNITYSDK_OFFSET(0x1A76D210)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewDescListControl_TypeDefinitionIndex = 75469;

	class LimaoNewsInterviewDescListControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::StaticListView* _ListView; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDESCLISTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDESCLISTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDESCLISTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* _OnNewItem(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDESCLISTCONTROL__ONNEWITEM_OFFSET))(this, a1, a2, a3);
		}
	};
}
