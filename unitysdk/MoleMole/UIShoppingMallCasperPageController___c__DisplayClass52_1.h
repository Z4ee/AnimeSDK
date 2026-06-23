#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F57D00757009D1EB;
namespace MoleMole { class UIShoppingMallCasperPageController___c__DisplayClass52_0; }

#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__DISPLAYCLASS52_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15F3C0A0)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__DISPLAYCLASS52_1__DOBUY_B__0_OFFSET UNITYSDK_OFFSET(0x15F3C0B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallCasperPageController___c__DisplayClass52_1_TypeDefinitionIndex = 64363;

	class UIShoppingMallCasperPageController___c__DisplayClass52_1 : public ::System::Object
	{
	public:
		::Class_1_F57D00757009D1EB* curGoods; // 0x10
		::MoleMole::UIShoppingMallCasperPageController___c__DisplayClass52_0* CS___8__locals1; // 0x18
		::System::UInt32 tabDataId; // 0x20
		::System::UInt32 goodsId; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__DISPLAYCLASS52_1__CTOR_OFFSET))(this);
		}

		::System::Void _DoBuy_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__DISPLAYCLASS52_1__DOBUY_B__0_OFFSET))(this);
		}
	};
}
