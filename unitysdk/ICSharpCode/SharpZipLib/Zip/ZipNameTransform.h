#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM_GET_TRIMPREFIX_OFFSET UNITYSDK_OFFSET(0x1EA48ED0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM_ISVALIDNAME_1_OFFSET UNITYSDK_OFFSET(0x1EA48FC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM_ISVALIDNAME_OFFSET UNITYSDK_OFFSET(0x1EA48EE0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM_MAKEVALIDNAME_OFFSET UNITYSDK_OFFSET(0x1EA48D40)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM_SET_TRIMPREFIX_OFFSET UNITYSDK_OFFSET(0x1EA487E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM_TRANSFORMDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1EA489E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM_TRANSFORMFILE_OFFSET UNITYSDK_OFFSET(0x1EA48A90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA48810)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA487B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA487A0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipNameTransform_TypeDefinitionIndex = 6893;

	class ZipNameTransform : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_InvalidEntryCharsRelaxed()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(ZipNameTransform_TypeDefinitionIndex)->GetStaticField(0x5CF0);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_InvalidEntryChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(ZipNameTransform_TypeDefinitionIndex)->GetStaticField(0x5CF8);
		}
		::System::String* trimPrefix_; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* trimPrefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM__CTOR_1_OFFSET))(this, trimPrefix);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM__CCTOR_OFFSET))();
		}

		::System::String* TransformDirectory(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM_TRANSFORMDIRECTORY_OFFSET))(this, name);
		}

		::System::String* TransformFile(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM_TRANSFORMFILE_OFFSET))(this, name);
		}

		::System::String* get_TrimPrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM_GET_TRIMPREFIX_OFFSET))(this);
		}

		::System::Void set_TrimPrefix(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM_SET_TRIMPREFIX_OFFSET))(this, value);
		}

		static ::System::String* MakeValidName(::System::String* name, ::System::Char replacement)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM_MAKEVALIDNAME_OFFSET))(name, replacement);
		}

		static ::System::Boolean IsValidName(::System::String* name, ::System::Boolean relaxed)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM_ISVALIDNAME_OFFSET))(name, relaxed);
		}

		static ::System::Boolean IsValidName_1(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPNAMETRANSFORM_ISVALIDNAME_1_OFFSET))(name);
		}
	};
}
