#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonEventParamType.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/QuatInternal.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/Vec3fInternal.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogEventParamPairParamValue; }
namespace Epic::OnlineServices::AntiCheatCommon { class Quat; }
namespace Epic::OnlineServices::AntiCheatCommon { class Vec3f; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96EB00)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_GET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x96E0E0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_GET_INT32_OFFSET UNITYSDK_OFFSET(0x96E460)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_GET_INT64_OFFSET UNITYSDK_OFFSET(0x96E6C0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_GET_QUAT_OFFSET UNITYSDK_OFFSET(0x96E940)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_GET_STRING_OFFSET UNITYSDK_OFFSET(0x96E220)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_GET_UINT32_OFFSET UNITYSDK_OFFSET(0x96E340)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_GET_UINT64_OFFSET UNITYSDK_OFFSET(0x96E580)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_GET_VEC3F_OFFSET UNITYSDK_OFFSET(0x96E800)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x96EA90)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x96E170)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_INT32_OFFSET UNITYSDK_OFFSET(0x96E4E0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_INT64_OFFSET UNITYSDK_OFFSET(0x96E750)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x96EA80)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_QUAT_OFFSET UNITYSDK_OFFSET(0x96E9E0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_STRING_OFFSET UNITYSDK_OFFSET(0x96E2A0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_UINT32_OFFSET UNITYSDK_OFFSET(0x96E3C0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_UINT64_OFFSET UNITYSDK_OFFSET(0x96E610)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_VEC3F_OFFSET UNITYSDK_OFFSET(0x96E8A0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogEventParamPairParamValueInternal_TypeDefinitionIndex = 36916;

	struct alignas(8) LogEventParamPairParamValueInternal
	{
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType m_ParamValueType; // 0x10
		::System::IntPtr m_ClientHandle; // 0x18
		::System::IntPtr m_String; // 0x18
		::System::UInt32 m_UInt32; // 0x18
		::System::Int32 m_Int32; // 0x18
		::System::UInt64 m_UInt64; // 0x18
		::System::Int64 m_Int64; // 0x18
		::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal m_Vec3f; // 0x18
		::Epic::OnlineServices::AntiCheatCommon::QuatInternal m_Quat; // 0x18

		/*
		::System::Nullable_1<::System::IntPtr> get_ClientHandle()
		{
			return ((::System::Nullable_1<::System::IntPtr>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_GET_CLIENTHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_ClientHandle(::System::Nullable_1<::System::IntPtr> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::IntPtr>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_CLIENTHANDLE_OFFSET))(this, value);
		}
		*/

		::System::String* get_String()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_GET_STRING_OFFSET))(this);
		}

		::System::Void set_String(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_STRING_OFFSET))(this, value);
		}

		/*
		::System::Nullable_1<::System::UInt32> get_UInt32()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_GET_UINT32_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_UInt32(::System::Nullable_1<::System::UInt32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_UINT32_OFFSET))(this, value);
		}
		*/

		/*
		::System::Nullable_1<::System::Int32> get_Int32()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_GET_INT32_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Int32(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_INT32_OFFSET))(this, value);
		}
		*/

		/*
		::System::Nullable_1<::System::UInt64> get_UInt64()
		{
			return ((::System::Nullable_1<::System::UInt64>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_GET_UINT64_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_UInt64(::System::Nullable_1<::System::UInt64> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt64>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_UINT64_OFFSET))(this, value);
		}
		*/

		/*
		::System::Nullable_1<::System::Int64> get_Int64()
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_GET_INT64_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Int64(::System::Nullable_1<::System::Int64> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_INT64_OFFSET))(this, value);
		}
		*/

		::Epic::OnlineServices::AntiCheatCommon::Vec3f* get_Vec3f()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::Vec3f*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_GET_VEC3F_OFFSET))(this);
		}

		::System::Void set_Vec3f(::Epic::OnlineServices::AntiCheatCommon::Vec3f* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Vec3f*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_VEC3F_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::Quat* get_Quat()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::Quat*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_GET_QUAT_OFFSET))(this);
		}

		::System::Void set_Quat(::Epic::OnlineServices::AntiCheatCommon::Quat* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Quat*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_QUAT_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUEINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
