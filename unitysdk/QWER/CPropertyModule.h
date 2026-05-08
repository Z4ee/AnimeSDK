#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CPropertyObjectModule; }
namespace QWER { class DOnPropertyModuleChanged; }

#define QWER_CPROPERTYMODULE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C532F50)
#define QWER_CPROPERTYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C532F40)

namespace QWER
{
	inline static constexpr unsigned int CPropertyModule_TypeDefinitionIndex = 9678;

	class CPropertyModule : public ::System::Object
	{
	public:
		::QWER::DOnPropertyModuleChanged* m_cbChangedDelegate; // 0x10
		::System::Byte PropertyTag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CPROPERTYMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Byte btPropertyTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + QWER_CPROPERTYMODULE__CTOR_1_OFFSET))(this, btPropertyTag);
		}
	};
}
