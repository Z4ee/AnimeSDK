#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class Object; }
namespace System { class Type; }

#define CLASS_2_28318F8C6730A594_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D0E32E0)
#define CLASS_2_28318F8C6730A594_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x1D0E32D0)
#define CLASS_2_28318F8C6730A594_GET_SUBSCRIBER_OFFSET UNITYSDK_OFFSET(0x1D0E32C0)
#define CLASS_2_28318F8C6730A594__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D0E31E0)
#define CLASS_2_28318F8C6730A594__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E30D0)

inline static constexpr unsigned int Class_2_28318F8C6730A594_TypeDefinitionIndex = 41458;

class Class_2_28318F8C6730A594 : public ::System::Exception
{
public:
	::System::Object* _Id_k__BackingField; // 0x88
	::System::Type* _MessageType_k__BackingField; // 0x90
	::System::Object* _Subscriber_k__BackingField; // 0x98

	::System::Void _ctor(::System::Object* a1, ::System::Type* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_28318F8C6730A594__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::Object* a1, ::System::Type* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_28318F8C6730A594__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Object* get_Subscriber()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28318F8C6730A594_GET_SUBSCRIBER_OFFSET))(this);
	}

	::System::Type* get_MessageType()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28318F8C6730A594_GET_MESSAGETYPE_OFFSET))(this);
	}

	::System::Object* get_Id()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28318F8C6730A594_GET_ID_OFFSET))(this);
	}
};
