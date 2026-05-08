#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_SERIALIZATION_PREVIOUSLYSERIALIZEDASATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C1464D0)
#define SIRENIX_SERIALIZATION_PREVIOUSLYSERIALIZEDASATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C1464E0)
#define SIRENIX_SERIALIZATION_PREVIOUSLYSERIALIZEDASATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1464F0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int PreviouslySerializedAsAttribute_TypeDefinitionIndex = 7388;

	class PreviouslySerializedAsAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PREVIOUSLYSERIALIZEDASATTRIBUTE__CTOR_OFFSET))(this, name);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PREVIOUSLYSERIALIZEDASATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PREVIOUSLYSERIALIZEDASATTRIBUTE_SET_NAME_OFFSET))(this, value);
		}
	};
}
