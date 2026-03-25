#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::Sockets { class Socket; }

#define CLASS_1_22664499479190F5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A70C40)
#define CLASS_1_22664499479190F5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A70C80)
#define CLASS_1_22664499479190F5___C__PINGBYUDPSYNC_B__2_0_OFFSET UNITYSDK_OFFSET(0x17A70C90)
#define CLASS_1_22664499479190F5___C__PINGBYUDPSYNC_B__2_1_OFFSET UNITYSDK_OFFSET(0x17A70CA0)

inline static constexpr unsigned int Class_1_22664499479190F5___c_TypeDefinitionIndex = 33878;

class Class_1_22664499479190F5___c : public ::System::Object
{
public:
	static ::Class_1_22664499479190F5___c** StaticGet___9()
	{
		return (::Class_1_22664499479190F5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_22664499479190F5___c_TypeDefinitionIndex)->GetStaticField(0x24A30);
	}
	static ::System::Func_2<::System::Net::IPEndPoint*, ::System::Net::Sockets::Socket*>** StaticGet___9__2_1()
	{
		return (::System::Func_2<::System::Net::IPEndPoint*, ::System::Net::Sockets::Socket*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_22664499479190F5___c_TypeDefinitionIndex)->GetStaticField(0x24A38);
	}
	static ::System::Func_2<::System::Net::IPEndPoint*, ::System::UInt64>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::Net::IPEndPoint*, ::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_22664499479190F5___c_TypeDefinitionIndex)->GetStaticField(0x24A40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_22664499479190F5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22664499479190F5___C__CTOR_OFFSET))(this);
	}

	::System::UInt64 _PingByUdpSync_b__2_0(::System::Net::IPEndPoint* ipEndPoint)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + CLASS_1_22664499479190F5___C__PINGBYUDPSYNC_B__2_0_OFFSET))(this, ipEndPoint);
	}

	::System::Net::Sockets::Socket* _PingByUdpSync_b__2_1(::System::Net::IPEndPoint* ipEndPoint)
	{
		return ((::System::Net::Sockets::Socket*(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + CLASS_1_22664499479190F5___C__PINGBYUDPSYNC_B__2_1_OFFSET))(this, ipEndPoint);
	}
};
