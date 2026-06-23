#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITowerDefenseLevelPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157C5810)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS14_0__ONSTART_B__0_OFFSET UNITYSDK_OFFSET(0x157C5820)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseLevelPageController___c__DisplayClass14_0_TypeDefinitionIndex = 82782;

	class UITowerDefenseLevelPageController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MoleMole::UITowerDefenseLevelPageController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* dataList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnStart_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS14_0__ONSTART_B__0_OFFSET))(this);
		}
	};
}
