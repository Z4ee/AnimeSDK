#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_190E3717882702BE.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_372;
class Class_1_546C6222FBEA4460;
class Class_1_C3C988A67054887E;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALFILTERPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADAD80)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralFilterPopContext_TypeDefinitionIndex = 65169;

	class UIGeneralFilterPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_372* filterInstance; // 0x28
		::System::Action_1<::System::Int32>* onDeleteClick; // 0x30
		::System::String* advancedFilterSubTitle; // 0x38
		::System::Action* onWindowFadeout; // 0x40
		::System::Action* onOpen; // 0x48
		::System::Action* onChanged; // 0x50
		::System::Collections::Generic::List_1<::Class_1_546C6222FBEA4460*>* ToggleInfos; // 0x58
		::Class_1_C3C988A67054887E* sortData; // 0x60
		::System::Boolean showForceSetOwnToggle; // 0x68
		::Enum_3_190E3717882702BE showType; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
