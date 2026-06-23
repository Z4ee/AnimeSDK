#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_KEYSREQUIREDEVENTARGS_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1E865360)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_KEYSREQUIREDEVENTARGS_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1E865370)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_KEYSREQUIREDEVENTARGS_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1E865380)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_KEYSREQUIREDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8652F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_KEYSREQUIREDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E865290)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int KeysRequiredEventArgs_TypeDefinitionIndex = 6860;

	class KeysRequiredEventArgs : public ::System::EventArgs
	{
	public:
		::Il2CppArray<::System::Byte>* key; // 0x10
		::System::String* fileName; // 0x18

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_KEYSREQUIREDEVENTARGS__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::System::String* name, ::Il2CppArray<::System::Byte>* keyValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_KEYSREQUIREDEVENTARGS__CTOR_1_OFFSET))(this, name, keyValue);
		}

		::System::String* get_FileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_KEYSREQUIREDEVENTARGS_GET_FILENAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_KEYSREQUIREDEVENTARGS_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_KEYSREQUIREDEVENTARGS_SET_KEY_OFFSET))(this, value);
		}
	};
}
