#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_110.h"
#include "unitysdk/RPG/Client/IPVersion.h"
#include "unitysdk/System/Threading/SpinLock.h"

class Class_1_2978C3AFB9C9E5D0;
class Class_1_DFBCCCD7D8D6C4CC;
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Net { class IPEndPoint; }

#define CLASS_2_44318D6A94315B0F_METHOD_2_737961BD25442F05_OFFSET UNITYSDK_OFFSET(0x1D7AA200)
#define CLASS_2_44318D6A94315B0F_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1D7A5BF0)
#define CLASS_2_44318D6A94315B0F_METHOD_2_84007BDAD2BF8337_OFFSET UNITYSDK_OFFSET(0x1D7AA330)
#define CLASS_2_44318D6A94315B0F_METHOD_2_90F2B78916ECF9A0_OFFSET UNITYSDK_OFFSET(0x1D7A5C00)
#define CLASS_2_44318D6A94315B0F_METHOD_2_B7781A3D4E91A7C2_OFFSET UNITYSDK_OFFSET(0x1D7A56D0)
#define CLASS_2_44318D6A94315B0F_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1D7AA1F0)
#define CLASS_2_44318D6A94315B0F__CTOR_OFFSET UNITYSDK_OFFSET(0x1D796090)
#define CLASS_2_44318D6A94315B0F___COMPAREBYPING_B__12_0_OFFSET UNITYSDK_OFFSET(0x1D7AA4D0)

inline static constexpr unsigned int Class_2_44318D6A94315B0F_TypeDefinitionIndex = 42248;

class Class_2_44318D6A94315B0F : public ::Class_1_43BD383C98B4C0C5_110
{
public:
	::System::UInt64 NNCJKDCPOPL; // 0x10
	::RPG::Client::IPVersion GNOEGILFEMD; // 0x18
	::System::UInt64 FIIKBKANNEB; // 0x20
	::System::Boolean PBBHGMLMBJL; // 0x28
	::System::Boolean EGGNNPNDIDD; // 0x29
	::System::Threading::SpinLock LOBJOHFGICK; // 0x2C

	::System::Void _ctor(::Class_1_DFBCCCD7D8D6C4CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DFBCCCD7D8D6C4CC*))((::PBYTE)hIl2Cpp + CLASS_2_44318D6A94315B0F__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44318D6A94315B0F_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_B7781A3D4E91A7C2(::Class_1_2978C3AFB9C9E5D0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2978C3AFB9C9E5D0*))((::PBYTE)hIl2Cpp + CLASS_2_44318D6A94315B0F_METHOD_2_B7781A3D4E91A7C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44318D6A94315B0F_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Method_2_90F2B78916ECF9A0(::RPG::Client::IPVersion& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IPVersion&))((::PBYTE)hIl2Cpp + CLASS_2_44318D6A94315B0F_METHOD_2_90F2B78916ECF9A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_84007BDAD2BF8337(::System::Net::IPEndPoint* a1, ::System::Net::IPEndPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + CLASS_2_44318D6A94315B0F_METHOD_2_84007BDAD2BF8337_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737961BD25442F05(::RPG::Client::IPVersion a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + CLASS_2_44318D6A94315B0F_METHOD_2_737961BD25442F05_OFFSET))(this, a1);
	}

	::System::Void __CompareByPing_b__12_0(::System::Collections::Generic::IList_1<::System::UInt64>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + CLASS_2_44318D6A94315B0F___COMPAREBYPING_B__12_0_OFFSET))(this, a1);
	}
};
