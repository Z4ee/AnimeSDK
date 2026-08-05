#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonEventParamType.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/LogEventParamPairParamValueInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::AntiCheatCommon { class Quat; }
namespace Epic::OnlineServices::AntiCheatCommon { class Vec3f; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_GET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x1D37D710)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_GET_INT32_OFFSET UNITYSDK_OFFSET(0x1D37DBA0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_GET_INT64_OFFSET UNITYSDK_OFFSET(0x1D37DE90)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_GET_PARAMVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1D37D6F0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_GET_QUAT_OFFSET UNITYSDK_OFFSET(0x1D37E1C0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_GET_STRING_OFFSET UNITYSDK_OFFSET(0x1D37D8A0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_GET_UINT32_OFFSET UNITYSDK_OFFSET(0x1D37DA40)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_GET_UINT64_OFFSET UNITYSDK_OFFSET(0x1D37DD00)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_GET_VEC3F_OFFSET UNITYSDK_OFFSET(0x1D37E020)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1D37E4F0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1D37E670)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1D37E7E0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1D37E950)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1D37EAD0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1D37EC50)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1D37EDD0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D37E360)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_1_OFFSET UNITYSDK_OFFSET(0x1D37FEC0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x1D37D7B0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_INT32_OFFSET UNITYSDK_OFFSET(0x1D37DC20)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_INT64_OFFSET UNITYSDK_OFFSET(0x1D37DF30)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_OFFSET UNITYSDK_OFFSET(0x1D37EF50)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_PARAMVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1D37D700)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_QUAT_OFFSET UNITYSDK_OFFSET(0x1D37E240)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_STRING_OFFSET UNITYSDK_OFFSET(0x1D37D920)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_UINT32_OFFSET UNITYSDK_OFFSET(0x1D37DAC0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_UINT64_OFFSET UNITYSDK_OFFSET(0x1D37DDA0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_VEC3F_OFFSET UNITYSDK_OFFSET(0x1D37E0A0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D37E4E0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogEventParamPairParamValue_TypeDefinitionIndex = 36915;

	class LogEventParamPairParamValue : public ::System::Object
	{
	public:
		::Epic::OnlineServices::AntiCheatCommon::Quat* m_Quat; // 0x10
		::System::String* m_String; // 0x18
		::Epic::OnlineServices::AntiCheatCommon::Vec3f* m_Vec3f; // 0x20
		::System::Nullable_1<::System::Int64> m_Int64; // 0x28
		::System::Nullable_1<::System::IntPtr> m_ClientHandle; // 0x38
		::System::Nullable_1<::System::UInt64> m_UInt64; // 0x48
		::System::Nullable_1<::System::Int32> m_Int32; // 0x58
		::System::Nullable_1<::System::UInt32> m_UInt32; // 0x60
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType m_ParamValueType; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType get_ParamValueType()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_GET_PARAMVALUETYPE_OFFSET))(this);
		}

		::System::Void set_ParamValueType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_PARAMVALUETYPE_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::IntPtr> get_ClientHandle()
		{
			return ((::System::Nullable_1<::System::IntPtr>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_GET_CLIENTHANDLE_OFFSET))(this);
		}

		::System::Void set_ClientHandle(::System::Nullable_1<::System::IntPtr> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::IntPtr>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_CLIENTHANDLE_OFFSET))(this, value);
		}

		::System::String* get_String()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_GET_STRING_OFFSET))(this);
		}

		::System::Void set_String(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_STRING_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::UInt32> get_UInt32()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_GET_UINT32_OFFSET))(this);
		}

		::System::Void set_UInt32(::System::Nullable_1<::System::UInt32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_UINT32_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Int32> get_Int32()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_GET_INT32_OFFSET))(this);
		}

		::System::Void set_Int32(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_INT32_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::UInt64> get_UInt64()
		{
			return ((::System::Nullable_1<::System::UInt64>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_GET_UINT64_OFFSET))(this);
		}

		::System::Void set_UInt64(::System::Nullable_1<::System::UInt64> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt64>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_UINT64_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Int64> get_Int64()
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_GET_INT64_OFFSET))(this);
		}

		::System::Void set_Int64(::System::Nullable_1<::System::Int64> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_INT64_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::Vec3f* get_Vec3f()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::Vec3f*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_GET_VEC3F_OFFSET))(this);
		}

		::System::Void set_Vec3f(::Epic::OnlineServices::AntiCheatCommon::Vec3f* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Vec3f*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_VEC3F_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::Quat* get_Quat()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::Quat*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_GET_QUAT_OFFSET))(this);
		}

		::System::Void set_Quat(::Epic::OnlineServices::AntiCheatCommon::Quat* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Quat*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_QUAT_OFFSET))(this, value);
		}

		static ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue* op_Implicit(::System::IntPtr value)
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_OP_IMPLICIT_OFFSET))(value);
		}

		static ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue* op_Implicit_1(::System::String* value)
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue*(*)(::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_OP_IMPLICIT_1_OFFSET))(value);
		}

		static ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue* op_Implicit_2(::System::UInt32 value)
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_OP_IMPLICIT_2_OFFSET))(value);
		}

		static ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue* op_Implicit_3(::System::Int32 value)
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue*(*)(::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_OP_IMPLICIT_3_OFFSET))(value);
		}

		static ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue* op_Implicit_4(::System::UInt64 value)
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_OP_IMPLICIT_4_OFFSET))(value);
		}

		static ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue* op_Implicit_5(::System::Int64 value)
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue*(*)(::System::Int64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_OP_IMPLICIT_5_OFFSET))(value);
		}

		static ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue* op_Implicit_6(::Epic::OnlineServices::AntiCheatCommon::Vec3f* value)
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue*(*)(::Epic::OnlineServices::AntiCheatCommon::Vec3f*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_OP_IMPLICIT_6_OFFSET))(value);
		}

		static ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue* op_Implicit_7(::Epic::OnlineServices::AntiCheatCommon::Quat* value)
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue*(*)(::Epic::OnlineServices::AntiCheatCommon::Quat*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_OP_IMPLICIT_7_OFFSET))(value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRPARAMVALUE_SET_1_OFFSET))(this, other);
		}
	};
}
