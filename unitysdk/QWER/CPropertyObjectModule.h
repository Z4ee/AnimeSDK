#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/CPropertyModule.h"

namespace QWER { class DOnPropertyModuleChanged; }
namespace System { template <typename T> class Action_1; }

#define QWER_CPROPERTYOBJECTMODULE_ONFIELDCHANGED_OFFSET UNITYSDK_OFFSET(0x1C5335C0)
#define QWER_CPROPERTYOBJECTMODULE_SETCHANGEDDELEGATE_OFFSET UNITYSDK_OFFSET(0x1C533630)
#define QWER_CPROPERTYOBJECTMODULE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C5335B0)
#define QWER_CPROPERTYOBJECTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5335A0)

namespace QWER
{
	inline static constexpr unsigned int CPropertyObjectModule_TypeDefinitionIndex = 9680;

	class CPropertyObjectModule : public ::QWER::CPropertyModule
	{
	public:
		::System::Action_1<::System::Byte>* OnChanged; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CPROPERTYOBJECTMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Byte btPropertyTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + QWER_CPROPERTYOBJECTMODULE__CTOR_1_OFFSET))(this, btPropertyTag);
		}

		::System::Void OnFieldChanged(::QWER::CPropertyModule* oModule, ::System::Byte btPropertyTag)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::CPropertyModule*, ::System::Byte))((::PBYTE)hIl2Cpp + QWER_CPROPERTYOBJECTMODULE_ONFIELDCHANGED_OFFSET))(this, oModule, btPropertyTag);
		}

		::System::Void SetChangedDelegate(::QWER::CPropertyObjectModule* oParent, ::QWER::DOnPropertyModuleChanged* cbOnChanged)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::CPropertyObjectModule*, ::QWER::DOnPropertyModuleChanged*))((::PBYTE)hIl2Cpp + QWER_CPROPERTYOBJECTMODULE_SETCHANGEDDELEGATE_OFFSET))(this, oParent, cbOnChanged);
		}
	};
}
