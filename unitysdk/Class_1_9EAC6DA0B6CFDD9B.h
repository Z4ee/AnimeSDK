#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1254;
namespace RPG::Client { class Booklet; }
namespace RPG::Client { class IBookletView; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9EAC6DA0B6CFDD9B_METHOD_1_01ACC9B513C5E7F7_OFFSET UNITYSDK_OFFSET(0xBA7FF00)
#define CLASS_1_9EAC6DA0B6CFDD9B_METHOD_1_524177E2D47638AE_1_OFFSET UNITYSDK_OFFSET(0xBA7FE40)
#define CLASS_1_9EAC6DA0B6CFDD9B_METHOD_1_524177E2D47638AE_OFFSET UNITYSDK_OFFSET(0xBA7FD80)
#define CLASS_1_9EAC6DA0B6CFDD9B_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xBA80080)
#define CLASS_1_9EAC6DA0B6CFDD9B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBA80040)
#define CLASS_1_9EAC6DA0B6CFDD9B_METHOD_1_D1CA286D7E1F7F69_OFFSET UNITYSDK_OFFSET(0xBA7FD30)
#define CLASS_1_9EAC6DA0B6CFDD9B__CTOR_OFFSET UNITYSDK_OFFSET(0xBA800C0)

inline static constexpr unsigned int Class_1_9EAC6DA0B6CFDD9B_TypeDefinitionIndex = 72415;

class Class_1_9EAC6DA0B6CFDD9B : public ::System::Object
{
public:
	::RPG::Client::IBookletView* CFKHNPGEAJA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::Class_0_16E4307DCC419505_1254*>*>* EPKIGJMDIED; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAC6DA0B6CFDD9B__CTOR_OFFSET))(this);
	}

	::RPG::Client::Booklet* Method_1_D1CA286D7E1F7F69()
	{
		return ((::RPG::Client::Booklet*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAC6DA0B6CFDD9B_METHOD_1_D1CA286D7E1F7F69_OFFSET))(this);
	}

	::System::Void Method_1_524177E2D47638AE(::RPG::Client::IBookletView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IBookletView*))((::PBYTE)hIl2Cpp + CLASS_1_9EAC6DA0B6CFDD9B_METHOD_1_524177E2D47638AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_524177E2D47638AE_1(::RPG::Client::IBookletView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IBookletView*))((::PBYTE)hIl2Cpp + CLASS_1_9EAC6DA0B6CFDD9B_METHOD_1_524177E2D47638AE_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_01ACC9B513C5E7F7(::Class_0_16E4307DCC419505_1254* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1254*))((::PBYTE)hIl2Cpp + CLASS_1_9EAC6DA0B6CFDD9B_METHOD_1_01ACC9B513C5E7F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAC6DA0B6CFDD9B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EAC6DA0B6CFDD9B_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
