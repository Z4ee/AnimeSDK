#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B9002106B360C669.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;
namespace MoleMole { class UIRoleEquipReplaceWidgetController; }

#define MOLEMOLE_UIEQUIPDEVELOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1761BDB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDevelopContext_TypeDefinitionIndex = 83856;

	class UIEquipDevelopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_0D6706375CDAAE8C* ItemDevelopData; // 0x28
		::MoleMole::UIRoleEquipReplaceWidgetController* equipReplaceWidget; // 0x30
		::System::Int32 CloseIndex; // 0x38
		::System::Boolean CloseOpenDialog; // 0x3C
		::Enum_3_B9002106B360C669 Type; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
