#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D4F14A9976FAEBF1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TimelineBindingType.h"

namespace System { class String; }

#define MOLEMOLE_CGRUNTIMEREFERENCE_GET_ISPART_OFFSET UNITYSDK_OFFSET(0x12EE1D70)
#define MOLEMOLE_CGRUNTIMEREFERENCE_METHOD_1_CDBBBEDA8FAD14D1_OFFSET UNITYSDK_OFFSET(0x12EE1E60)
#define MOLEMOLE_CGRUNTIMEREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x12EE1E10)

namespace MoleMole
{
	inline static constexpr unsigned int CGRuntimeReference_TypeDefinitionIndex = 42610;

	class CGRuntimeReference : public ::System::Object
	{
	public:
		::System::String* RelatePath; // 0x10
		::System::String* trackGuid; // 0x18
		::Enum_3_D4F14A9976FAEBF1 bindType; // 0x20
		::TimelineBindingType BindType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CGRUNTIMEREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CGRUNTIMEREFERENCE_GET_ISPART_OFFSET))(this);
		}

		::TimelineBindingType Method_1_CDBBBEDA8FAD14D1()
		{
			return ((::TimelineBindingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CGRUNTIMEREFERENCE_METHOD_1_CDBBBEDA8FAD14D1_OFFSET))(this);
		}
	};
}
