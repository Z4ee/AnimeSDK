#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_REVERSECOMPARE_COMPARE_OFFSET UNITYSDK_OFFSET(0x17F7D650)
#define HOUDINIENGINEUNITY_REVERSECOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x17F7D6B0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int ReverseCompare_TypeDefinitionIndex = 37669;

	class ReverseCompare : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_REVERSECOMPARE__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_REVERSECOMPARE_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}
