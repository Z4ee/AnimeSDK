#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EFBF8B52CF8996A4;
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Net::Sockets { class Socket; }

#define CLASS_1_EFBF8B52CF8996A4_CLASS_1_13334896114F04AB_METHOD_1_3A48BE2DF511AB3B_OFFSET UNITYSDK_OFFSET(0x15D4B9A0)
#define CLASS_1_EFBF8B52CF8996A4_CLASS_1_13334896114F04AB__CTOR_OFFSET UNITYSDK_OFFSET(0x15D4B990)

inline static constexpr unsigned int Class_1_EFBF8B52CF8996A4_Class_1_13334896114F04AB_TypeDefinitionIndex = 57563;

class Class_1_EFBF8B52CF8996A4_Class_1_13334896114F04AB : public ::System::Object
{
public:
	::System::Net::Sockets::Socket* Field_1_1; // 0x10
	::System::Action_1<::System::Int32>* Field_1_3; // 0x18
	::Class_1_EFBF8B52CF8996A4* Field_1_2; // 0x20
	::System::UInt16 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFBF8B52CF8996A4_CLASS_1_13334896114F04AB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3A48BE2DF511AB3B(::System::Int32 a1, ::System::Exception* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_EFBF8B52CF8996A4_CLASS_1_13334896114F04AB_METHOD_1_3A48BE2DF511AB3B_OFFSET))(this, a1, a2);
	}
};
