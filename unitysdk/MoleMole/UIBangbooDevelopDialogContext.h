#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D2F9C9EC7859C427.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_3BB4FDB082E23A99;

#define MOLEMOLE_UIBANGBOODEVELOPDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19308060)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooDevelopDialogContext_TypeDefinitionIndex = 43918;

	class UIBangbooDevelopDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_3BB4FDB082E23A99* data; // 0x28
		::Enum_3_D2F9C9EC7859C427 _subType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
