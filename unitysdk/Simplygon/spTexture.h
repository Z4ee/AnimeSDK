#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/spObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace System { class String; }

#define SIMPLYGON_SPTEXTURE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18378200)
#define SIMPLYGON_SPTEXTURE_GETCPTR_OFFSET UNITYSDK_OFFSET(0x183781E0)
#define SIMPLYGON_SPTEXTURE_SETFILEPATH_OFFSET UNITYSDK_OFFSET(0x18378380)
#define SIMPLYGON_SPTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x18361350)

namespace Simplygon
{
	inline static constexpr unsigned int spTexture_TypeDefinitionIndex = 29572;

	class spTexture : public ::Simplygon::spObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x28

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPTEXTURE__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		static ::System::Runtime::InteropServices::HandleRef getCPtr(::Simplygon::spTexture* obj)
		{
			return ((::System::Runtime::InteropServices::HandleRef(*)(::Simplygon::spTexture*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPTEXTURE_GETCPTR_OFFSET))(obj);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPTEXTURE_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void SetFilePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPTEXTURE_SETFILEPATH_OFFSET))(this, value);
		}
	};
}
