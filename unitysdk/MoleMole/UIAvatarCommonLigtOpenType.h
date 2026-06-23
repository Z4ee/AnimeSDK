#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAvatarShowType.h"

#define MOLEMOLE_UIAVATARCOMMONLIGTOPENTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7A4A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarCommonLigtOpenType_TypeDefinitionIndex = 47110;

	class UIAvatarCommonLigtOpenType : public ::MoleMole::UIAvatarShowType
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCOMMONLIGTOPENTYPE__CTOR_OFFSET))(this);
		}
	};
}
