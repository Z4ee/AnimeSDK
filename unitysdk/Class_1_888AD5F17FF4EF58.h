#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CityAtmosphereThread/ECityAtmosphereThreadType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1026;
class Class_1_33CD93C022C9C39F;

#define CLASS_1_888AD5F17FF4EF58_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1153CB80)
#define CLASS_1_888AD5F17FF4EF58_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1153C5F0)
#define CLASS_1_888AD5F17FF4EF58_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1153CC00)
#define CLASS_1_888AD5F17FF4EF58_METHOD_1_5D0C5F986FBADE92_OFFSET UNITYSDK_OFFSET(0x1153C670)
#define CLASS_1_888AD5F17FF4EF58_METHOD_1_8E74AD7CADDB24BA_OFFSET UNITYSDK_OFFSET(0x1153C940)
#define CLASS_1_888AD5F17FF4EF58_METHOD_1_96826B3FCA681BFB_OFFSET UNITYSDK_OFFSET(0x1153C710)
#define CLASS_1_888AD5F17FF4EF58_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x1153C610)
#define CLASS_1_888AD5F17FF4EF58_METHOD_1_AA169839CB93802A_1_OFFSET UNITYSDK_OFFSET(0x1153C880)
#define CLASS_1_888AD5F17FF4EF58_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x1153C7C0)
#define CLASS_1_888AD5F17FF4EF58_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1153C600)
#define CLASS_1_888AD5F17FF4EF58__CTOR_OFFSET UNITYSDK_OFFSET(0x1153C9E0)

inline static constexpr unsigned int Class_1_888AD5F17FF4EF58_TypeDefinitionIndex = 64486;

class Class_1_888AD5F17FF4EF58 : public ::System::Object
{
public:
	static ::Class_1_888AD5F17FF4EF58** StaticGet__Instance_k__BackingField()
	{
		return (::Class_1_888AD5F17FF4EF58**)Il2CppClass::FromTypeDefinitionIndex(Class_1_888AD5F17FF4EF58_TypeDefinitionIndex)->GetStaticField(0x40EF0);
	}
	::Il2CppArray<::Class_0_16E4307DCC419505_1026*>* Field_1_1; // 0x10
	::Class_1_33CD93C022C9C39F* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_888AD5F17FF4EF58__CTOR_OFFSET))(this);
	}

	static ::Class_1_888AD5F17FF4EF58* get_Instance()
	{
		return ((::Class_1_888AD5F17FF4EF58*(*)())((::PBYTE)hIl2Cpp + CLASS_1_888AD5F17FF4EF58_GET_INSTANCE_OFFSET))();
	}

	static ::System::Void set_Instance(::Class_1_888AD5F17FF4EF58* value)
	{
		return ((::System::Void(*)(::Class_1_888AD5F17FF4EF58*))((::PBYTE)hIl2Cpp + CLASS_1_888AD5F17FF4EF58_SET_INSTANCE_OFFSET))(value);
	}

	static ::Class_1_33CD93C022C9C39F* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_33CD93C022C9C39F*(*)())((::PBYTE)hIl2Cpp + CLASS_1_888AD5F17FF4EF58_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	static ::System::Void Method_1_5D0C5F986FBADE92(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_888AD5F17FF4EF58_METHOD_1_5D0C5F986FBADE92_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_96826B3FCA681BFB(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_888AD5F17FF4EF58_METHOD_1_96826B3FCA681BFB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_888AD5F17FF4EF58_METHOD_1_AA169839CB93802A_OFFSET))();
	}

	static ::System::Void Method_1_AA169839CB93802A_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_888AD5F17FF4EF58_METHOD_1_AA169839CB93802A_1_OFFSET))();
	}

	static ::System::Void Method_1_8E74AD7CADDB24BA(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_888AD5F17FF4EF58_METHOD_1_8E74AD7CADDB24BA_OFFSET))(a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_888AD5F17FF4EF58_DISPOSE_OFFSET))(this);
	}

	::Class_1_33CD93C022C9C39F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_33CD93C022C9C39F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_888AD5F17FF4EF58_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
