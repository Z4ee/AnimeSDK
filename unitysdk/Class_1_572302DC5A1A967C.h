#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_572302DC5A1A967C_GET_ADDSTATMAP_OFFSET UNITYSDK_OFFSET(0x17EC8E50)
#define CLASS_1_572302DC5A1A967C_GET_AVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x17EC8E30)
#define CLASS_1_572302DC5A1A967C_GET_DESC_OFFSET UNITYSDK_OFFSET(0x17EC8E10)
#define CLASS_1_572302DC5A1A967C_GET_DRIVERID_OFFSET UNITYSDK_OFFSET(0x17EC8DD0)
#define CLASS_1_572302DC5A1A967C_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17EC8DF0)
#define CLASS_1_572302DC5A1A967C_SET_ADDSTATMAP_OFFSET UNITYSDK_OFFSET(0x17EC8E60)
#define CLASS_1_572302DC5A1A967C_SET_AVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x17EC8E40)
#define CLASS_1_572302DC5A1A967C_SET_DESC_OFFSET UNITYSDK_OFFSET(0x17EC8E20)
#define CLASS_1_572302DC5A1A967C_SET_DRIVERID_OFFSET UNITYSDK_OFFSET(0x17EC8DE0)
#define CLASS_1_572302DC5A1A967C_SET_NAME_OFFSET UNITYSDK_OFFSET(0x17EC8E00)
#define CLASS_1_572302DC5A1A967C__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC8E70)

inline static constexpr unsigned int Class_1_572302DC5A1A967C_TypeDefinitionIndex = 80390;

class Class_1_572302DC5A1A967C : public ::System::Object
{
public:
	::System::String* _AvatarIconPath_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* _AddStatMap_k__BackingField; // 0x18
	::RPG::Client::TextID _Name_k__BackingField; // 0x20
	::RPG::Client::TextID _Desc_k__BackingField; // 0x30
	::System::UInt32 _DriverID_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_572302DC5A1A967C__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_DriverID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_572302DC5A1A967C_GET_DRIVERID_OFFSET))(this);
	}

	::System::Void set_DriverID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_572302DC5A1A967C_SET_DRIVERID_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_572302DC5A1A967C_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_572302DC5A1A967C_SET_NAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_572302DC5A1A967C_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_572302DC5A1A967C_SET_DESC_OFFSET))(this, a1);
	}

	::System::String* get_AvatarIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_572302DC5A1A967C_GET_AVATARICONPATH_OFFSET))(this);
	}

	::System::Void set_AvatarIconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_572302DC5A1A967C_SET_AVATARICONPATH_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* get_AddStatMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_572302DC5A1A967C_GET_ADDSTATMAP_OFFSET))(this);
	}

	::System::Void set_AddStatMap(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_572302DC5A1A967C_SET_ADDSTATMAP_OFFSET))(this, a1);
	}
};
