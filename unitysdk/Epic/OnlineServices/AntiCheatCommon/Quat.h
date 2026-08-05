#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/QuatInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_GET_W_OFFSET UNITYSDK_OFFSET(0x1DBCAB40)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_GET_X_OFFSET UNITYSDK_OFFSET(0x1DBCAB60)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_GET_Y_OFFSET UNITYSDK_OFFSET(0x1DBCAB80)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_GET_Z_OFFSET UNITYSDK_OFFSET(0x1DBCABA0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_SET_1_OFFSET UNITYSDK_OFFSET(0x1DBCACA0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_SET_OFFSET UNITYSDK_OFFSET(0x1DBCABC0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_SET_W_OFFSET UNITYSDK_OFFSET(0x1DBCAB50)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_SET_X_OFFSET UNITYSDK_OFFSET(0x1DBCAB70)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_SET_Y_OFFSET UNITYSDK_OFFSET(0x1DBCAB90)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_SET_Z_OFFSET UNITYSDK_OFFSET(0x1DBCABB0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBCADF0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int Quat_TypeDefinitionIndex = 36943;

	class Quat : public ::System::Object
	{
	public:
		::System::Single _y_k__BackingField; // 0x10
		::System::Single _z_k__BackingField; // 0x14
		::System::Single _w_k__BackingField; // 0x18
		::System::Single _x_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT__CTOR_OFFSET))(this);
		}

		::System::Single get_w()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_GET_W_OFFSET))(this);
		}

		::System::Void set_w(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_SET_W_OFFSET))(this, value);
		}

		::System::Single get_x()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_SET_X_OFFSET))(this, value);
		}

		::System::Single get_y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_SET_Y_OFFSET))(this, value);
		}

		::System::Single get_z()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_GET_Z_OFFSET))(this);
		}

		::System::Void set_z(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_SET_Z_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::QuatInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::QuatInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUAT_SET_1_OFFSET))(this, other);
		}
	};
}
