#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_3E726299B9B71037;
namespace RPG::Client { class ChimeraDuelPvpTeamSnapshot; }
namespace RPG::Client { class ChimeraDuelRankData; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }

#define CLASS_1_20DE710EADC62E5E_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x11DC74E0)
#define CLASS_1_20DE710EADC62E5E_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x11DC74C0)
#define CLASS_1_20DE710EADC62E5E_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x11DC7500)
#define CLASS_1_20DE710EADC62E5E_GET_TEAMSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x11DC7720)
#define CLASS_1_20DE710EADC62E5E_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x11DC7600)
#define CLASS_1_20DE710EADC62E5E_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x11DC7520)
#define CLASS_1_20DE710EADC62E5E_METHOD_1_3E6A49CB3707C46C_OFFSET UNITYSDK_OFFSET(0x11DC7530)
#define CLASS_1_20DE710EADC62E5E_METHOD_1_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x11DC7610)
#define CLASS_1_20DE710EADC62E5E_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x11DC75E0)
#define CLASS_1_20DE710EADC62E5E_METHOD_1_EBB07646C9BB0C5C_OFFSET UNITYSDK_OFFSET(0x11DC7690)
#define CLASS_1_20DE710EADC62E5E_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x11DC74F0)
#define CLASS_1_20DE710EADC62E5E_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x11DC74D0)
#define CLASS_1_20DE710EADC62E5E_SET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x11DC7510)
#define CLASS_1_20DE710EADC62E5E_SET_TEAMSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x11DC7730)
#define CLASS_1_20DE710EADC62E5E__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC7390)

inline static constexpr unsigned int Class_1_20DE710EADC62E5E_TypeDefinitionIndex = 58306;

class Class_1_20DE710EADC62E5E : public ::System::Object
{
public:
	::RPG::Client::ChimeraDuelPvpTeamSnapshot* _TeamSnapshot_k__BackingField; // 0x10
	::RPG::Client::PlayerPlatformInfo* _PlatformInfo_k__BackingField; // 0x18
	::System::String* _NickName_k__BackingField; // 0x20
	::System::UInt32 _HeadIconID_k__BackingField; // 0x28
	::System::UInt32 Field_1_0; // 0x2C
	::System::UInt32 Field_1_1; // 0x30

	::System::Void _ctor(::Class_1_3E726299B9B71037* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3E726299B9B71037*))((::PBYTE)hIl2Cpp + CLASS_1_20DE710EADC62E5E__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_NickName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20DE710EADC62E5E_GET_NICKNAME_OFFSET))(this);
	}

	::System::Void set_NickName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_20DE710EADC62E5E_SET_NICKNAME_OFFSET))(this, value);
	}

	::System::UInt32 get_HeadIconID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20DE710EADC62E5E_GET_HEADICONID_OFFSET))(this);
	}

	::System::Void set_HeadIconID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_20DE710EADC62E5E_SET_HEADICONID_OFFSET))(this, value);
	}

	::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
	{
		return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20DE710EADC62E5E_GET_PLATFORMINFO_OFFSET))(this);
	}

	::System::Void set_PlatformInfo(::RPG::Client::PlayerPlatformInfo* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + CLASS_1_20DE710EADC62E5E_SET_PLATFORMINFO_OFFSET))(this, value);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20DE710EADC62E5E_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::RPG::Client::ChimeraDuelRankData* Method_1_3E6A49CB3707C46C()
	{
		return ((::RPG::Client::ChimeraDuelRankData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20DE710EADC62E5E_METHOD_1_3E6A49CB3707C46C_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20DE710EADC62E5E_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20DE710EADC62E5E_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::String* Method_1_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20DE710EADC62E5E_METHOD_1_6929C20FCC70C1A3_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_EBB07646C9BB0C5C()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20DE710EADC62E5E_METHOD_1_EBB07646C9BB0C5C_OFFSET))(this);
	}

	::RPG::Client::ChimeraDuelPvpTeamSnapshot* get_TeamSnapshot()
	{
		return ((::RPG::Client::ChimeraDuelPvpTeamSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20DE710EADC62E5E_GET_TEAMSNAPSHOT_OFFSET))(this);
	}

	::System::Void set_TeamSnapshot(::RPG::Client::ChimeraDuelPvpTeamSnapshot* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*))((::PBYTE)hIl2Cpp + CLASS_1_20DE710EADC62E5E_SET_TEAMSNAPSHOT_OFFSET))(this, value);
	}
};
