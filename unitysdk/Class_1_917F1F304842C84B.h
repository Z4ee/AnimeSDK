#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::Client { class SpecialVisionSystem; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_917F1F304842C84B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18510B40)
#define CLASS_1_917F1F304842C84B_METHOD_1_0772661406F51ADB_OFFSET UNITYSDK_OFFSET(0x1850FF70)
#define CLASS_1_917F1F304842C84B_METHOD_1_1B7FE474DC0310B3_OFFSET UNITYSDK_OFFSET(0x18510A20)
#define CLASS_1_917F1F304842C84B_METHOD_1_46FADA273D811721_OFFSET UNITYSDK_OFFSET(0x1850F8E0)
#define CLASS_1_917F1F304842C84B_METHOD_1_5205D8BC14EAAFA7_OFFSET UNITYSDK_OFFSET(0x1850FE50)
#define CLASS_1_917F1F304842C84B_METHOD_1_6173AF17811AED4B_1_OFFSET UNITYSDK_OFFSET(0x18510AC0)
#define CLASS_1_917F1F304842C84B_METHOD_1_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x18510600)
#define CLASS_1_917F1F304842C84B_METHOD_1_7C43CA1991671A41_OFFSET UNITYSDK_OFFSET(0x1850F6F0)
#define CLASS_1_917F1F304842C84B_METHOD_1_7FA4071B282207B3_OFFSET UNITYSDK_OFFSET(0x18510B80)
#define CLASS_1_917F1F304842C84B_METHOD_1_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x18510720)
#define CLASS_1_917F1F304842C84B_METHOD_1_97285E397E8F5091_OFFSET UNITYSDK_OFFSET(0x185103E0)
#define CLASS_1_917F1F304842C84B_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x1850F940)
#define CLASS_1_917F1F304842C84B_METHOD_1_D12268C88ECA46C9_OFFSET UNITYSDK_OFFSET(0x18510680)
#define CLASS_1_917F1F304842C84B_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x1850FB40)
#define CLASS_1_917F1F304842C84B__CCTOR_OFFSET UNITYSDK_OFFSET(0x18510E60)
#define CLASS_1_917F1F304842C84B__CTOR_OFFSET UNITYSDK_OFFSET(0x18510E40)

inline static constexpr unsigned int Class_1_917F1F304842C84B_TypeDefinitionIndex = 68653;

class Class_1_917F1F304842C84B : public ::System::Object
{
public:
	static ::System::String** StaticGet_EJJNJKGNCCL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_917F1F304842C84B_TypeDefinitionIndex)->GetStaticField(0x5BEE0);
	}
	static ::System::String** StaticGet_LMNIFPBCPIF()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_917F1F304842C84B_TypeDefinitionIndex)->GetStaticField(0x5BEE8);
	}
	static ::System::String** StaticGet_HPEGDAHBCOM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_917F1F304842C84B_TypeDefinitionIndex)->GetStaticField(0x5BEF0);
	}
	static ::Class_1_917F1F304842C84B** StaticGet_KKHLPDBJAIL()
	{
		return (::Class_1_917F1F304842C84B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_917F1F304842C84B_TypeDefinitionIndex)->GetStaticField(0x5BEF8);
	}
	static ::System::String** StaticGet_POEEPKIPMLM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_917F1F304842C84B_TypeDefinitionIndex)->GetStaticField(0x5BF00);
	}
	static ::System::String** StaticGet_ABKJOBAFHDD()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_917F1F304842C84B_TypeDefinitionIndex)->GetStaticField(0x5BF08);
	}
	static ::System::String** StaticGet_GNHJBHKEPKM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_917F1F304842C84B_TypeDefinitionIndex)->GetStaticField(0x5BF10);
	}
	static ::System::String** StaticGet_EDBHFLBEFNC()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_917F1F304842C84B_TypeDefinitionIndex)->GetStaticField(0x5BF18);
	}
	static ::System::String** StaticGet_EIBHDGJCMIL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_917F1F304842C84B_TypeDefinitionIndex)->GetStaticField(0x5BF20);
	}
	static ::System::String** StaticGet_GEJLDEBJMDJ()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_917F1F304842C84B_TypeDefinitionIndex)->GetStaticField(0x5BF28);
	}
	static ::System::String** StaticGet_EHONIOCBAEE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_917F1F304842C84B_TypeDefinitionIndex)->GetStaticField(0x5BF30);
	}
	::System::String* FPIGFFJNEOO; // 0x10
	::RPG::Client::SpecialVisionSystem* CGKCJPPHKPK; // 0x18
	::RPG::GameCore::GameEntity* JPOLHHNOAOI; // 0x20
	::RPG::GameCore::EventManager* EBOCGAJBGPG; // 0x28
	::RPG::GameCore::GameEntity* HPANEMEFNPH; // 0x30
	::System::Int32 AMMGGCGKHLM; // 0x38
	::System::UInt32 OAMECKMNKGD; // 0x3C
	::System::UInt32 MFHCPNAKBGH; // 0x40
	::System::UInt32 AANHEMFBHCG; // 0x44
	::System::Boolean AHKAHJLAGEG; // 0x48
	::System::Boolean ECLBIAAFNNK; // 0x49
	::System::Boolean MIBHNBOOAHB; // 0x4A
	::System::Boolean POHEELFNCOM; // 0x4B
	::System::Single NBDACLLLBOP; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_917F1F304842C84B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_917F1F304842C84B__CCTOR_OFFSET))();
	}

	::System::Void Method_1_7C43CA1991671A41(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_917F1F304842C84B_METHOD_1_7C43CA1991671A41_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_46FADA273D811721(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_917F1F304842C84B_METHOD_1_46FADA273D811721_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_917F1F304842C84B_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Boolean Method_1_0772661406F51ADB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_917F1F304842C84B_METHOD_1_0772661406F51ADB_OFFSET))(this);
	}

	::System::Boolean Method_1_97285E397E8F5091()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_917F1F304842C84B_METHOD_1_97285E397E8F5091_OFFSET))(this);
	}

	::System::Void Method_1_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_917F1F304842C84B_METHOD_1_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_1_6173AF17811AED4B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_917F1F304842C84B_METHOD_1_6173AF17811AED4B_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_917F1F304842C84B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1B7FE474DC0310B3(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_917F1F304842C84B_METHOD_1_1B7FE474DC0310B3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D12268C88ECA46C9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_917F1F304842C84B_METHOD_1_D12268C88ECA46C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FA4071B282207B3(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_917F1F304842C84B_METHOD_1_7FA4071B282207B3_OFFSET))(this, a1);
	}

	::System::Void Method_1_5205D8BC14EAAFA7(::System::UInt32 a1, ::System::String* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_917F1F304842C84B_METHOD_1_5205D8BC14EAAFA7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_917F1F304842C84B_METHOD_1_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_917F1F304842C84B_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}
};
