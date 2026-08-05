#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/ExtendedUnixData_Flags.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

#define ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EA47C30)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_GET_ACCESSTIME_OFFSET UNITYSDK_OFFSET(0x1EA48400)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_GET_CREATETIME_OFFSET UNITYSDK_OFFSET(0x1EA48590)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_GET_INCLUDE_OFFSET UNITYSDK_OFFSET(0x1EA48720)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_GET_MODIFICATIONTIME_OFFSET UNITYSDK_OFFSET(0x1EA48270)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_GET_TAGID_OFFSET UNITYSDK_OFFSET(0x1EA47660)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_ISVALIDVALUE_OFFSET UNITYSDK_OFFSET(0x1EA48160)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_SETDATA_OFFSET UNITYSDK_OFFSET(0x1EA47670)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_SET_ACCESSTIME_OFFSET UNITYSDK_OFFSET(0x1EA48410)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_SET_CREATETIME_OFFSET UNITYSDK_OFFSET(0x1EA485A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_SET_INCLUDE_OFFSET UNITYSDK_OFFSET(0x1EA48730)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_SET_MODIFICATIONTIME_OFFSET UNITYSDK_OFFSET(0x1EA48280)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA48740)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ExtendedUnixData_TypeDefinitionIndex = 6859;

	class ExtendedUnixData : public ::System::Object
	{
	public:
		::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData_Flags _flags; // 0x10
		::System::DateTime _lastAccessTime; // 0x18
		::System::DateTime _createTime; // 0x20
		::System::DateTime _modificationTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA__CTOR_OFFSET))(this);
		}

		::System::Int16 get_TagID()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_GET_TAGID_OFFSET))(this);
		}

		::System::Void SetData(::Il2CppArray<::System::Byte>* data, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_SETDATA_OFFSET))(this, data, index, count);
		}

		::Il2CppArray<::System::Byte>* GetData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_GETDATA_OFFSET))(this);
		}

		static ::System::Boolean IsValidValue(::System::DateTime value)
		{
			return ((::System::Boolean(*)(::System::DateTime))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_ISVALIDVALUE_OFFSET))(value);
		}

		::System::DateTime get_ModificationTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_GET_MODIFICATIONTIME_OFFSET))(this);
		}

		::System::Void set_ModificationTime(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_SET_MODIFICATIONTIME_OFFSET))(this, value);
		}

		::System::DateTime get_AccessTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_GET_ACCESSTIME_OFFSET))(this);
		}

		::System::Void set_AccessTime(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_SET_ACCESSTIME_OFFSET))(this, value);
		}

		::System::DateTime get_CreateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_GET_CREATETIME_OFFSET))(this);
		}

		::System::Void set_CreateTime(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_SET_CREATETIME_OFFSET))(this, value);
		}

		::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData_Flags get_Include()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData_Flags(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_GET_INCLUDE_OFFSET))(this);
		}

		::System::Void set_Include(::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData_Flags value)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData_Flags))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_EXTENDEDUNIXDATA_SET_INCLUDE_OFFSET))(this, value);
		}
	};
}
