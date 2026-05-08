#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS_CONVERTTOARRAY_1_OFFSET UNITYSDK_OFFSET(0x1C257C00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS_CONVERTTOARRAY_OFFSET UNITYSDK_OFFSET(0x1C256D40)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS_CONVERTTOSTRINGEXT_1_OFFSET UNITYSDK_OFFSET(0x1C257AA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS_CONVERTTOSTRINGEXT_OFFSET UNITYSDK_OFFSET(0x1C257940)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS_CONVERTTOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C2578D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS_CONVERTTOSTRING_OFFSET UNITYSDK_OFFSET(0x1C2577D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS_GET_DEFAULTCODEPAGE_OFFSET UNITYSDK_OFFSET(0x1C257710)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS_SET_DEFAULTCODEPAGE_OFFSET UNITYSDK_OFFSET(0x1C257770)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C257D60)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C257D50)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipConstants_TypeDefinitionIndex = 6715;

	class ZipConstants : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_defaultCodePage()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ZipConstants_TypeDefinitionIndex)->GetStaticField(0x3160);
		}
		// static const ::System::Int32 VersionMadeBy = 0x33; // 0x0
		// static const ::System::Int32 VERSION_MADE_BY = 0x33; // 0x0
		// static const ::System::Int32 VersionStrongEncryption = 0x32; // 0x0
		// static const ::System::Int32 VERSION_STRONG_ENCRYPTION = 0x32; // 0x0
		// static const ::System::Int32 VERSION_AES = 0x33; // 0x0
		// static const ::System::Int32 VersionZip64 = 0x2D; // 0x0
		// static const ::System::Int32 LocalHeaderBaseSize = 0x1E; // 0x0
		// static const ::System::Int32 LOCHDR = 0x1E; // 0x0
		// static const ::System::Int32 Zip64DataDescriptorSize = 0x18; // 0x0
		// static const ::System::Int32 DataDescriptorSize = 0x10; // 0x0
		// static const ::System::Int32 EXTHDR = 0x10; // 0x0
		// static const ::System::Int32 CentralHeaderBaseSize = 0x2E; // 0x0
		// static const ::System::Int32 CENHDR = 0x2E; // 0x0
		// static const ::System::Int32 EndOfCentralRecordBaseSize = 0x16; // 0x0
		// static const ::System::Int32 ENDHDR = 0x16; // 0x0
		// static const ::System::Int32 CryptoHeaderSize = 0xC; // 0x0
		// static const ::System::Int32 CRYPTO_HEADER_SIZE = 0xC; // 0x0
		// static const ::System::Int32 LocalHeaderSignature = 0x4034B50; // 0x0
		// static const ::System::Int32 LOCSIG = 0x4034B50; // 0x0
		// static const ::System::Int32 SpanningSignature = 0x8074B50; // 0x0
		// static const ::System::Int32 Field_1_20 = 0x8074B50; // 0x0
		// static const ::System::Int32 SpanningTempSignature = 0x30304B50; // 0x0
		// static const ::System::Int32 Field_1_22 = 0x30304B50; // 0x0
		// static const ::System::Int32 DataDescriptorSignature = 0x8074B50; // 0x0
		// static const ::System::Int32 EXTSIG = 0x8074B50; // 0x0
		// static const ::System::Int32 CENSIG = 0x2014B50; // 0x0
		// static const ::System::Int32 CentralHeaderSignature = 0x2014B50; // 0x0
		// static const ::System::Int32 Zip64CentralFileHeaderSignature = 0x6064B50; // 0x0
		// static const ::System::Int32 CENSIG64 = 0x6064B50; // 0x0
		// static const ::System::Int32 Zip64CentralDirLocatorSignature = 0x7064B50; // 0x0
		// static const ::System::Int32 ArchiveExtraDataSignature = 0x7064B50; // 0x0
		// static const ::System::Int32 CentralHeaderDigitalSignature = 0x5054B50; // 0x0
		// static const ::System::Int32 CENDIGITALSIG = 0x5054B50; // 0x0
		// static const ::System::Int32 EndOfCentralDirectorySignature = 0x6054B50; // 0x0
		// static const ::System::Int32 ENDSIG = 0x6054B50; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_DefaultCodePage()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS_GET_DEFAULTCODEPAGE_OFFSET))();
		}

		static ::System::Void set_DefaultCodePage(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS_SET_DEFAULTCODEPAGE_OFFSET))(value);
		}

		static ::System::String* ConvertToString(::Il2CppArray<::System::Byte>* data, ::System::Int32 count)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS_CONVERTTOSTRING_OFFSET))(data, count);
		}

		static ::System::String* ConvertToString_1(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS_CONVERTTOSTRING_1_OFFSET))(data);
		}

		static ::System::String* ConvertToStringExt(::System::Int32 flags, ::Il2CppArray<::System::Byte>* data, ::System::Int32 count)
		{
			return ((::System::String*(*)(::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS_CONVERTTOSTRINGEXT_OFFSET))(flags, data, count);
		}

		static ::System::String* ConvertToStringExt_1(::System::Int32 flags, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::String*(*)(::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS_CONVERTTOSTRINGEXT_1_OFFSET))(flags, data);
		}

		static ::Il2CppArray<::System::Byte>* ConvertToArray(::System::String* str)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS_CONVERTTOARRAY_OFFSET))(str);
		}

		static ::Il2CppArray<::System::Byte>* ConvertToArray_1(::System::Int32 flags, ::System::String* str)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPCONSTANTS_CONVERTTOARRAY_1_OFFSET))(flags, str);
		}
	};
}
