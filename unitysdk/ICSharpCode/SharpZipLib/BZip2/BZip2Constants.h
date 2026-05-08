#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2CONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C45C3A0)
#define ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2CONSTANTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C45C390)

namespace ICSharpCode::SharpZipLib::BZip2
{
	inline static constexpr unsigned int BZip2Constants_TypeDefinitionIndex = 6634;

	class BZip2Constants : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_RandomNumbers()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BZip2Constants_TypeDefinitionIndex)->GetStaticField(0x5B60);
		}
		// static const ::System::Int32 BaseBlockSize = 0x186A0; // 0x0
		// static const ::System::Int32 MaximumAlphaSize = 0x102; // 0x0
		// static const ::System::Int32 MaximumCodeLength = 0x17; // 0x0
		// static const ::System::Int32 RunA = 0x0; // 0x0
		// static const ::System::Int32 RunB = 0x1; // 0x0
		// static const ::System::Int32 GroupCount = 0x6; // 0x0
		// static const ::System::Int32 GroupSize = 0x32; // 0x0
		// static const ::System::Int32 NumberOfIterations = 0x4; // 0x0
		// static const ::System::Int32 MaximumSelectors = 0x4652; // 0x0
		// static const ::System::Int32 OvershootBytes = 0x14; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2CONSTANTS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_BZIP2_BZIP2CONSTANTS__CCTOR_OFFSET))();
		}
	};
}
