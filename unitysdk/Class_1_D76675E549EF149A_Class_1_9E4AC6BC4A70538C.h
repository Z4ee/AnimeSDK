#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"

class Class_1_E489C7176E109E87_2;
namespace System { template <typename T> class Action_1; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class WebResponse; }

#define CLASS_1_D76675E549EF149A_CLASS_1_9E4AC6BC4A70538C__CTOR_OFFSET UNITYSDK_OFFSET(0x1650C0E0)

inline static constexpr unsigned int Class_1_D76675E549EF149A_Class_1_9E4AC6BC4A70538C_TypeDefinitionIndex = 60979;

class Class_1_D76675E549EF149A_Class_1_9E4AC6BC4A70538C : public ::System::Object
{
public:
	::System::Net::WebResponse* LCJPCLCCOHB; // 0x10
	::Class_1_E489C7176E109E87_2* FLKMPGABMCJ; // 0x18
	::Il2CppArray<::System::Byte>* ONIHDHHBPDC; // 0x20
	::System::Action_1<::System::Net::HttpStatusCode>* PKOEDEOHADB; // 0x28
	::System::Net::HttpWebRequest* MDPHGOBONBG; // 0x30
	::System::UInt32 ABPPIHPNGOA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D76675E549EF149A_CLASS_1_9E4AC6BC4A70538C__CTOR_OFFSET))(this);
	}
};
