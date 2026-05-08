#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define QWER_CPROPERTYTYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C533910)
#define QWER_CPROPERTYTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C533F50)

namespace QWER
{
	inline static constexpr unsigned int CPropertyType_TypeDefinitionIndex = 9682;

	class CPropertyType : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + QWER_CPROPERTYTYPE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CPROPERTYTYPE__CTOR_OFFSET))(this);
		}
	};
}
