#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_89453005EC225A84.h"
#include "unitysdk/Enum_3_D54A5313F8CDCCC2.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_20.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x130154E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageControllerContext_TypeDefinitionIndex = 39805;

	class UIPlayerAccessoryPageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* AvatarIDList; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* SkinIDList; // 0x30
		::System::Int32 InitSkinID; // 0x38
		::System::Int32 AccIndex; // 0x3C
		::Enum_3_D54A5313F8CDCCC2 PageType; // 0x40
		::Enum_3_ED790DAC948A65A9_20 InitSkinType; // 0x44
		::System::Int32 TabID; // 0x48
		::System::Int32 InitAvatarID; // 0x4C
		::Enum_3_89453005EC225A84 SkinPreviewType; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
