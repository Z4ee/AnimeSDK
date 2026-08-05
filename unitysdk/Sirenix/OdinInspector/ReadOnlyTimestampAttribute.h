#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ShowInInspectorAttribute.h"
#include "unitysdk/Sirenix/OdinInspector/TimestampType.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_READONLYTIMESTAMPATTRIBUTE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D5AD580)
#define SIRENIX_ODININSPECTOR_READONLYTIMESTAMPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AD590)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ReadOnlyTimestampAttribute_TypeDefinitionIndex = 8090;

	class ReadOnlyTimestampAttribute : public ::Sirenix::OdinInspector::ShowInInspectorAttribute
	{
	public:
		::System::String* Format; // 0x10
		::Sirenix::OdinInspector::TimestampType _Type_k__BackingField; // 0x18

		::System::Void _ctor(::Sirenix::OdinInspector::TimestampType type)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::TimestampType))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_READONLYTIMESTAMPATTRIBUTE__CTOR_OFFSET))(this, type);
		}

		::Sirenix::OdinInspector::TimestampType get_Type()
		{
			return ((::Sirenix::OdinInspector::TimestampType(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_READONLYTIMESTAMPATTRIBUTE_GET_TYPE_OFFSET))(this);
		}
	};
}
