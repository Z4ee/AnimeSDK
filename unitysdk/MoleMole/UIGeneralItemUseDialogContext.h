#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALITEMUSEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x162C1FD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemUseDialogContext_TypeDefinitionIndex = 68033;

	class UIGeneralItemUseDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_0D6706375CDAAE8C* itemData; // 0x28
		::System::Action_1<::System::Int32>* useAction; // 0x30
		::System::String* titleText; // 0x38
		::System::Int32 maxUseCount; // 0x40
		::System::Boolean showInputField; // 0x44
		::System::Int32 expectedInitCount; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
