#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/Vec3fInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3F_GET_X_OFFSET UNITYSDK_OFFSET(0x1D824460)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3F_GET_Y_OFFSET UNITYSDK_OFFSET(0x1D824480)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3F_GET_Z_OFFSET UNITYSDK_OFFSET(0x1D8244A0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3F_SET_1_OFFSET UNITYSDK_OFFSET(0x1D8245A0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3F_SET_OFFSET UNITYSDK_OFFSET(0x1D8244C0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3F_SET_X_OFFSET UNITYSDK_OFFSET(0x1D824470)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3F_SET_Y_OFFSET UNITYSDK_OFFSET(0x1D824490)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3F_SET_Z_OFFSET UNITYSDK_OFFSET(0x1D8244B0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3F__CTOR_OFFSET UNITYSDK_OFFSET(0x1D824700)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int Vec3f_TypeDefinitionIndex = 36953;

	class Vec3f : public ::System::Object
	{
	public:
		::System::Single _y_k__BackingField; // 0x10
		::System::Single _x_k__BackingField; // 0x14
		::System::Single _z_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3F__CTOR_OFFSET))(this);
		}

		::System::Single get_x()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3F_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3F_SET_X_OFFSET))(this, value);
		}

		::System::Single get_y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3F_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3F_SET_Y_OFFSET))(this, value);
		}

		::System::Single get_z()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3F_GET_Z_OFFSET))(this);
		}

		::System::Void set_z(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3F_SET_Z_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3fInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3F_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_VEC3F_SET_1_OFFSET))(this, other);
		}
	};
}
