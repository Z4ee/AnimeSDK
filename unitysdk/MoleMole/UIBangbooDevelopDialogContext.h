#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D2F9C9EC7859C427.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_6DA22669E4D1C4BF;

#define MOLEMOLE_UIBANGBOODEVELOPDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B43910)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooDevelopDialogContext_TypeDefinitionIndex = 71074;

	class UIBangbooDevelopDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_6DA22669E4D1C4BF* data; // 0x28
		::Enum_3_D2F9C9EC7859C427 _subType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
