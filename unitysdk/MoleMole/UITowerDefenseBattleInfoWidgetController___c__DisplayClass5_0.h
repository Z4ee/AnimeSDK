#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8575301325873662;
namespace System { class String; }

#define MOLEMOLE_UITOWERDEFENSEBATTLEINFOWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1303D230)
#define MOLEMOLE_UITOWERDEFENSEBATTLEINFOWIDGETCONTROLLER___C__DISPLAYCLASS5_0__GETBUFF_G__GETDATADESC_0_OFFSET UNITYSDK_OFFSET(0x1303D240)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseBattleInfoWidgetController___c__DisplayClass5_0_TypeDefinitionIndex = 70598;

	class UITowerDefenseBattleInfoWidgetController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::Class_1_8575301325873662* templateMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEBATTLEINFOWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::String* _GetBuff_g__GetDataDesc_0(::System::Int32 id)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEBATTLEINFOWIDGETCONTROLLER___C__DISPLAYCLASS5_0__GETBUFF_G__GETDATADESC_0_OFFSET))(this, id);
		}
	};
}
