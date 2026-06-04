#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_60E87BC9A034C702_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0xB015ED0)
#define CLASS_2_60E87BC9A034C702__CTOR_OFFSET UNITYSDK_OFFSET(0xB015E60)
#define CLASS_2_60E87BC9A034C702___IFIXBASEPROXY_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0xB015F60)

inline static constexpr unsigned int Class_2_60E87BC9A034C702_TypeDefinitionIndex = 46866;

class Class_2_60E87BC9A034C702 : public ::System::Exception
{
public:
	::System::Int32 Field_2_0; // 0x88

	::System::Void _ctor(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_60E87BC9A034C702__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_Message()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60E87BC9A034C702_GET_MESSAGE_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_get_Message()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60E87BC9A034C702___IFIXBASEPROXY_GET_MESSAGE_OFFSET))(this);
	}
};
