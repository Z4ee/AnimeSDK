#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ICSHARPCODE_SHARPZIPLIB_ZIP_RAWTAGGEDDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x1FC0E7B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_RAWTAGGEDDATA_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1FC0E7C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_RAWTAGGEDDATA_GET_TAGID_OFFSET UNITYSDK_OFFSET(0x1FC0E6F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_RAWTAGGEDDATA_SETDATA_OFFSET UNITYSDK_OFFSET(0x1FC0E710)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_RAWTAGGEDDATA_SET_DATA_OFFSET UNITYSDK_OFFSET(0x1FC0E7D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_RAWTAGGEDDATA_SET_TAGID_OFFSET UNITYSDK_OFFSET(0x1FC0E700)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_RAWTAGGEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC0E6E0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int RawTaggedData_TypeDefinitionIndex = 6858;

	class RawTaggedData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _data; // 0x10
		::System::Int16 _tag; // 0x18

		::System::Void _ctor(::System::Int16 tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_RAWTAGGEDDATA__CTOR_OFFSET))(this, tag);
		}

		::System::Int16 get_TagID()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_RAWTAGGEDDATA_GET_TAGID_OFFSET))(this);
		}

		::System::Void set_TagID(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_RAWTAGGEDDATA_SET_TAGID_OFFSET))(this, value);
		}

		::System::Void SetData(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_RAWTAGGEDDATA_SETDATA_OFFSET))(this, data, offset, count);
		}

		::Il2CppArray<::System::Byte>* GetData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_RAWTAGGEDDATA_GETDATA_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Data()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_RAWTAGGEDDATA_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_RAWTAGGEDDATA_SET_DATA_OFFSET))(this, value);
		}
	};
}
