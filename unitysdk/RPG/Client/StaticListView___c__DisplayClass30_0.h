#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_STATICLISTVIEW___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A507530)
#define RPG_CLIENT_STATICLISTVIEW___C__DISPLAYCLASS30_0__INIT_B__0_OFFSET UNITYSDK_OFFSET(0x1A510C60)

namespace RPG::Client
{
	inline static constexpr unsigned int StaticListView___c__DisplayClass30_0_TypeDefinitionIndex = 72583;

	class StaticListView___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Func_3<::RPG::Client::StaticListView*, ::System::Int32, ::RPG::Client::StaticListViewItem*>* onGetItemByIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* _Init_b__0(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW___C__DISPLAYCLASS30_0__INIT_B__0_OFFSET))(this, a1, a2, a3);
		}
	};
}
