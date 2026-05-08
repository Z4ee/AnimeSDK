#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2271A294FCCB3EAE.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMINIUIGAMESIMPLECONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14844130)
#define MOLEMOLE_UIMINIUIGAMESIMPLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14844120)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniUIGameSimpleContext_TypeDefinitionIndex = 59950;

	class UIMiniUIGameSimpleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_2271A294FCCB3EAE GameType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMESIMPLECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMESIMPLECONTEXT__CTOR_1_OFFSET))(this, groupID);
		}
	};
}
