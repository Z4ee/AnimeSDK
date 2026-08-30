#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CityAtmosphereThread/ECityAtmosphereThreadType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1440;
class Class_1_1AA5E835034669CC;

#define CLASS_1_31568DCDB8BDC882_DISPOSE_OFFSET UNITYSDK_OFFSET(0xED7F4B0)
#define CLASS_1_31568DCDB8BDC882_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xED7EFE0)
#define CLASS_1_31568DCDB8BDC882_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xED7F530)
#define CLASS_1_31568DCDB8BDC882_METHOD_1_8F09A7EF5722FDA4_OFFSET UNITYSDK_OFFSET(0xED7F060)
#define CLASS_1_31568DCDB8BDC882_METHOD_1_975CE66F89C64072_OFFSET UNITYSDK_OFFSET(0xED7F0F0)
#define CLASS_1_31568DCDB8BDC882_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0xED7F000)
#define CLASS_1_31568DCDB8BDC882_METHOD_1_AA169839CB93802A_1_OFFSET UNITYSDK_OFFSET(0xED7F240)
#define CLASS_1_31568DCDB8BDC882_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xED7F190)
#define CLASS_1_31568DCDB8BDC882_METHOD_1_C1B4662E5F4E0C15_OFFSET UNITYSDK_OFFSET(0xED7F2F0)
#define CLASS_1_31568DCDB8BDC882_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xED7EFF0)
#define CLASS_1_31568DCDB8BDC882__CTOR_OFFSET UNITYSDK_OFFSET(0xED7F380)

inline static constexpr unsigned int Class_1_31568DCDB8BDC882_TypeDefinitionIndex = 80787;

class Class_1_31568DCDB8BDC882 : public ::System::Object
{
public:
	static ::Class_1_31568DCDB8BDC882** StaticGet__Instance_k__BackingField()
	{
		return (::Class_1_31568DCDB8BDC882**)Il2CppClass::FromTypeDefinitionIndex(Class_1_31568DCDB8BDC882_TypeDefinitionIndex)->GetStaticField(0xC600);
	}
	::Class_1_1AA5E835034669CC* HFBMEAGHJLH; // 0x10
	::Il2CppArray<::Class_0_16E4307DCC419505_1440*>* EPBBEPGBONO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31568DCDB8BDC882__CTOR_OFFSET))(this);
	}

	static ::Class_1_31568DCDB8BDC882* get_Instance()
	{
		return ((::Class_1_31568DCDB8BDC882*(*)())((::PBYTE)hIl2Cpp + CLASS_1_31568DCDB8BDC882_GET_INSTANCE_OFFSET))();
	}

	static ::System::Void set_Instance(::Class_1_31568DCDB8BDC882* a1)
	{
		return ((::System::Void(*)(::Class_1_31568DCDB8BDC882*))((::PBYTE)hIl2Cpp + CLASS_1_31568DCDB8BDC882_SET_INSTANCE_OFFSET))(a1);
	}

	static ::Class_1_1AA5E835034669CC* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_1AA5E835034669CC*(*)())((::PBYTE)hIl2Cpp + CLASS_1_31568DCDB8BDC882_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	static ::System::Void Method_1_8F09A7EF5722FDA4(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_31568DCDB8BDC882_METHOD_1_8F09A7EF5722FDA4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_975CE66F89C64072(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_31568DCDB8BDC882_METHOD_1_975CE66F89C64072_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_31568DCDB8BDC882_METHOD_1_AA169839CB93802A_OFFSET))();
	}

	static ::System::Void Method_1_AA169839CB93802A_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_31568DCDB8BDC882_METHOD_1_AA169839CB93802A_1_OFFSET))();
	}

	static ::System::Void Method_1_C1B4662E5F4E0C15(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::RPG::Client::CityAtmosphereThread::ECityAtmosphereThreadType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_31568DCDB8BDC882_METHOD_1_C1B4662E5F4E0C15_OFFSET))(a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31568DCDB8BDC882_DISPOSE_OFFSET))(this);
	}

	::Class_1_1AA5E835034669CC* Method_1_24748FC20F375725()
	{
		return ((::Class_1_1AA5E835034669CC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31568DCDB8BDC882_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
