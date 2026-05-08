#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/CPropertyModule.h"

namespace QWER { class CPropertyObjectModule; }
namespace QWER { class DOnPropertyModuleChanged; }

#define QWER_CPROPERTYOBJECT_SETCHANGEDDELEGATE_OFFSET UNITYSDK_OFFSET(0x1C533500)
#define QWER_CPROPERTYOBJECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C532F70)
#define QWER_CPROPERTYOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C532F60)
#define QWER_CPROPERTYOBJECT__FIRECHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x1C532F80)

namespace QWER
{
	inline static constexpr unsigned int CPropertyObject_TypeDefinitionIndex = 9679;

	class CPropertyObject : public ::QWER::CPropertyModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CPROPERTYOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Byte btPropertyTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + QWER_CPROPERTYOBJECT__CTOR_1_OFFSET))(this, btPropertyTag);
		}

		::System::Void _FireChangedEvent(::System::Byte btPropertyTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + QWER_CPROPERTYOBJECT__FIRECHANGEDEVENT_OFFSET))(this, btPropertyTag);
		}

		::System::Void SetChangedDelegate(::QWER::CPropertyObjectModule* oParent, ::QWER::DOnPropertyModuleChanged* cbOnChanged)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::CPropertyObjectModule*, ::QWER::DOnPropertyModuleChanged*))((::PBYTE)hIl2Cpp + QWER_CPROPERTYOBJECT_SETCHANGEDDELEGATE_OFFSET))(this, oParent, cbOnChanged);
		}
	};
}
