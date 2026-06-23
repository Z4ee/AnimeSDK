#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class Quat; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_GET_W_OFFSET UNITYSDK_OFFSET(0x45B300)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_GET_X_OFFSET UNITYSDK_OFFSET(0x40C5C0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_GET_Y_OFFSET UNITYSDK_OFFSET(0x416EC0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_GET_Z_OFFSET UNITYSDK_OFFSET(0x460BA0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9694B0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9694A0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_SET_W_OFFSET UNITYSDK_OFFSET(0x55FE60)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_SET_X_OFFSET UNITYSDK_OFFSET(0x55FE70)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_SET_Y_OFFSET UNITYSDK_OFFSET(0x5CC490)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_SET_Z_OFFSET UNITYSDK_OFFSET(0x55F270)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int QuatInternal_TypeDefinitionIndex = 36285;

	struct alignas(4) QuatInternal
	{
		::System::Single m_w; // 0x10
		::System::Single m_x; // 0x14
		::System::Single m_y; // 0x18
		::System::Single m_z; // 0x1C

		::System::Single get_w()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_GET_W_OFFSET))(this);
		}

		::System::Void set_w(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_SET_W_OFFSET))(this, value);
		}

		::System::Single get_x()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_SET_X_OFFSET))(this, value);
		}

		::System::Single get_y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_SET_Y_OFFSET))(this, value);
		}

		::System::Single get_z()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_GET_Z_OFFSET))(this);
		}

		::System::Void set_z(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_SET_Z_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::Quat* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Quat*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_QUATINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
