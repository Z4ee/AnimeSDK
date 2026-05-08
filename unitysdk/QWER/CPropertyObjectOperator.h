#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CPropertyModule; }
namespace QWER { class CPropertyObjectModule; }
namespace QWER { class DOnPropertyModuleChanged; }

#define QWER_CPROPERTYOBJECTOPERATOR_SETCHANGEDDELEGATE_OFFSET UNITYSDK_OFFSET(0x1C533700)
#define QWER_CPROPERTYOBJECTOPERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C533730)

namespace QWER
{
	inline static constexpr unsigned int CPropertyObjectOperator_TypeDefinitionIndex = 9681;

	class CPropertyObjectOperator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CPROPERTYOBJECTOPERATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void SetChangedDelegate(::QWER::CPropertyModule* oObject, ::QWER::CPropertyObjectModule* oParent, ::QWER::DOnPropertyModuleChanged* cbOnChanged)
		{
			return ((::System::Void(*)(::QWER::CPropertyModule*, ::QWER::CPropertyObjectModule*, ::QWER::DOnPropertyModuleChanged*))((::PBYTE)hIl2Cpp + QWER_CPROPERTYOBJECTOPERATOR_SETCHANGEDDELEGATE_OFFSET))(oObject, oParent, cbOnChanged);
		}
	};
}
