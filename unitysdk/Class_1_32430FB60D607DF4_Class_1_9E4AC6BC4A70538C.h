#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"

class Class_1_E489C7176E109E87_2;
namespace System { template <typename T> class Action_1; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class WebResponse; }

#define CLASS_1_32430FB60D607DF4_CLASS_1_9E4AC6BC4A70538C__CTOR_OFFSET UNITYSDK_OFFSET(0x161A1D60)

inline static constexpr unsigned int Class_1_32430FB60D607DF4_Class_1_9E4AC6BC4A70538C_TypeDefinitionIndex = 61076;

class Class_1_32430FB60D607DF4_Class_1_9E4AC6BC4A70538C : public ::System::Object
{
public:
	::Class_1_E489C7176E109E87_2* FLKMPGABMCJ; // 0x10
	::System::Action_1<::System::Net::HttpStatusCode>* PKOEDEOHADB; // 0x18
	::Il2CppArray<::System::Byte>* ONIHDHHBPDC; // 0x20
	::System::Net::HttpWebRequest* MDPHGOBONBG; // 0x28
	::System::Net::WebResponse* LCJPCLCCOHB; // 0x30
	::System::UInt32 ABPPIHPNGOA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_CLASS_1_9E4AC6BC4A70538C__CTOR_OFFSET))(this);
	}
};
