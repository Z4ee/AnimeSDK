#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_HOUDINIENGINEERROR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B42A2E0)
#define HOUDINIENGINEUNITY_HEU_HOUDINIENGINEERROR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B42A250)
#define HOUDINIENGINEUNITY_HEU_HOUDINIENGINEERROR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B42A1D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniEngineError_TypeDefinitionIndex = 39138;

	class HEU_HoudiniEngineError : public ::System::Exception
	{
	public:
		::System::String* _errorMsg; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIENGINEERROR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIENGINEERROR__CTOR_1_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIENGINEERROR_TOSTRING_OFFSET))(this);
		}
	};
}
