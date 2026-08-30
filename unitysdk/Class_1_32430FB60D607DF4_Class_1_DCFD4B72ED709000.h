#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"

class Class_1_8654F1DF226F6DE3_2;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class WebResponse; }

#define CLASS_1_32430FB60D607DF4_CLASS_1_DCFD4B72ED709000__CTOR_OFFSET UNITYSDK_OFFSET(0x18E53570)

inline static constexpr unsigned int Class_1_32430FB60D607DF4_Class_1_DCFD4B72ED709000_TypeDefinitionIndex = 61077;

class Class_1_32430FB60D607DF4_Class_1_DCFD4B72ED709000 : public ::System::Object
{
public:
	::System::Net::WebResponse* LCJPCLCCOHB; // 0x10
	::Class_1_8654F1DF226F6DE3_2* EPFMCIOMPHH; // 0x18
	::System::Action_3<::System::Net::HttpStatusCode, ::System::Int32, ::Class_1_8654F1DF226F6DE3_2*>* PKOEDEOHADB; // 0x20
	::System::Net::HttpWebRequest* MDPHGOBONBG; // 0x28
	::System::Int32 AEBMCLFMKKB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_CLASS_1_DCFD4B72ED709000__CTOR_OFFSET))(this);
	}
};
