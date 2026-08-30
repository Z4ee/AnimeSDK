#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class Vec3f; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3FINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3FINTERNAL_GET_X_OFFSET UNITYSDK_OFFSET(0xD4B0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3FINTERNAL_GET_Y_OFFSET UNITYSDK_OFFSET(0xD4D0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3FINTERNAL_GET_Z_OFFSET UNITYSDK_OFFSET(0xD4F0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3FINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xE020)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3FINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xE000)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3FINTERNAL_SET_X_OFFSET UNITYSDK_OFFSET(0xD4C0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3FINTERNAL_SET_Y_OFFSET UNITYSDK_OFFSET(0xD4E0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3FINTERNAL_SET_Z_OFFSET UNITYSDK_OFFSET(0xD500)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int Vec3fInternal_TypeDefinitionIndex = 46359;

	struct alignas(4) Vec3fInternal
	{
		::System::Single m_x; // 0x10
		::System::Single m_y; // 0x14
		::System::Single m_z; // 0x18

		::System::Single get_x()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3FINTERNAL_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3FINTERNAL_SET_X_OFFSET))(this, a1);
		}

		::System::Single get_y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3FINTERNAL_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3FINTERNAL_SET_Y_OFFSET))(this, a1);
		}

		::System::Single get_z()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3FINTERNAL_GET_Z_OFFSET))(this);
		}

		::System::Void set_z(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3FINTERNAL_SET_Z_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::Vec3f* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Vec3f*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3FINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3FINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3FINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
