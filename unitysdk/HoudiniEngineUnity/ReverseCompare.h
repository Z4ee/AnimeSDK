#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_REVERSECOMPARE_COMPARE_OFFSET UNITYSDK_OFFSET(0x8CDA100)
#define HOUDINIENGINEUNITY_REVERSECOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x8CDA160)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int ReverseCompare_TypeDefinitionIndex = 43690;

	class ReverseCompare : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_REVERSECOMPARE__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Object* x, ::System::Object* y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_REVERSECOMPARE_COMPARE_OFFSET))(this, x, y);
		}
	};
}
