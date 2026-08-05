#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALITEMSUBMITDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x199B23E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemSubmitDialogContext_TypeDefinitionIndex = 49020;

	class UIGeneralItemSubmitDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_0D6706375CDAAE8C* ItemData; // 0x28
		::System::String* TitleTextKey; // 0x30
		::System::String* DescTextKey; // 0x38
		::System::Action_1<::System::Int32>* SubmitAction; // 0x40
		::System::Action* CancelAction; // 0x48
		::System::Int32 MaxSubmitCount; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMSUBMITDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
