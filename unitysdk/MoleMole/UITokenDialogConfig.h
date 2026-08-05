#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITokenShowConfig; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITOKENDIALOGCONFIG_GET_UITYPE_OFFSET UNITYSDK_OFFSET(0x140D4D20)
#define MOLEMOLE_UITOKENDIALOGCONFIG_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x140D4EA0)
#define MOLEMOLE_UITOKENDIALOGCONFIG_METHOD_1_C0B68F31A4F02CDC_OFFSET UNITYSDK_OFFSET(0x140D4F10)
#define MOLEMOLE_UITOKENDIALOGCONFIG_SET_UITYPE_OFFSET UNITYSDK_OFFSET(0x140D4E20)
#define MOLEMOLE_UITOKENDIALOGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x140D4E90)

namespace MoleMole
{
	inline static constexpr unsigned int UITokenDialogConfig_TypeDefinitionIndex = 68378;

	class UITokenDialogConfig : public ::System::Object
	{
	public:
		::System::Type* _UIType; // 0x10
		::System::String* UIName; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>* TokenConfigs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOKENDIALOGCONFIG__CTOR_OFFSET))(this);
		}

		::System::Type* get_UIType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOKENDIALOGCONFIG_GET_UITYPE_OFFSET))(this);
		}

		::System::Void set_UIType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOKENDIALOGCONFIG_SET_UITYPE_OFFSET))(this, a1);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOKENDIALOGCONFIG_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::Type*>* Method_1_C0B68F31A4F02CDC()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOKENDIALOGCONFIG_METHOD_1_C0B68F31A4F02CDC_OFFSET))(this);
		}
	};
}
