#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_825B6978607E6BB0_1;
namespace RPG::Client { class ChimeraDuelPvpTeamSnapshot; }
namespace RPG::Client { class ChimeraDuelRankData; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }

#define CLASS_1_827FD69C8A8AE28F_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x15278930)
#define CLASS_1_827FD69C8A8AE28F_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x15278910)
#define CLASS_1_827FD69C8A8AE28F_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x15278950)
#define CLASS_1_827FD69C8A8AE28F_GET_TEAMSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x15278C00)
#define CLASS_1_827FD69C8A8AE28F_METHOD_1_1798FAFF45053267_OFFSET UNITYSDK_OFFSET(0x15278B20)
#define CLASS_1_827FD69C8A8AE28F_METHOD_1_259B533085E399D3_OFFSET UNITYSDK_OFFSET(0x15278A60)
#define CLASS_1_827FD69C8A8AE28F_METHOD_1_5CEC4607322705E5_1_OFFSET UNITYSDK_OFFSET(0x15278AE0)
#define CLASS_1_827FD69C8A8AE28F_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x15278970)
#define CLASS_1_827FD69C8A8AE28F_METHOD_1_603DEC3333EB1E5A_OFFSET UNITYSDK_OFFSET(0x152789B0)
#define CLASS_1_827FD69C8A8AE28F_METHOD_1_9FAACC7749D268F3_OFFSET UNITYSDK_OFFSET(0x15278B80)
#define CLASS_1_827FD69C8A8AE28F_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x15278940)
#define CLASS_1_827FD69C8A8AE28F_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x15278920)
#define CLASS_1_827FD69C8A8AE28F_SET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x15278960)
#define CLASS_1_827FD69C8A8AE28F_SET_TEAMSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x15278C10)
#define CLASS_1_827FD69C8A8AE28F__CTOR_OFFSET UNITYSDK_OFFSET(0x15278820)

inline static constexpr unsigned int Class_1_827FD69C8A8AE28F_TypeDefinitionIndex = 63360;

class Class_1_827FD69C8A8AE28F : public ::System::Object
{
public:
	::RPG::Client::PlayerPlatformInfo* _PlatformInfo_k__BackingField; // 0x10
	::RPG::Client::ChimeraDuelPvpTeamSnapshot* _TeamSnapshot_k__BackingField; // 0x18
	::System::String* _NickName_k__BackingField; // 0x20
	::System::UInt32 _HeadIconID_k__BackingField; // 0x28
	::System::UInt32 MPIMEEAIELI; // 0x2C
	::System::UInt32 BNEFKDMHPAO; // 0x30

	::System::Void _ctor(::Class_1_825B6978607E6BB0_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_825B6978607E6BB0_1*))((::PBYTE)hIl2Cpp + CLASS_1_827FD69C8A8AE28F__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_NickName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_827FD69C8A8AE28F_GET_NICKNAME_OFFSET))(this);
	}

	::System::Void set_NickName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_827FD69C8A8AE28F_SET_NICKNAME_OFFSET))(this, a1);
	}

	::System::UInt32 get_HeadIconID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_827FD69C8A8AE28F_GET_HEADICONID_OFFSET))(this);
	}

	::System::Void set_HeadIconID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_827FD69C8A8AE28F_SET_HEADICONID_OFFSET))(this, a1);
	}

	::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
	{
		return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_827FD69C8A8AE28F_GET_PLATFORMINFO_OFFSET))(this);
	}

	::System::Void set_PlatformInfo(::RPG::Client::PlayerPlatformInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + CLASS_1_827FD69C8A8AE28F_SET_PLATFORMINFO_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_827FD69C8A8AE28F_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::RPG::Client::ChimeraDuelRankData* Method_1_603DEC3333EB1E5A()
	{
		return ((::RPG::Client::ChimeraDuelRankData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_827FD69C8A8AE28F_METHOD_1_603DEC3333EB1E5A_OFFSET))(this);
	}

	::System::UInt32 Method_1_259B533085E399D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_827FD69C8A8AE28F_METHOD_1_259B533085E399D3_OFFSET))(this);
	}

	::System::UInt32 Method_1_5CEC4607322705E5_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_827FD69C8A8AE28F_METHOD_1_5CEC4607322705E5_1_OFFSET))(this);
	}

	::System::String* Method_1_1798FAFF45053267()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_827FD69C8A8AE28F_METHOD_1_1798FAFF45053267_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_9FAACC7749D268F3()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_827FD69C8A8AE28F_METHOD_1_9FAACC7749D268F3_OFFSET))(this);
	}

	::RPG::Client::ChimeraDuelPvpTeamSnapshot* get_TeamSnapshot()
	{
		return ((::RPG::Client::ChimeraDuelPvpTeamSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_827FD69C8A8AE28F_GET_TEAMSNAPSHOT_OFFSET))(this);
	}

	::System::Void set_TeamSnapshot(::RPG::Client::ChimeraDuelPvpTeamSnapshot* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*))((::PBYTE)hIl2Cpp + CLASS_1_827FD69C8A8AE28F_SET_TEAMSNAPSHOT_OFFSET))(this, a1);
	}
};
