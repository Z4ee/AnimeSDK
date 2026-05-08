#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITOWERBUFFLISTDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1340FA90)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerBuffListDialogContext_TypeDefinitionIndex = 82845;

	class UITowerBuffListDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* equipList; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* lockEquipList; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* totalEquipList; // 0x38
		::System::String* titleKey; // 0x40
		::System::Int32 totalSelectCount; // 0x48
		::System::Int32 enhanceType; // 0x4C
		::System::Int32 questid; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERBUFFLISTDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
