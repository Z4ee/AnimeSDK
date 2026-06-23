#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMindscapeWidgetController___c__DisplayClass101_0; }
namespace MoleMole { class UserLocalDataItem; }

#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS101_1__CTOR_OFFSET UNITYSDK_OFFSET(0x152F7430)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeWidgetController___c__DisplayClass101_1_TypeDefinitionIndex = 43481;

	class UIMindscapeWidgetController___c__DisplayClass101_1 : public ::System::Object
	{
	public:
		::MoleMole::UserLocalDataItem* localData; // 0x10
		::MoleMole::UIMindscapeWidgetController___c__DisplayClass101_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___C__DISPLAYCLASS101_1__CTOR_OFFSET))(this);
		}
	};
}
