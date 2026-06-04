#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/IPEndPoint.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Net { class EndPoint; }
namespace System::Net { class IPAddress; }
namespace System::Net { class SocketAddress; }

#define CLASS_3_D5C238601E98FD1E_CREATE_OFFSET UNITYSDK_OFFSET(0x19F7DE40)
#define CLASS_3_D5C238601E98FD1E_EQUALS_OFFSET UNITYSDK_OFFSET(0x19F7DF30)
#define CLASS_3_D5C238601E98FD1E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19F7DFC0)
#define CLASS_3_D5C238601E98FD1E_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x19F7DE30)
#define CLASS_3_D5C238601E98FD1E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19F7DFE0)
#define CLASS_3_D5C238601E98FD1E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19F7DD80)
#define CLASS_3_D5C238601E98FD1E__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19F7DDD0)
#define CLASS_3_D5C238601E98FD1E__CTOR_OFFSET UNITYSDK_OFFSET(0x19F7DD30)

inline static constexpr unsigned int Class_3_D5C238601E98FD1E_TypeDefinitionIndex = 40477;

class Class_3_D5C238601E98FD1E : public ::System::Net::IPEndPoint
{
public:
	::System::Net::SocketAddress* Field_3_0; // 0x20

	::System::Void _ctor(::System::Int64 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D5C238601E98FD1E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::Net::IPAddress* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D5C238601E98FD1E__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::System::Net::IPEndPoint* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + CLASS_3_D5C238601E98FD1E__CTOR_2_OFFSET))(this, a1);
	}

	::System::Net::SocketAddress* Serialize()
	{
		return ((::System::Net::SocketAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5C238601E98FD1E_SERIALIZE_OFFSET))(this);
	}

	::System::Net::EndPoint* Create(::System::Net::SocketAddress* a1)
	{
		return ((::System::Net::EndPoint*(*)(::PVOID, ::System::Net::SocketAddress*))((::PBYTE)hIl2Cpp + CLASS_3_D5C238601E98FD1E_CREATE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_D5C238601E98FD1E_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5C238601E98FD1E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5C238601E98FD1E_TOSTRING_OFFSET))(this);
	}
};
