#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_678;
class Class_0_16E4307DCC419505_679;
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_7AD78EE746CE2A2A_CHECKPARTISNEEDUPGRADE_OFFSET UNITYSDK_OFFSET(0xA549DB0)
#define CLASS_1_7AD78EE746CE2A2A_CHECKTRACENODEISUPGRADED_OFFSET UNITYSDK_OFFSET(0xA549ED0)
#define CLASS_1_7AD78EE746CE2A2A_CONVERTTOORIGIN_OFFSET UNITYSDK_OFFSET(0xA549C60)
#define CLASS_1_7AD78EE746CE2A2A_CONVERTTOUPGRADE_OFFSET UNITYSDK_OFFSET(0xA549BA0)
#define CLASS_1_7AD78EE746CE2A2A_GET_AVATARCONVERTER_OFFSET UNITYSDK_OFFSET(0xA549B60)
#define CLASS_1_7AD78EE746CE2A2A_GET_AVATARDATACONVERTER_OFFSET UNITYSDK_OFFSET(0xA549B80)
#define CLASS_1_7AD78EE746CE2A2A_SET_AVATARCONVERTER_OFFSET UNITYSDK_OFFSET(0xA549B70)
#define CLASS_1_7AD78EE746CE2A2A_SET_AVATARDATACONVERTER_OFFSET UNITYSDK_OFFSET(0xA549B90)
#define CLASS_1_7AD78EE746CE2A2A__CTOR_OFFSET UNITYSDK_OFFSET(0xA549FD0)

inline static constexpr unsigned int Class_1_7AD78EE746CE2A2A_TypeDefinitionIndex = 57881;

class Class_1_7AD78EE746CE2A2A : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_678* _AvatarDataConverter_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_679* _AvatarConverter_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD78EE746CE2A2A__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_679* get_AvatarConverter()
	{
		return ((::Class_0_16E4307DCC419505_679*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD78EE746CE2A2A_GET_AVATARCONVERTER_OFFSET))(this);
	}

	::System::Void set_AvatarConverter(::Class_0_16E4307DCC419505_679* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_679*))((::PBYTE)hIl2Cpp + CLASS_1_7AD78EE746CE2A2A_SET_AVATARCONVERTER_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_678* get_AvatarDataConverter()
	{
		return ((::Class_0_16E4307DCC419505_678*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD78EE746CE2A2A_GET_AVATARDATACONVERTER_OFFSET))(this);
	}

	::System::Void set_AvatarDataConverter(::Class_0_16E4307DCC419505_678* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_678*))((::PBYTE)hIl2Cpp + CLASS_1_7AD78EE746CE2A2A_SET_AVATARDATACONVERTER_OFFSET))(this, value);
	}

	::RPG::Client::IAvatarInfoProvider* ConvertToUpgrade(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_7AD78EE746CE2A2A_CONVERTTOUPGRADE_OFFSET))(this, a1);
	}

	::RPG::Client::IAvatarInfoProvider* ConvertToOrigin(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_7AD78EE746CE2A2A_CONVERTTOORIGIN_OFFSET))(this, a1);
	}

	::System::Boolean CheckPartIsNeedUpgrade(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::AvatarUpgradePart a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_7AD78EE746CE2A2A_CHECKPARTISNEEDUPGRADE_OFFSET))(this, a1, a2);
	}

	::System::Boolean CheckTraceNodeIsUpgraded(::RPG::Client::IAvatarInfoProvider* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7AD78EE746CE2A2A_CHECKTRACENODEISUPGRADED_OFFSET))(this, a1, a2);
	}
};
