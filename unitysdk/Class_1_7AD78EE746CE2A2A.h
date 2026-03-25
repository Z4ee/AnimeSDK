#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_588;
class Class_0_16E4307DCC419505_589;
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_7AD78EE746CE2A2A_CHECKPARTISNEEDUPGRADE_OFFSET UNITYSDK_OFFSET(0x11530170)
#define CLASS_1_7AD78EE746CE2A2A_CHECKTRACENODEISUPGRADED_OFFSET UNITYSDK_OFFSET(0x11530290)
#define CLASS_1_7AD78EE746CE2A2A_CONVERTTOORIGIN_OFFSET UNITYSDK_OFFSET(0x11530020)
#define CLASS_1_7AD78EE746CE2A2A_CONVERTTOUPGRADE_OFFSET UNITYSDK_OFFSET(0x1152FF60)
#define CLASS_1_7AD78EE746CE2A2A_GET_AVATARCONVERTER_OFFSET UNITYSDK_OFFSET(0x1152FF20)
#define CLASS_1_7AD78EE746CE2A2A_GET_AVATARDATACONVERTER_OFFSET UNITYSDK_OFFSET(0x1152FF40)
#define CLASS_1_7AD78EE746CE2A2A_SET_AVATARCONVERTER_OFFSET UNITYSDK_OFFSET(0x1152FF30)
#define CLASS_1_7AD78EE746CE2A2A_SET_AVATARDATACONVERTER_OFFSET UNITYSDK_OFFSET(0x1152FF50)
#define CLASS_1_7AD78EE746CE2A2A__CTOR_OFFSET UNITYSDK_OFFSET(0x11530390)

inline static constexpr unsigned int Class_1_7AD78EE746CE2A2A_TypeDefinitionIndex = 50998;

class Class_1_7AD78EE746CE2A2A : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_588* _AvatarConverter_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_589* _AvatarDataConverter_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD78EE746CE2A2A__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_588* get_AvatarConverter()
	{
		return ((::Class_0_16E4307DCC419505_588*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD78EE746CE2A2A_GET_AVATARCONVERTER_OFFSET))(this);
	}

	::System::Void set_AvatarConverter(::Class_0_16E4307DCC419505_588* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_588*))((::PBYTE)hIl2Cpp + CLASS_1_7AD78EE746CE2A2A_SET_AVATARCONVERTER_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_589* get_AvatarDataConverter()
	{
		return ((::Class_0_16E4307DCC419505_589*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AD78EE746CE2A2A_GET_AVATARDATACONVERTER_OFFSET))(this);
	}

	::System::Void set_AvatarDataConverter(::Class_0_16E4307DCC419505_589* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_589*))((::PBYTE)hIl2Cpp + CLASS_1_7AD78EE746CE2A2A_SET_AVATARDATACONVERTER_OFFSET))(this, value);
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
