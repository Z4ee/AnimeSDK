#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1067;
namespace RPG::Client::NavMap { class ITrackPointInfo; }
namespace System { class String; }

#define CLASS_1_39D6C99EE2FA0707_METHOD_1_09A4E7A3B04A0F9E_OFFSET UNITYSDK_OFFSET(0x910DEF0)
#define CLASS_1_39D6C99EE2FA0707_METHOD_1_495CB5A992256AE5_OFFSET UNITYSDK_OFFSET(0x910E320)
#define CLASS_1_39D6C99EE2FA0707_METHOD_1_80A8F3CCEF81A521_OFFSET UNITYSDK_OFFSET(0x90FB210)

inline static constexpr unsigned int Class_1_39D6C99EE2FA0707_TypeDefinitionIndex = 68826;

class Class_1_39D6C99EE2FA0707 : public ::System::Object
{
public:
	static ::System::String* Method_1_09A4E7A3B04A0F9E(::RPG::Client::NavMap::ITrackPointInfo* a1)
	{
		return ((::System::String*(*)(::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_39D6C99EE2FA0707_METHOD_1_09A4E7A3B04A0F9E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_80A8F3CCEF81A521(::RPG::Client::NavMap::ITrackPointInfo* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_39D6C99EE2FA0707_METHOD_1_80A8F3CCEF81A521_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_495CB5A992256AE5(::Class_0_16E4307DCC419505_1067* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_1067*))((::PBYTE)hIl2Cpp + CLASS_1_39D6C99EE2FA0707_METHOD_1_495CB5A992256AE5_OFFSET))(a1);
	}
};
