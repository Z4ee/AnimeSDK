#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define INCONTROL_VERSIONINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0x2298620)
#define INCONTROL_VERSIONINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x2298670)
#define INCONTROL_VERSIONINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22986F0)
#define INCONTROL_VERSIONINFO_GET_BUILD_OFFSET UNITYSDK_OFFSET(0x15A8520)
#define INCONTROL_VERSIONINFO_GET_MAX_OFFSET UNITYSDK_OFFSET(0x17318290)
#define INCONTROL_VERSIONINFO_GET_MIN_OFFSET UNITYSDK_OFFSET(0x17318280)
#define INCONTROL_VERSIONINFO_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x2298600)
#define INCONTROL_VERSIONINFO_INCONTROLVERSION_OFFSET UNITYSDK_OFFSET(0x17318050)
#define INCONTROL_VERSIONINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17318320)
#define INCONTROL_VERSIONINFO_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1730C240)
#define INCONTROL_VERSIONINFO_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x173183C0)
#define INCONTROL_VERSIONINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17318350)
#define INCONTROL_VERSIONINFO_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x17318380)
#define INCONTROL_VERSIONINFO_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1730C200)
#define INCONTROL_VERSIONINFO_TOSHORTSTRING_OFFSET UNITYSDK_OFFSET(0x2298720)
#define INCONTROL_VERSIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2298710)
#define INCONTROL_VERSIONINFO_UNITYVERSION_OFFSET UNITYSDK_OFFSET(0x17318060)
#define INCONTROL_VERSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x76020)

namespace InControl
{
	inline static constexpr unsigned int VersionInfo_TypeDefinitionIndex = 37222;

	struct alignas(4) VersionInfo
	{
		::System::Int32 major; // 0x10
		::System::Int32 minor; // 0x14
		::System::Int32 patch; // 0x18
		::System::Int32 build; // 0x1C

		::System::Void _ctor(::System::Int32 major, ::System::Int32 minor, ::System::Int32 patch, ::System::Int32 build)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO__CTOR_OFFSET))(this, major, minor, patch, build);
		}

		static ::InControl::VersionInfo InControlVersion()
		{
			return ((::InControl::VersionInfo(*)())((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_INCONTROLVERSION_OFFSET))();
		}

		static ::InControl::VersionInfo UnityVersion()
		{
			return ((::InControl::VersionInfo(*)())((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_UNITYVERSION_OFFSET))();
		}

		static ::InControl::VersionInfo get_Min()
		{
			return ((::InControl::VersionInfo(*)())((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_GET_MIN_OFFSET))();
		}

		static ::InControl::VersionInfo get_Max()
		{
			return ((::InControl::VersionInfo(*)())((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_GET_MAX_OFFSET))();
		}

		::InControl::VersionInfo get_Next()
		{
			return ((::InControl::VersionInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_GET_NEXT_OFFSET))(this);
		}

		::System::Int32 get_Build()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_GET_BUILD_OFFSET))(this);
		}

		::System::Int32 CompareTo(::InControl::VersionInfo other)
		{
			return ((::System::Int32(*)(::PVOID, ::InControl::VersionInfo))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_COMPARETO_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::InControl::VersionInfo a, ::InControl::VersionInfo b)
		{
			return ((::System::Boolean(*)(::InControl::VersionInfo, ::InControl::VersionInfo))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::InControl::VersionInfo a, ::InControl::VersionInfo b)
		{
			return ((::System::Boolean(*)(::InControl::VersionInfo, ::InControl::VersionInfo))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_OP_INEQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_LessThanOrEqual(::InControl::VersionInfo a, ::InControl::VersionInfo b)
		{
			return ((::System::Boolean(*)(::InControl::VersionInfo, ::InControl::VersionInfo))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_OP_LESSTHANOREQUAL_OFFSET))(a, b);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::InControl::VersionInfo a, ::InControl::VersionInfo b)
		{
			return ((::System::Boolean(*)(::InControl::VersionInfo, ::InControl::VersionInfo))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_OP_GREATERTHANOREQUAL_OFFSET))(a, b);
		}

		static ::System::Boolean op_LessThan(::InControl::VersionInfo a, ::InControl::VersionInfo b)
		{
			return ((::System::Boolean(*)(::InControl::VersionInfo, ::InControl::VersionInfo))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_OP_LESSTHAN_OFFSET))(a, b);
		}

		static ::System::Boolean op_GreaterThan(::InControl::VersionInfo a, ::InControl::VersionInfo b)
		{
			return ((::System::Boolean(*)(::InControl::VersionInfo, ::InControl::VersionInfo))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_OP_GREATERTHAN_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_TOSTRING_OFFSET))(this);
		}

		::System::String* ToShortString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_VERSIONINFO_TOSHORTSTRING_OFFSET))(this);
		}
	};
}
