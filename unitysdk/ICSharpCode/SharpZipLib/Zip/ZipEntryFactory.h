#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/ZipEntryFactory_TimeSetting.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Core { class INameTransform; }
namespace ICSharpCode::SharpZipLib::Zip { class ZipEntry; }
namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_GET_FIXEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1FC0ED60)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_GET_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1FC0ED70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_GET_ISUNICODETEXT_OFFSET UNITYSDK_OFFSET(0x1FC0EDB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_GET_NAMETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FC0ECE0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_GET_SETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1FC0ED90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_GET_SETTING_OFFSET UNITYSDK_OFFSET(0x1FC0ED40)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_MAKEDIRECTORYENTRY_1_OFFSET UNITYSDK_OFFSET(0x1FC0F1B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_MAKEDIRECTORYENTRY_OFFSET UNITYSDK_OFFSET(0x1FC0F1A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_MAKEFILEENTRY_1_OFFSET UNITYSDK_OFFSET(0x1FC0EDE0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_MAKEFILEENTRY_OFFSET UNITYSDK_OFFSET(0x1FC0EDD0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_SET_FIXEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1FC0EB80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_SET_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1FC0ED80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_SET_ISUNICODETEXT_OFFSET UNITYSDK_OFFSET(0x1FC0EDC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_SET_NAMETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FC0ECF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_SET_SETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1FC0EDA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_SET_SETTING_OFFSET UNITYSDK_OFFSET(0x1FC0ED50)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC0E980)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FC0E9E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC0E930)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipEntryFactory_TypeDefinitionIndex = 6854;

	class ZipEntryFactory : public ::System::Object
	{
	public:
		::ICSharpCode::SharpZipLib::Core::INameTransform* nameTransform_; // 0x10
		::System::Int32 getAttributes_; // 0x18
		::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory_TimeSetting timeSetting_; // 0x1C
		::System::Int32 setAttributes_; // 0x20
		::System::Boolean isUnicodeText_; // 0x24
		::System::DateTime fixedDateTime_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory_TimeSetting timeSetting)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory_TimeSetting))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY__CTOR_1_OFFSET))(this, timeSetting);
		}

		::System::Void _ctor_2(::System::DateTime time)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY__CTOR_2_OFFSET))(this, time);
		}

		::ICSharpCode::SharpZipLib::Core::INameTransform* get_NameTransform()
		{
			return ((::ICSharpCode::SharpZipLib::Core::INameTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_GET_NAMETRANSFORM_OFFSET))(this);
		}

		::System::Void set_NameTransform(::ICSharpCode::SharpZipLib::Core::INameTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Core::INameTransform*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_SET_NAMETRANSFORM_OFFSET))(this, value);
		}

		::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory_TimeSetting get_Setting()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory_TimeSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_GET_SETTING_OFFSET))(this);
		}

		::System::Void set_Setting(::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory_TimeSetting value)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntryFactory_TimeSetting))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_SET_SETTING_OFFSET))(this, value);
		}

		::System::DateTime get_FixedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_GET_FIXEDDATETIME_OFFSET))(this);
		}

		::System::Void set_FixedDateTime(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_SET_FIXEDDATETIME_OFFSET))(this, value);
		}

		::System::Int32 get_GetAttributes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_GET_GETATTRIBUTES_OFFSET))(this);
		}

		::System::Void set_GetAttributes(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_SET_GETATTRIBUTES_OFFSET))(this, value);
		}

		::System::Int32 get_SetAttributes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_GET_SETATTRIBUTES_OFFSET))(this);
		}

		::System::Void set_SetAttributes(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_SET_SETATTRIBUTES_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnicodeText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_GET_ISUNICODETEXT_OFFSET))(this);
		}

		::System::Void set_IsUnicodeText(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_SET_ISUNICODETEXT_OFFSET))(this, value);
		}

		::ICSharpCode::SharpZipLib::Zip::ZipEntry* MakeFileEntry(::System::String* fileName)
		{
			return ((::ICSharpCode::SharpZipLib::Zip::ZipEntry*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_MAKEFILEENTRY_OFFSET))(this, fileName);
		}

		::ICSharpCode::SharpZipLib::Zip::ZipEntry* MakeFileEntry_1(::System::String* fileName, ::System::Boolean useFileSystem)
		{
			return ((::ICSharpCode::SharpZipLib::Zip::ZipEntry*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_MAKEFILEENTRY_1_OFFSET))(this, fileName, useFileSystem);
		}

		::ICSharpCode::SharpZipLib::Zip::ZipEntry* MakeDirectoryEntry(::System::String* directoryName)
		{
			return ((::ICSharpCode::SharpZipLib::Zip::ZipEntry*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_MAKEDIRECTORYENTRY_OFFSET))(this, directoryName);
		}

		::ICSharpCode::SharpZipLib::Zip::ZipEntry* MakeDirectoryEntry_1(::System::String* directoryName, ::System::Boolean useFileSystem)
		{
			return ((::ICSharpCode::SharpZipLib::Zip::ZipEntry*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRYFACTORY_MAKEDIRECTORYENTRY_1_OFFSET))(this, directoryName, useFileSystem);
		}
	};
}
