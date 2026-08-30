#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1322;
class Class_0_16E4307DCC419505_338;
class Class_1_9245418C99B6B18D;
namespace RPG::Client::RedDot { template <typename T> class IRedDotChecker_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BB7B605B642C33F8_METHOD_1_18B8B3C7AE5E95BB_OFFSET UNITYSDK_OFFSET(0x152053B0)
#define CLASS_1_BB7B605B642C33F8_METHOD_1_739EE38A02D4302A_OFFSET UNITYSDK_OFFSET(0x152052A0)
#define CLASS_1_BB7B605B642C33F8_METHOD_1_A7B1B50781373DB6_OFFSET UNITYSDK_OFFSET(0x15206110)
#define CLASS_1_BB7B605B642C33F8_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x15206520)
#define CLASS_1_BB7B605B642C33F8_METHOD_1_EEA3CCF9D76A4858_OFFSET UNITYSDK_OFFSET(0x15205D20)
#define CLASS_1_BB7B605B642C33F8__CTOR_OFFSET UNITYSDK_OFFSET(0x152051D0)

inline static constexpr unsigned int Class_1_BB7B605B642C33F8_TypeDefinitionIndex = 78695;

class Class_1_BB7B605B642C33F8 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* HOJNACIFLKB; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_1322*>* EEMPAAFDLAP; // 0x18
	::System::Boolean EJDEKKEOHBE; // 0x20

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_1322*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_1322*>*))((::PBYTE)hIl2Cpp + CLASS_1_BB7B605B642C33F8__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_739EE38A02D4302A(::System::String* a1, ::Class_0_16E4307DCC419505_1322*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_1322*&))((::PBYTE)hIl2Cpp + CLASS_1_BB7B605B642C33F8_METHOD_1_739EE38A02D4302A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_18B8B3C7AE5E95BB(::Class_1_9245418C99B6B18D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9245418C99B6B18D*))((::PBYTE)hIl2Cpp + CLASS_1_BB7B605B642C33F8_METHOD_1_18B8B3C7AE5E95BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_EEA3CCF9D76A4858(::Class_0_16E4307DCC419505_338* a1, ::System::Action_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_338*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_BB7B605B642C33F8_METHOD_1_EEA3CCF9D76A4858_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A7B1B50781373DB6(::Class_0_16E4307DCC419505_338* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_338*))((::PBYTE)hIl2Cpp + CLASS_1_BB7B605B642C33F8_METHOD_1_A7B1B50781373DB6_OFFSET))(this, a1);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB7B605B642C33F8_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}
};
