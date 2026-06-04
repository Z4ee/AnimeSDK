#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F72E3C6AA9E5EF18;
namespace System::Net { class EndPoint; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::Sockets { class Socket; }

#define CLASS_1_F8863E0B46460C89_METHOD_1_12E60817582102D9_OFFSET UNITYSDK_OFFSET(0x19F920B0)
#define CLASS_1_F8863E0B46460C89_METHOD_1_437969ED2CAD1C24_OFFSET UNITYSDK_OFFSET(0x19F921B0)
#define CLASS_1_F8863E0B46460C89_METHOD_1_86FF76860753DE80_OFFSET UNITYSDK_OFFSET(0x19F91E90)
#define CLASS_1_F8863E0B46460C89_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x19F92270)
#define CLASS_1_F8863E0B46460C89_METHOD_1_B1C4F5CC604D26F2_OFFSET UNITYSDK_OFFSET(0x19F92030)
#define CLASS_1_F8863E0B46460C89_METHOD_1_B53A209D1C296843_OFFSET UNITYSDK_OFFSET(0x19F91E80)
#define CLASS_1_F8863E0B46460C89__CTOR_OFFSET UNITYSDK_OFFSET(0x19F91F60)

inline static constexpr unsigned int Class_1_F8863E0B46460C89_TypeDefinitionIndex = 40488;

class Class_1_F8863E0B46460C89 : public ::System::Object
{
public:
	::System::Net::EndPoint* Field_1_0; // 0x10
	::System::Net::Sockets::Socket* Field_1_1; // 0x18
	::System::Net::IPEndPoint* Field_1_2; // 0x20

	::System::Void _ctor(::System::Net::Sockets::Socket* a1, ::System::Net::IPEndPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + CLASS_1_F8863E0B46460C89__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Net::EndPoint* Method_1_B53A209D1C296843()
	{
		return ((::System::Net::EndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8863E0B46460C89_METHOD_1_B53A209D1C296843_OFFSET))(this);
	}

	static ::Class_1_F8863E0B46460C89* Method_1_86FF76860753DE80(::System::Net::IPEndPoint* a1, ::System::Int32 a2)
	{
		return ((::Class_1_F8863E0B46460C89*(*)(::System::Net::IPEndPoint*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F8863E0B46460C89_METHOD_1_86FF76860753DE80_OFFSET))(a1, a2);
	}

	::System::Int32 Method_1_B1C4F5CC604D26F2(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F8863E0B46460C89_METHOD_1_B1C4F5CC604D26F2_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_12E60817582102D9(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F8863E0B46460C89_METHOD_1_12E60817582102D9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_437969ED2CAD1C24(::Class_1_F72E3C6AA9E5EF18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F72E3C6AA9E5EF18*))((::PBYTE)hIl2Cpp + CLASS_1_F8863E0B46460C89_METHOD_1_437969ED2CAD1C24_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8863E0B46460C89_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
