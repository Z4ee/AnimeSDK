#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREGISTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E231150)

namespace BinaryTracingFramework::Serialize
{
	inline static constexpr unsigned int SerializeObjectRegister_TypeDefinitionIndex = 33986;

	class SerializeObjectRegister : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_SERIALIZEOBJECTREGISTER__CTOR_OFFSET))(this);
		}
	};
}
