#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/Vector3Range.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class Class_3_475B169F337F3520_Class_1_3B76E13757985C28;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_475B169F337F3520_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1594DE50)
#define CLASS_3_475B169F337F3520_METHOD_3_1968CFB403DDD566_OFFSET UNITYSDK_OFFSET(0x1594E230)
#define CLASS_3_475B169F337F3520_METHOD_3_2412EC750EF42F64_OFFSET UNITYSDK_OFFSET(0x1594E810)
#define CLASS_3_475B169F337F3520_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1594DDB0)
#define CLASS_3_475B169F337F3520_METHOD_3_419782C7BE57521D_OFFSET UNITYSDK_OFFSET(0x1594E8D0)
#define CLASS_3_475B169F337F3520_METHOD_3_4C98B7D3A763231F_OFFSET UNITYSDK_OFFSET(0x1594E6A0)
#define CLASS_3_475B169F337F3520_METHOD_3_8CECE5FC7F88933F_OFFSET UNITYSDK_OFFSET(0x1594E780)
#define CLASS_3_475B169F337F3520_METHOD_3_928D3FDD560942B5_1_OFFSET UNITYSDK_OFFSET(0x1594E520)
#define CLASS_3_475B169F337F3520_METHOD_3_928D3FDD560942B5_OFFSET UNITYSDK_OFFSET(0x1594E0B0)
#define CLASS_3_475B169F337F3520_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1594DD40)
#define CLASS_3_475B169F337F3520_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1594E490)
#define CLASS_3_475B169F337F3520_METHOD_3_A7B0183D5F99BB56_OFFSET UNITYSDK_OFFSET(0x1594E350)
#define CLASS_3_475B169F337F3520_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1594E410)
#define CLASS_3_475B169F337F3520_METHOD_3_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1594E330)
#define CLASS_3_475B169F337F3520_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1594DB80)
#define CLASS_3_475B169F337F3520__CCTOR_OFFSET UNITYSDK_OFFSET(0x1594DEA0)
#define CLASS_3_475B169F337F3520__CTOR_OFFSET UNITYSDK_OFFSET(0x1594DF20)

inline static constexpr unsigned int Class_3_475B169F337F3520_TypeDefinitionIndex = 74069;

class Class_3_475B169F337F3520 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_5 = 0x88; // 0x0
	::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* Field_3_0; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_475B169F337F3520_Class_1_3B76E13757985C28*>* Field_3_4; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::Vector3Range>* Field_3_1; // 0x58
	::System::Single Field_3_2; // 0x60
	::System::Single Field_3_3; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_475B169F337F3520__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_475B169F337F3520__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_475B169F337F3520_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_475B169F337F3520_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_475B169F337F3520_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_928D3FDD560942B5(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_475B169F337F3520_METHOD_3_928D3FDD560942B5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1968CFB403DDD566(::UnityEngine::RaycastHit& a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_3_475B169F337F3520_METHOD_3_1968CFB403DDD566_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A7B0183D5F99BB56(::UnityEngine::RaycastHit a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_3_475B169F337F3520_METHOD_3_A7B0183D5F99BB56_OFFSET))(this, a1);
	}

	static ::Class_3_475B169F337F3520* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_475B169F337F3520*(*)())((::PBYTE)hIl2Cpp + CLASS_3_475B169F337F3520_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_475B169F337F3520_METHOD_3_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_475B169F337F3520_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_475B169F337F3520_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_3_928D3FDD560942B5_1(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_475B169F337F3520_METHOD_3_928D3FDD560942B5_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4C98B7D3A763231F(::Class_3_475B169F337F3520_Class_1_3B76E13757985C28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_475B169F337F3520_Class_1_3B76E13757985C28*))((::PBYTE)hIl2Cpp + CLASS_3_475B169F337F3520_METHOD_3_4C98B7D3A763231F_OFFSET))(this, a1);
	}

	::System::Void Method_3_8CECE5FC7F88933F(::System::Int32 a1, ::MoleMole::Config::Vector3Range a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Config::Vector3Range))((::PBYTE)hIl2Cpp + CLASS_3_475B169F337F3520_METHOD_3_8CECE5FC7F88933F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_2412EC750EF42F64(::System::Int32 a1, ::MoleMole::Config::Vector3Range& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::Config::Vector3Range&))((::PBYTE)hIl2Cpp + CLASS_3_475B169F337F3520_METHOD_3_2412EC750EF42F64_OFFSET))(this, a1, a2);
	}

	::UnityEngine::RaycastHit Method_3_419782C7BE57521D(::System::Int32 a1)
	{
		return ((::UnityEngine::RaycastHit(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_475B169F337F3520_METHOD_3_419782C7BE57521D_OFFSET))(this, a1);
	}
};
