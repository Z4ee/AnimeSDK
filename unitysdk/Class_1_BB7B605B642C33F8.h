#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1467;
class Class_0_16E4307DCC419505_409;
class Class_1_9245418C99B6B18D;
namespace RPG::Client::RedDot { template <typename T> class IRedDotChecker_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BB7B605B642C33F8_METHOD_1_18B8B3C7AE5E95BB_OFFSET UNITYSDK_OFFSET(0x154AEAD0)
#define CLASS_1_BB7B605B642C33F8_METHOD_1_739EE38A02D4302A_OFFSET UNITYSDK_OFFSET(0x154AE9C0)
#define CLASS_1_BB7B605B642C33F8_METHOD_1_81C52751BF918D1E_OFFSET UNITYSDK_OFFSET(0x154AF440)
#define CLASS_1_BB7B605B642C33F8_METHOD_1_81E7A4FD20EC860C_OFFSET UNITYSDK_OFFSET(0x154AF830)
#define CLASS_1_BB7B605B642C33F8_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x154AFB50)
#define CLASS_1_BB7B605B642C33F8__CTOR_OFFSET UNITYSDK_OFFSET(0x154AE8F0)

inline static constexpr unsigned int Class_1_BB7B605B642C33F8_TypeDefinitionIndex = 79174;

class Class_1_BB7B605B642C33F8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_1467*>* EEMPAAFDLAP; // 0x10
	::System::Action_1<::System::String*>* HOJNACIFLKB; // 0x18
	::System::Boolean EJDEKKEOHBE; // 0x20

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_1467*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_1467*>*))((::PBYTE)hIl2Cpp + CLASS_1_BB7B605B642C33F8__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_739EE38A02D4302A(::System::String* a1, ::Class_0_16E4307DCC419505_1467*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_1467*&))((::PBYTE)hIl2Cpp + CLASS_1_BB7B605B642C33F8_METHOD_1_739EE38A02D4302A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_18B8B3C7AE5E95BB(::Class_1_9245418C99B6B18D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9245418C99B6B18D*))((::PBYTE)hIl2Cpp + CLASS_1_BB7B605B642C33F8_METHOD_1_18B8B3C7AE5E95BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_81C52751BF918D1E(::Class_0_16E4307DCC419505_409* a1, ::System::Action_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_409*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_BB7B605B642C33F8_METHOD_1_81C52751BF918D1E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_81E7A4FD20EC860C(::Class_0_16E4307DCC419505_409* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_409*))((::PBYTE)hIl2Cpp + CLASS_1_BB7B605B642C33F8_METHOD_1_81E7A4FD20EC860C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB7B605B642C33F8_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}
};
