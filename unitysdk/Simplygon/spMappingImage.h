#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

#define SIMPLYGON_SPMAPPINGIMAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1836DF90)
#define SIMPLYGON_SPMAPPINGIMAGE_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1836CAF0)
#define SIMPLYGON_SPMAPPINGIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1836DE90)

namespace Simplygon
{
	inline static constexpr unsigned int spMappingImage_TypeDefinitionIndex = 29554;

	class spMappingImage : public ::Simplygon::spObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x28

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMAPPINGIMAGE__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		static ::System::Runtime::InteropServices::HandleRef getCPtr(::Simplygon::spMappingImage* obj)
		{
			return ((::System::Runtime::InteropServices::HandleRef(*)(::Simplygon::spMappingImage*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMAPPINGIMAGE_GETCPTR_OFFSET))(obj);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMAPPINGIMAGE_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
