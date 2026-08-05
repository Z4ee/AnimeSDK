#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

#define ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F865790)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_GET_CREATETIME_OFFSET UNITYSDK_OFFSET(0x1F865D90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_GET_LASTACCESSTIME_OFFSET UNITYSDK_OFFSET(0x1F865EC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_GET_LASTMODIFICATIONTIME_OFFSET UNITYSDK_OFFSET(0x1F865C60)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_GET_TAGID_OFFSET UNITYSDK_OFFSET(0x1F865440)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_ISVALIDVALUE_OFFSET UNITYSDK_OFFSET(0x1F865B80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_SETDATA_OFFSET UNITYSDK_OFFSET(0x1F865450)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_SET_CREATETIME_OFFSET UNITYSDK_OFFSET(0x1F865DA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_SET_LASTACCESSTIME_OFFSET UNITYSDK_OFFSET(0x1F865ED0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_SET_LASTMODIFICATIONTIME_OFFSET UNITYSDK_OFFSET(0x1F865C70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F865FF0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int NTTaggedData_TypeDefinitionIndex = 6861;

	class NTTaggedData : public ::System::Object
	{
	public:
		::System::DateTime _lastModificationTime; // 0x10
		::System::DateTime _lastAccessTime; // 0x18
		::System::DateTime _createTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA__CTOR_OFFSET))(this);
		}

		::System::Int16 get_TagID()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_GET_TAGID_OFFSET))(this);
		}

		::System::Void SetData(::Il2CppArray<::System::Byte>* data, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_SETDATA_OFFSET))(this, data, index, count);
		}

		::Il2CppArray<::System::Byte>* GetData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_GETDATA_OFFSET))(this);
		}

		static ::System::Boolean IsValidValue(::System::DateTime value)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_ISVALIDVALUE_OFFSET))(value);
		}

		::System::DateTime get_LastModificationTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_GET_LASTMODIFICATIONTIME_OFFSET))(this);
		}

		::System::Void set_LastModificationTime(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_SET_LASTMODIFICATIONTIME_OFFSET))(this, value);
		}

		::System::DateTime get_CreateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_GET_CREATETIME_OFFSET))(this);
		}

		::System::Void set_CreateTime(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_SET_CREATETIME_OFFSET))(this, value);
		}

		::System::DateTime get_LastAccessTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_GET_LASTACCESSTIME_OFFSET))(this);
		}

		::System::Void set_LastAccessTime(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_NTTAGGEDDATA_SET_LASTACCESSTIME_OFFSET))(this, value);
		}
	};
}
