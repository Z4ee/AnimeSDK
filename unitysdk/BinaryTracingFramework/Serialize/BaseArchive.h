#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BINARYTRACINGFRAMEWORK_SERIALIZE_BASEARCHIVE_GET_ARISLOADING_OFFSET UNITYSDK_OFFSET(0x1E22FDA0)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_BASEARCHIVE_SET_ARISLOADING_OFFSET UNITYSDK_OFFSET(0x1E22FDB0)
#define BINARYTRACINGFRAMEWORK_SERIALIZE_BASEARCHIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E22FDC0)

namespace BinaryTracingFramework::Serialize
{
	inline static constexpr unsigned int BaseArchive_TypeDefinitionIndex = 33972;

	class BaseArchive : public ::System::Object
	{
	public:
		::System::Boolean _ArIsLoading_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_BASEARCHIVE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ArIsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_BASEARCHIVE_GET_ARISLOADING_OFFSET))(this);
		}

		::System::Void set_ArIsLoading(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BINARYTRACINGFRAMEWORK_SERIALIZE_BASEARCHIVE_SET_ARISLOADING_OFFSET))(this, value);
		}
	};
}
