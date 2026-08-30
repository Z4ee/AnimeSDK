#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/IPVersion.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPEndPoint; }

#define CLASS_1_2978C3AFB9C9E5D0_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D7A8270)
#define CLASS_1_2978C3AFB9C9E5D0_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D7A81E0)
#define CLASS_1_2978C3AFB9C9E5D0_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D7A8370)
#define CLASS_1_2978C3AFB9C9E5D0_METHOD_1_013F5ABF7C5FF47B_OFFSET UNITYSDK_OFFSET(0x1D7A8030)
#define CLASS_1_2978C3AFB9C9E5D0_METHOD_1_2B93782B6F75FCCE_OFFSET UNITYSDK_OFFSET(0x1D7A85E0)
#define CLASS_1_2978C3AFB9C9E5D0_METHOD_1_50815B707A50BF07_OFFSET UNITYSDK_OFFSET(0x1D7A80D0)
#define CLASS_1_2978C3AFB9C9E5D0_METHOD_1_72D450EFB5F053CF_OFFSET UNITYSDK_OFFSET(0x1D7A8490)
#define CLASS_1_2978C3AFB9C9E5D0_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D7A7FD0)
#define CLASS_1_2978C3AFB9C9E5D0_METHOD_1_E62309BFD1E396C5_OFFSET UNITYSDK_OFFSET(0x1D7A4590)
#define CLASS_1_2978C3AFB9C9E5D0_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x1D7A7FB0)
#define CLASS_1_2978C3AFB9C9E5D0_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D7A7F90)
#define CLASS_1_2978C3AFB9C9E5D0_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D7A8730)
#define CLASS_1_2978C3AFB9C9E5D0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D7A8020)
#define CLASS_1_2978C3AFB9C9E5D0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A8000)

inline static constexpr unsigned int Class_1_2978C3AFB9C9E5D0_TypeDefinitionIndex = 42244;

class Class_1_2978C3AFB9C9E5D0 : public ::System::Object
{
public:
	::System::String* GPELLPIFOBJ; // 0x10
	::System::String* GABNEAADAOG; // 0x18
	::System::UInt16 HPGJPOFOOPM; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::UInt16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_2978C3AFB9C9E5D0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::String* a2, ::System::UInt16 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_2978C3AFB9C9E5D0__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2978C3AFB9C9E5D0_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2978C3AFB9C9E5D0_METHOD_1_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2978C3AFB9C9E5D0_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::String* Method_1_E62309BFD1E396C5(::RPG::Client::IPVersion a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + CLASS_1_2978C3AFB9C9E5D0_METHOD_1_E62309BFD1E396C5_OFFSET))(this, a1);
	}

	::System::Net::IPAddress* Method_1_013F5ABF7C5FF47B(::RPG::Client::IPVersion a1)
	{
		return ((::System::Net::IPAddress*(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + CLASS_1_2978C3AFB9C9E5D0_METHOD_1_013F5ABF7C5FF47B_OFFSET))(this, a1);
	}

	::System::Net::IPEndPoint* Method_1_50815B707A50BF07(::RPG::Client::IPVersion a1)
	{
		return ((::System::Net::IPEndPoint*(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + CLASS_1_2978C3AFB9C9E5D0_METHOD_1_50815B707A50BF07_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Class_1_2978C3AFB9C9E5D0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2978C3AFB9C9E5D0*))((::PBYTE)hIl2Cpp + CLASS_1_2978C3AFB9C9E5D0_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2978C3AFB9C9E5D0_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2978C3AFB9C9E5D0_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_72D450EFB5F053CF(::Class_1_2978C3AFB9C9E5D0* a1, ::Class_1_2978C3AFB9C9E5D0* a2)
	{
		return ((::System::Boolean(*)(::Class_1_2978C3AFB9C9E5D0*, ::Class_1_2978C3AFB9C9E5D0*))((::PBYTE)hIl2Cpp + CLASS_1_2978C3AFB9C9E5D0_METHOD_1_72D450EFB5F053CF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_2B93782B6F75FCCE(::Class_1_2978C3AFB9C9E5D0* a1, ::Class_1_2978C3AFB9C9E5D0* a2)
	{
		return ((::System::Boolean(*)(::Class_1_2978C3AFB9C9E5D0*, ::Class_1_2978C3AFB9C9E5D0*))((::PBYTE)hIl2Cpp + CLASS_1_2978C3AFB9C9E5D0_METHOD_1_2B93782B6F75FCCE_OFFSET))(a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2978C3AFB9C9E5D0_TOSTRING_OFFSET))(this);
	}
};
