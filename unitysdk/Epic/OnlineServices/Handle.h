#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_HANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C9C7510)
#define EPIC_ONLINESERVICES_HANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C9C7470)
#define EPIC_ONLINESERVICES_HANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C9C7570)
#define EPIC_ONLINESERVICES_HANDLE_GET_INNERHANDLE_OFFSET UNITYSDK_OFFSET(0x1C9C7450)
#define EPIC_ONLINESERVICES_HANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C9C7580)
#define EPIC_ONLINESERVICES_HANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C9C75E0)
#define EPIC_ONLINESERVICES_HANDLE_SET_INNERHANDLE_OFFSET UNITYSDK_OFFSET(0x1C9C7460)
#define EPIC_ONLINESERVICES_HANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C9C07F0)
#define EPIC_ONLINESERVICES_HANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C07D0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int Handle_TypeDefinitionIndex = 35502;

	class Handle : public ::System::Object
	{
	public:
		::System::IntPtr _InnerHandle_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HANDLE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HANDLE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::System::IntPtr get_InnerHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HANDLE_GET_INNERHANDLE_OFFSET))(this);
		}

		::System::Void set_InnerHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HANDLE_SET_INNERHANDLE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HANDLE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HANDLE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::Epic::OnlineServices::Handle* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Epic::OnlineServices::Handle*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HANDLE_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::Epic::OnlineServices::Handle* lhs, ::Epic::OnlineServices::Handle* rhs)
		{
			return ((::System::Boolean(*)(::Epic::OnlineServices::Handle*, ::Epic::OnlineServices::Handle*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HANDLE_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::Epic::OnlineServices::Handle* lhs, ::Epic::OnlineServices::Handle* rhs)
		{
			return ((::System::Boolean(*)(::Epic::OnlineServices::Handle*, ::Epic::OnlineServices::Handle*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HANDLE_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}
	};
}
