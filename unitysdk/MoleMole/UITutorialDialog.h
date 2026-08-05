#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915;
namespace System { class Action; }

#define MOLEMOLE_UITUTORIALDIALOG_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x15F9C780)
#define MOLEMOLE_UITUTORIALDIALOG_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x15F9C860)
#define MOLEMOLE_UITUTORIALDIALOG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15F9C7E0)
#define MOLEMOLE_UITUTORIALDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x15F9C790)

namespace MoleMole
{
	inline static constexpr unsigned int UITutorialDialog_TypeDefinitionIndex = 68682;

	class UITutorialDialog : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Action* callback; // 0x28
		::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915* popupGroupData; // 0x30
		::System::Boolean _isLoaded; // 0x38
		::System::Boolean isPreload; // 0x39
		::System::Boolean CanCloseOnlyReachEnd; // 0x3A

		::System::Void _ctor(::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915* popupGroupData, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALDIALOG__CTOR_OFFSET))(this, popupGroupData, callback);
		}

		::System::Void _ctor_1(::System::Int32 id, ::System::Action* callback, ::Enum_3_205B03D40B9BD873 page)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::Enum_3_205B03D40B9BD873))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALDIALOG__CTOR_1_OFFSET))(this, id, callback, page);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALDIALOG_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALDIALOG_ONPROCESS_OFFSET))(this);
		}
	};
}
