#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C9E417278351157F_4;
namespace RPG::GameCore { class HeadFrameConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_HEADFRAMEINFO_COPY_OFFSET UNITYSDK_OFFSET(0x1A069110)
#define RPG_CLIENT_HEADFRAMEINFO_GET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x1A068F10)
#define RPG_CLIENT_HEADFRAMEINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1A068FA0)
#define RPG_CLIENT_HEADFRAMEINFO_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1A068EF0)
#define RPG_CLIENT_HEADFRAMEINFO_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1A068F30)
#define RPG_CLIENT_HEADFRAMEINFO_SET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x1A068F20)
#define RPG_CLIENT_HEADFRAMEINFO_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1A068F00)
#define RPG_CLIENT_HEADFRAMEINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A069080)
#define RPG_CLIENT_HEADFRAMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0691C0)

namespace RPG::Client
{
	inline static constexpr unsigned int HeadFrameInfo_TypeDefinitionIndex = 65711;

	class HeadFrameInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::HeadFrameConfigRow* _Meta; // 0x10
		::System::Int64 _ExpireTime_k__BackingField; // 0x18
		::System::UInt32 _ItemID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEINFO_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEINFO_SET_ITEMID_OFFSET))(this, a1);
		}

		::System::Int64 get_ExpireTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEINFO_GET_EXPIRETIME_OFFSET))(this);
		}

		::System::Void set_ExpireTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEINFO_SET_EXPIRETIME_OFFSET))(this, a1);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEINFO_GET_PREFABPATH_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::Void Update(::Class_1_C9E417278351157F_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9E417278351157F_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEINFO_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Copy(::RPG::Client::HeadFrameInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HeadFrameInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEINFO_COPY_OFFSET))(this, a1);
		}
	};
}
