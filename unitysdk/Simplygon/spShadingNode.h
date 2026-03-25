#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

#define SIMPLYGON_SPSHADINGNODE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18377190)
#define SIMPLYGON_SPSHADINGNODE_GETCPTR_OFFSET UNITYSDK_OFFSET(0x18370240)
#define SIMPLYGON_SPSHADINGNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18377090)

namespace Simplygon
{
	inline static constexpr unsigned int spShadingNode_TypeDefinitionIndex = 29574;

	class spShadingNode : public ::Simplygon::spObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x28

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSHADINGNODE__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		static ::System::Runtime::InteropServices::HandleRef getCPtr(::Simplygon::spShadingNode* obj)
		{
			return ((::System::Runtime::InteropServices::HandleRef(*)(::Simplygon::spShadingNode*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSHADINGNODE_GETCPTR_OFFSET))(obj);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPSHADINGNODE_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
