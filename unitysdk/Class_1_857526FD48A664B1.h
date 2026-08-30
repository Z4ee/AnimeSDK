#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1221;
namespace RPG::Client::NavMap { class ITrackPointInfo; }
namespace System { class String; }

#define CLASS_1_857526FD48A664B1_METHOD_1_09544C3C412F67B6_OFFSET UNITYSDK_OFFSET(0x1626E920)
#define CLASS_1_857526FD48A664B1_METHOD_1_3BD10D867DAC9341_OFFSET UNITYSDK_OFFSET(0x1626E6C0)
#define CLASS_1_857526FD48A664B1_METHOD_1_78921489596CCDCD_OFFSET UNITYSDK_OFFSET(0x1626E0C0)

inline static constexpr unsigned int Class_1_857526FD48A664B1_TypeDefinitionIndex = 74461;

class Class_1_857526FD48A664B1 : public ::System::Object
{
public:
	static ::System::String* Method_1_78921489596CCDCD(::RPG::Client::NavMap::ITrackPointInfo* a1)
	{
		return ((::System::String*(*)(::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_857526FD48A664B1_METHOD_1_78921489596CCDCD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3BD10D867DAC9341(::RPG::Client::NavMap::ITrackPointInfo* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_857526FD48A664B1_METHOD_1_3BD10D867DAC9341_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_09544C3C412F67B6(::Class_0_16E4307DCC419505_1221* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_1221*))((::PBYTE)hIl2Cpp + CLASS_1_857526FD48A664B1_METHOD_1_09544C3C412F67B6_OFFSET))(a1);
	}
};
