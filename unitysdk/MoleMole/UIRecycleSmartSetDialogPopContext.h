#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;
class Class_3_6C318B3EA002D5EB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15101E70)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecycleSmartSetDialogPopContext_TypeDefinitionIndex = 82470;

	class UIRecycleSmartSetDialogPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* SourceItemList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_6C318B3EA002D5EB*>* PlatformDataDict; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
