#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B9002106B360C669.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;
namespace MoleMole { class UIRoleEquipReplaceWidgetController; }

#define MOLEMOLE_UIEQUIPDEVELOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1517E990)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDevelopContext_TypeDefinitionIndex = 82205;

	class UIEquipDevelopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIRoleEquipReplaceWidgetController* equipReplaceWidget; // 0x28
		::Class_1_0D6706375CDAAE8C* ItemDevelopData; // 0x30
		::System::Boolean CloseOpenDialog; // 0x38
		::System::Int32 CloseIndex; // 0x3C
		::Enum_3_B9002106B360C669 Type; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
