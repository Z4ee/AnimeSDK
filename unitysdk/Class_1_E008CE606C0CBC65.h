#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CityAtmosphereThread/ECityAtmosphereThreadType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1228;
class Class_1_33CD93C022C9C39F;

#define CLASS_1_E008CE606C0CBC65_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD19EDE0)
#define CLASS_1_E008CE606C0CBC65_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xD19E8B0)
#define CLASS_1_E008CE606C0CBC65_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xD19EE60)
#define CLASS_1_E008CE606C0CBC65_METHOD_1_3A68DB68020E5E2D_OFFSET UNITYSDK_OFFSET(0xD19E930)
#define CLASS_1_E008CE606C0CBC65_METHOD_1_96826B3FCA681BFB_OFFSET UNITYSDK_OFFSET(0xD19E9C0)
#define CLASS_1_E008CE606C0CBC65_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0xD19E8D0)
#define CLASS_1_E008CE606C0CBC65_METHOD_1_AA169839CB93802A_1_OFFSET UNITYSDK_OFFSET(0xD19EB10)
#define CLASS_1_E008CE606C0CBC65_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xD19EA60)
#define CLASS_1_E008CE606C0CBC65_METHOD_1_C1B4662E5F4E0C15_OFFSET UNITYSDK_OFFSET(0xD19EBC0)
#define CLASS_1_E008CE606C0CBC65_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xD19E8C0)
#define CLASS_1_E008CE606C0CBC65__CTOR_OFFSET UNITYSDK_OFFSET(0xD19EC50)

inline static constexpr unsigned int Class_1_E008CE606C0CBC65_TypeDefinitionIndex = 74356;

class Class_1_E008CE606C0CBC65 : public ::System::Object
{
public:
	static ::Class_1_E008CE606C0CBC65** StaticGet__Instance_k__BackingField()
	{
		return (::Class_1_E008CE606C0CBC65**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E008CE606C0CBC65_TypeDefinitionIndex)->GetStaticField(0x5BB20);
	}
	::Class_1_33CD93C022C9C39F* Field_1_1; // 0x10
	::Il2CppArray<::Class_0_16E4307DCC419505_1228*>* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E008CE606C0CBC65__CTOR_OFFSET))(this);
	}

	static ::Class_1_E008CE606C0CBC65* get_Instance()
	{
		return ((::Class_1_E008CE606C0CBC65*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E008CE606C0CBC65_GET_INSTANCE_OFFSET))();
	}

	static ::System::Void set_Instance(::Class_1_E008CE606C0CBC65* a1)
	{
		return ((::System::Void(*)(::Class_1_E008CE606C0CBC65*))((::PBYTE)hIl2Cpp + CLASS_1_E008CE606C0CBC65_SET_INSTANCE_OFFSET))(a1);
	}

	static ::Class_1_33CD93C022C9C39F* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_33CD93C022C9C39F*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E008CE606C0CBC65_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	static ::System::Void Method_1_3A68DB68020E5E2D(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E008CE606C0CBC65_METHOD_1_3A68DB68020E5E2D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_96826B3FCA681BFB(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E008CE606C0CBC65_METHOD_1_96826B3FCA681BFB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E008CE606C0CBC65_METHOD_1_AA169839CB93802A_OFFSET))();
	}

	static ::System::Void Method_1_AA169839CB93802A_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E008CE606C0CBC65_METHOD_1_AA169839CB93802A_1_OFFSET))();
	}

	static ::System::Void Method_1_C1B4662E5F4E0C15(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E008CE606C0CBC65_METHOD_1_C1B4662E5F4E0C15_OFFSET))(a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E008CE606C0CBC65_DISPOSE_OFFSET))(this);
	}

	::Class_1_33CD93C022C9C39F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_33CD93C022C9C39F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E008CE606C0CBC65_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
