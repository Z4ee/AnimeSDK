#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"

class Class_1_E489C7176E109E87_2;
namespace System { template <typename T> class Action_1; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class WebResponse; }

#define CLASS_1_76FA24B45ED34E3E_CLASS_1_9E4AC6BC4A70538C__CTOR_OFFSET UNITYSDK_OFFSET(0x14226A50)

inline static constexpr unsigned int Class_1_76FA24B45ED34E3E_Class_1_9E4AC6BC4A70538C_TypeDefinitionIndex = 57002;

class Class_1_76FA24B45ED34E3E_Class_1_9E4AC6BC4A70538C : public ::System::Object
{
public:
	::Class_1_E489C7176E109E87_2* Field_1_0; // 0x10
	::System::Net::HttpWebRequest* Field_1_1; // 0x18
	::System::Net::WebResponse* Field_1_2; // 0x20
	::System::Action_1<::System::Net::HttpStatusCode>* Field_1_3; // 0x28
	::Il2CppArray<::System::Byte>* Field_1_4; // 0x30
	::System::UInt32 Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76FA24B45ED34E3E_CLASS_1_9E4AC6BC4A70538C__CTOR_OFFSET))(this);
	}
};
