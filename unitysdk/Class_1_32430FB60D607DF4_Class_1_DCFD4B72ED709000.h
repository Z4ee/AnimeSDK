#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"

class Class_1_B8B7AE2DAD90AA4E;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class WebResponse; }

#define CLASS_1_32430FB60D607DF4_CLASS_1_DCFD4B72ED709000__CTOR_OFFSET UNITYSDK_OFFSET(0xD18C630)

inline static constexpr unsigned int Class_1_32430FB60D607DF4_Class_1_DCFD4B72ED709000_TypeDefinitionIndex = 49444;

class Class_1_32430FB60D607DF4_Class_1_DCFD4B72ED709000 : public ::System::Object
{
public:
	::Class_1_B8B7AE2DAD90AA4E* Field_1_1; // 0x10
	::System::Net::WebResponse* Field_1_3; // 0x18
	::System::Action_3<::System::Net::HttpStatusCode, ::System::Int32, ::Class_1_B8B7AE2DAD90AA4E*>* Field_1_4; // 0x20
	::System::Net::HttpWebRequest* Field_1_2; // 0x28
	::System::Int32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_CLASS_1_DCFD4B72ED709000__CTOR_OFFSET))(this);
	}
};
