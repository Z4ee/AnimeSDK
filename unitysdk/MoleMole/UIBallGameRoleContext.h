#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CC95A650FCE7BB57.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_7E6A3ED5019D7E79;

#define MOLEMOLE_UIBALLGAMEROLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A4AF60)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameRoleContext_TypeDefinitionIndex = 71027;

	class UIBallGameRoleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_7E6A3ED5019D7E79* levelData; // 0x28
		::Enum_3_CC95A650FCE7BB57 levelType; // 0x30
		::System::Boolean isFromArchive; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
