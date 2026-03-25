#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_HOUDINIENGINEERROR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x845C560)
#define HOUDINIENGINEUNITY_HEU_HOUDINIENGINEERROR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x845C4D0)
#define HOUDINIENGINEUNITY_HEU_HOUDINIENGINEERROR__CTOR_OFFSET UNITYSDK_OFFSET(0x845C450)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniEngineError_TypeDefinitionIndex = 37660;

	class HEU_HoudiniEngineError : public ::System::Exception
	{
	public:
		::System::String* _errorMsg; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIENGINEERROR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* errorMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIENGINEERROR__CTOR_1_OFFSET))(this, errorMsg);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIENGINEERROR_TOSTRING_OFFSET))(this);
		}
	};
}
