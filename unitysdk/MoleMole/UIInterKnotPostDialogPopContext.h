#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIInterKnotPostDialogPopContext_EOpenMode.h"

class Class_3_854C71C0BEC81CDA;
class Class_3_E342D954CB576697;
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15723DB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostDialogPopContext_TypeDefinitionIndex = 77083;

	class UIInterKnotPostDialogPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnHide; // 0x28
		::System::String* from; // 0x30
		::Class_3_E342D954CB576697* PostData; // 0x38
		::Class_3_854C71C0BEC81CDA* FansChangeInfo; // 0x40
		::MoleMole::UIInterKnotPostDialogPopContext_EOpenMode OpenMode; // 0x48
		::System::Boolean ClientPost; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
