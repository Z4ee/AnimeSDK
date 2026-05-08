#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryBundleLib/Runtime/BinaryBundleFileInfo.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x928130)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x928120)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x928110)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x928320)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x9282B0)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x3B1040)

namespace BinaryBundleLib::Runtime
{
	inline static constexpr unsigned int BinaryBundleFileEntryInfo_TypeDefinitionIndex = 32375;

	struct alignas(8) BinaryBundleFileEntryInfo
	{
		::BinaryBundleLib::Runtime::BinaryBundleFileInfo bundleFileInfo; // 0x10
		::Foundation::AssetPath assetPath; // 0x28

		::System::Void _ctor(::BinaryBundleLib::Runtime::BinaryBundleFileInfo a1, ::Foundation::AssetPath a2)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 Method_2_95780ED94B90ED36()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_METHOD_2_95780ED94B90ED36_OFFSET))(this);
		}

		::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
		}
	};
}
