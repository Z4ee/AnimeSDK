#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_781;
class Class_1_F7D93C3E133D501A_2;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A1816D9251463BA8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B16320)
#define CLASS_2_A1816D9251463BA8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18B16360)
#define CLASS_2_A1816D9251463BA8___C__SENDPIXAIRGETDATACSREQ_B__5_0_OFFSET UNITYSDK_OFFSET(0x18B16370)
#define CLASS_2_A1816D9251463BA8___C__SENDPIXAIRQUITSTAGECSREQ_B__9_0_OFFSET UNITYSDK_OFFSET(0x18B16380)

inline static constexpr unsigned int Class_2_A1816D9251463BA8___c_TypeDefinitionIndex = 75194;

class Class_2_A1816D9251463BA8___c : public ::System::Object
{
public:
	static ::Class_2_A1816D9251463BA8___c** StaticGet___9()
	{
		return (::Class_2_A1816D9251463BA8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A1816D9251463BA8___c_TypeDefinitionIndex)->GetStaticField(0x59A0);
	}
	static ::System::Action_1<::Class_1_F7D93C3E133D501A_2*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_1_F7D93C3E133D501A_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A1816D9251463BA8___c_TypeDefinitionIndex)->GetStaticField(0x59A8);
	}
	static ::System::Action_1<::Class_1_D17272E82AE804C2_781*>** StaticGet___9__9_0()
	{
		return (::System::Action_1<::Class_1_D17272E82AE804C2_781*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A1816D9251463BA8___c_TypeDefinitionIndex)->GetStaticField(0x59B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A1816D9251463BA8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1816D9251463BA8___C__CTOR_OFFSET))(this);
	}

	::System::Void _SendPixAirGetDataCsReq_b__5_0(::Class_1_F7D93C3E133D501A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F7D93C3E133D501A_2*))((::PBYTE)hIl2Cpp + CLASS_2_A1816D9251463BA8___C__SENDPIXAIRGETDATACSREQ_B__5_0_OFFSET))(this, a1);
	}

	::System::Void _SendPixAirQuitStageCsReq_b__9_0(::Class_1_D17272E82AE804C2_781* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_781*))((::PBYTE)hIl2Cpp + CLASS_2_A1816D9251463BA8___C__SENDPIXAIRQUITSTAGECSREQ_B__9_0_OFFSET))(this, a1);
	}
};
