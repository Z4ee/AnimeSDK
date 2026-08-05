#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2E422E90B3DF8C7E.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_57F7F2BF8C55D6B6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPHOTOWALLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15168E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallContext_TypeDefinitionIndex = 69859;

	class UIPhotoWallContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_57F7F2BF8C55D6B6* CurrentSys; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* FriendSysInfos; // 0x30
		::System::Int32 Index; // 0x38
		::Enum_3_2E422E90B3DF8C7E OpenMode; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
