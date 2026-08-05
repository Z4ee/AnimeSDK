#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FOUNDATION_BUNDLELOADINFO_GETFILEPATH_OFFSET UNITYSDK_OFFSET(0x8CA7A0)
#define FOUNDATION_BUNDLELOADINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B83F810)
#define FOUNDATION_BUNDLELOADINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x3D1A00)

namespace Foundation
{
	inline static constexpr unsigned int BundleLoadInfo_TypeDefinitionIndex = 8115;

	struct alignas(8) BundleLoadInfo
	{
		static ::Foundation::BundleLoadInfo* StaticGet_None()
		{
			return (::Foundation::BundleLoadInfo*)Il2CppClass::FromTypeDefinitionIndex(BundleLoadInfo_TypeDefinitionIndex)->GetStaticField(0x7240);
		}
		::System::String* folderPath; // 0x10
		::System::UInt64 fileNameHash; // 0x18
		::System::UInt64 offset; // 0x20
		::System::String* ext; // 0x28
		::System::UInt64 filesize; // 0x30

		::System::Void _ctor(::System::String* folderPath, ::System::UInt64 fileNameHash, ::System::UInt64 offset, ::System::String* ext, ::System::UInt64 filesize)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64, ::System::UInt64, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLELOADINFO__CTOR_OFFSET))(this, folderPath, fileNameHash, offset, ext, filesize);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLELOADINFO__CCTOR_OFFSET))();
		}

		::System::String* GetFilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLELOADINFO_GETFILEPATH_OFFSET))(this);
		}
	};
}
