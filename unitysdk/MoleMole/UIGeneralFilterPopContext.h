#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_190E3717882702BE_4.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_532;
class Class_1_546C6222FBEA4460;
class Class_1_709BB9A644D884B9;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALFILTERPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1679FB60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralFilterPopContext_TypeDefinitionIndex = 55790;

	class UIGeneralFilterPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* onDeleteClick; // 0x28
		::System::Action* onOpen; // 0x30
		::System::String* advancedFilterSubTitle; // 0x38
		::Class_1_709BB9A644D884B9* sortData; // 0x40
		::System::Action* onChanged; // 0x48
		::Class_0_16E4307DCC419505_532* filterInstance; // 0x50
		::System::Collections::Generic::List_1<::Class_1_546C6222FBEA4460*>* ToggleInfos; // 0x58
		::System::Action* onWindowFadeout; // 0x60
		::System::Boolean showForceSetOwnToggle; // 0x68
		::Enum_3_190E3717882702BE_4 showType; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
