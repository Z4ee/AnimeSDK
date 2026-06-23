#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9C9C20)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x9C9B40)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9C9A90)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x9C9CE0)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_METHOD_2_7B1F794631F58D6D_OFFSET UNITYSDK_OFFSET(0x1CF6C230)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x9C9D50)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9C99E0)

namespace BinaryBundleLib::Runtime
{
	inline static constexpr unsigned int BinaryBundleFileInfo_TypeDefinitionIndex = 33860;

	struct alignas(8) BinaryBundleFileInfo
	{
		::System::String* path; // 0x10
		::System::Int64 offset; // 0x18
		::System::UInt64 _pathHash; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BinaryBundleLib::Runtime::BinaryBundleFileInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
		}

		::System::Int32 Method_2_95780ED94B90ED36()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_METHOD_2_95780ED94B90ED36_OFFSET))(this);
		}

		static ::System::Boolean Method_2_7B1F794631F58D6D(::BinaryBundleLib::Runtime::BinaryBundleFileInfo a1, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo a2)
		{
			return ((::System::Boolean(*)(::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_METHOD_2_7B1F794631F58D6D_OFFSET))(a1, a2);
		}
	};
}
