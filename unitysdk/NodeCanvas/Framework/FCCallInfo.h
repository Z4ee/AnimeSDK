#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NODECANVAS_FRAMEWORK_FCCALLINFO_ADDCALLCOUNT_OFFSET UNITYSDK_OFFSET(0x1DB9AF60)
#define NODECANVAS_FRAMEWORK_FCCALLINFO_GET_CALLCOUNT_OFFSET UNITYSDK_OFFSET(0x1DB9AF40)
#define NODECANVAS_FRAMEWORK_FCCALLINFO_SET_CALLCOUNT_OFFSET UNITYSDK_OFFSET(0x1DB9AF50)
#define NODECANVAS_FRAMEWORK_FCCALLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9AF70)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int FCCallInfo_TypeDefinitionIndex = 29490;

	class FCCallInfo : public ::System::Object
	{
	public:
		::System::Int32 _CallCount_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLINFO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_CallCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLINFO_GET_CALLCOUNT_OFFSET))(this);
		}

		::System::Void set_CallCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLINFO_SET_CALLCOUNT_OFFSET))(this, value);
		}

		::System::Void AddCallCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLINFO_ADDCALLCOUNT_OFFSET))(this);
		}
	};
}
