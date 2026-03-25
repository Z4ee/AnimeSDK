#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_603C5A0548F631AA;
namespace System::Net { class IPEndPoint; }
namespace System::Net { class ServicePoint; }

#define CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8D152A0)
#define CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS25_0___GETWEBRESPONSE_B__1_OFFSET UNITYSDK_OFFSET(0x8D19A90)

inline static constexpr unsigned int Class_2_54CCD44980580DB7___c__DisplayClass25_0_TypeDefinitionIndex = 48236;

class Class_2_54CCD44980580DB7___c__DisplayClass25_0 : public ::System::Object
{
public:
	::Class_1_603C5A0548F631AA* info; // 0x10
	::System::Boolean isIPV6; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
	}

	::System::Net::IPEndPoint* __GetWebResponse_b__1(::System::Net::ServicePoint* servicePoint, ::System::Net::IPEndPoint* remoteEP, ::System::Int32 iDnsRetry)
	{
		return ((::System::Net::IPEndPoint*(*)(::PVOID, ::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS25_0___GETWEBRESPONSE_B__1_OFFSET))(this, servicePoint, remoteEP, iDnsRetry);
	}
};
