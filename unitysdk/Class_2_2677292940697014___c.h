#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_333;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_2677292940697014___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB48D510)
#define CLASS_2_2677292940697014___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB48D550)
#define CLASS_2_2677292940697014___C__SENDSETLINEUPCSREQ_B__8_1_OFFSET UNITYSDK_OFFSET(0xB48D560)
#define CLASS_2_2677292940697014___C__SENDSTARTCSREQ_B__9_0_OFFSET UNITYSDK_OFFSET(0xB48D570)

inline static constexpr unsigned int Class_2_2677292940697014___c_TypeDefinitionIndex = 64000;

class Class_2_2677292940697014___c : public ::System::Object
{
public:
	static ::Class_2_2677292940697014___c** StaticGet___9()
	{
		return (::Class_2_2677292940697014___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2677292940697014___c_TypeDefinitionIndex)->GetStaticField(0x6E30);
	}
	static ::System::Action_1<::Class_1_D17272E82AE804C2_333*>** StaticGet___9__9_0()
	{
		return (::System::Action_1<::Class_1_D17272E82AE804C2_333*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2677292940697014___c_TypeDefinitionIndex)->GetStaticField(0x6E38);
	}
	static ::System::Action** StaticGet___9__8_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2677292940697014___c_TypeDefinitionIndex)->GetStaticField(0x6E40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2677292940697014___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2677292940697014___C__CTOR_OFFSET))(this);
	}

	::System::Void _SendSetLineupCsReq_b__8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2677292940697014___C__SENDSETLINEUPCSREQ_B__8_1_OFFSET))(this);
	}

	::System::Void _SendStartCsReq_b__9_0(::Class_1_D17272E82AE804C2_333* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_333*))((::PBYTE)hIl2Cpp + CLASS_2_2677292940697014___C__SENDSTARTCSREQ_B__9_0_OFFSET))(this, a1);
	}
};
