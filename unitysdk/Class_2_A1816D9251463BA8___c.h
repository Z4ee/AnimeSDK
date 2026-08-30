#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3CA736257F0420E6;
class Class_1_D17272E82AE804C2_799;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A1816D9251463BA8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B9BB70)
#define CLASS_2_A1816D9251463BA8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9BBB0)
#define CLASS_2_A1816D9251463BA8___C__SENDPIXAIRGETDATACSREQ_B__5_0_OFFSET UNITYSDK_OFFSET(0x18B9BBC0)
#define CLASS_2_A1816D9251463BA8___C__SENDPIXAIRQUITSTAGECSREQ_B__9_0_OFFSET UNITYSDK_OFFSET(0x18B9BBD0)

inline static constexpr unsigned int Class_2_A1816D9251463BA8___c_TypeDefinitionIndex = 78741;

class Class_2_A1816D9251463BA8___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_3CA736257F0420E6*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_1_3CA736257F0420E6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A1816D9251463BA8___c_TypeDefinitionIndex)->GetStaticField(0x2B330);
	}
	static ::System::Action_1<::Class_1_D17272E82AE804C2_799*>** StaticGet___9__9_0()
	{
		return (::System::Action_1<::Class_1_D17272E82AE804C2_799*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A1816D9251463BA8___c_TypeDefinitionIndex)->GetStaticField(0x2B338);
	}
	static ::Class_2_A1816D9251463BA8___c** StaticGet___9()
	{
		return (::Class_2_A1816D9251463BA8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A1816D9251463BA8___c_TypeDefinitionIndex)->GetStaticField(0x2B340);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A1816D9251463BA8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1816D9251463BA8___C__CTOR_OFFSET))(this);
	}

	::System::Void _SendPixAirGetDataCsReq_b__5_0(::Class_1_3CA736257F0420E6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3CA736257F0420E6*))((::PBYTE)hIl2Cpp + CLASS_2_A1816D9251463BA8___C__SENDPIXAIRGETDATACSREQ_B__5_0_OFFSET))(this, a1);
	}

	::System::Void _SendPixAirQuitStageCsReq_b__9_0(::Class_1_D17272E82AE804C2_799* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_799*))((::PBYTE)hIl2Cpp + CLASS_2_A1816D9251463BA8___C__SENDPIXAIRQUITSTAGECSREQ_B__9_0_OFFSET))(this, a1);
	}
};
