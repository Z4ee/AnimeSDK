#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4AB01E8FEDBFD1EC_Class_1_8F063601BC8471E7;
class Class_1_D54F41AAAD02B794;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_4AB01E8FEDBFD1EC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBDD200)
#define CLASS_1_4AB01E8FEDBFD1EC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDD240)
#define CLASS_1_4AB01E8FEDBFD1EC___C___NOTIFYCOOPBOSSPVELEVELENDSTAT_B__158_0_OFFSET UNITYSDK_OFFSET(0x1CBDD2E0)
#define CLASS_1_4AB01E8FEDBFD1EC___C___REPLACECOOPBOSSWAVEITEMS_B__42_0_OFFSET UNITYSDK_OFFSET(0x1CBDD250)

inline static constexpr unsigned int Class_1_4AB01E8FEDBFD1EC___c_TypeDefinitionIndex = 43072;

class Class_1_4AB01E8FEDBFD1EC___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_1_4AB01E8FEDBFD1EC_Class_1_8F063601BC8471E7*>** StaticGet___9__158_0()
	{
		return (::System::Predicate_1<::Class_1_4AB01E8FEDBFD1EC_Class_1_8F063601BC8471E7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AB01E8FEDBFD1EC___c_TypeDefinitionIndex)->GetStaticField(0x4D170);
	}
	static ::System::Predicate_1<::Class_1_D54F41AAAD02B794*>** StaticGet___9__42_0()
	{
		return (::System::Predicate_1<::Class_1_D54F41AAAD02B794*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AB01E8FEDBFD1EC___c_TypeDefinitionIndex)->GetStaticField(0x4D178);
	}
	static ::Class_1_4AB01E8FEDBFD1EC___c** StaticGet___9()
	{
		return (::Class_1_4AB01E8FEDBFD1EC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AB01E8FEDBFD1EC___c_TypeDefinitionIndex)->GetStaticField(0x4D180);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __ReplaceCoopBossWaveItems_b__42_0(::Class_1_D54F41AAAD02B794* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D54F41AAAD02B794*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC___C___REPLACECOOPBOSSWAVEITEMS_B__42_0_OFFSET))(this, a1);
	}

	::System::Boolean __NotifyCoopBossPveLevelEndStat_b__158_0(::Class_1_4AB01E8FEDBFD1EC_Class_1_8F063601BC8471E7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4AB01E8FEDBFD1EC_Class_1_8F063601BC8471E7*))((::PBYTE)hIl2Cpp + CLASS_1_4AB01E8FEDBFD1EC___C___NOTIFYCOOPBOSSPVELEVELENDSTAT_B__158_0_OFFSET))(this, a1);
	}
};
