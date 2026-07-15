#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/BlockEnvDataStmState.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/System/Object.h"

class Class_1_E3144EBBA3CB68CA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_708F535CBD8003F3_METHOD_1_078DF7FA97C8BB47_OFFSET UNITYSDK_OFFSET(0x14B648D0)
#define CLASS_1_708F535CBD8003F3_METHOD_1_099C229CF1BB9083_OFFSET UNITYSDK_OFFSET(0x14B65340)
#define CLASS_1_708F535CBD8003F3_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x14B63250)
#define CLASS_1_708F535CBD8003F3_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x14B63260)
#define CLASS_1_708F535CBD8003F3_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x14B63240)
#define CLASS_1_708F535CBD8003F3_METHOD_1_3559476C7C86165D_OFFSET UNITYSDK_OFFSET(0x14B652E0)
#define CLASS_1_708F535CBD8003F3_METHOD_1_3BE5DBAE268F9022_OFFSET UNITYSDK_OFFSET(0x14B63C40)
#define CLASS_1_708F535CBD8003F3_METHOD_1_490B5123E6F6015E_OFFSET UNITYSDK_OFFSET(0x14B63270)
#define CLASS_1_708F535CBD8003F3_METHOD_1_5B3FA9FDD7D2BA8C_1_OFFSET UNITYSDK_OFFSET(0x14B64CE0)
#define CLASS_1_708F535CBD8003F3_METHOD_1_5B3FA9FDD7D2BA8C_OFFSET UNITYSDK_OFFSET(0x14B64FE0)
#define CLASS_1_708F535CBD8003F3_METHOD_1_68B0016CFD71207A_OFFSET UNITYSDK_OFFSET(0x14B632F0)
#define CLASS_1_708F535CBD8003F3_METHOD_1_9F89A193911611E4_OFFSET UNITYSDK_OFFSET(0x14B63CF0)
#define CLASS_1_708F535CBD8003F3_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x14B63B30)
#define CLASS_1_708F535CBD8003F3_METHOD_1_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0x14B639B0)
#define CLASS_1_708F535CBD8003F3_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x14B632A0)
#define CLASS_1_708F535CBD8003F3__CTOR_OFFSET UNITYSDK_OFFSET(0x14B63280)

inline static constexpr unsigned int Class_1_708F535CBD8003F3_TypeDefinitionIndex = 47451;

class Class_1_708F535CBD8003F3 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_708F535CBD8003F3_TypeDefinitionIndex)->GetStaticField(0x9B0);
	}
	::System::String* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x20
	::System::String* Field_1_4; // 0x28
	::System::String* Field_1_5; // 0x30
	::System::String* Field_1_6; // 0x38
	::System::String* Field_1_7; // 0x40
	::RPG::Client::OpenWorld::StreamingLightEnum Field_1_8; // 0x48
	::System::Int32 Field_1_9; // 0x4C
	::RPG::CustomRP::CustomLightQualityFilter Field_1_10; // 0x50
	::System::Int32 Field_1_11; // 0x54
	::RPG::CustomRP::CustomLightQualityFilter Field_1_12; // 0x58
	::EnviromentSystem::BlockEnvDataStmState Field_1_13; // 0x5C
	::System::Single Field_1_14; // 0x60

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_708F535CBD8003F3__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_708F535CBD8003F3_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_708F535CBD8003F3_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_708F535CBD8003F3_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::RPG::Client::OpenWorld::StreamingLightEnum Method_1_490B5123E6F6015E()
	{
		return ((::RPG::Client::OpenWorld::StreamingLightEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_708F535CBD8003F3_METHOD_1_490B5123E6F6015E_OFFSET))(this);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_708F535CBD8003F3_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	::System::Void Method_1_68B0016CFD71207A(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_1_708F535CBD8003F3_METHOD_1_68B0016CFD71207A_OFFSET))(this, a1);
	}

	::System::Void Method_1_C081D0F1BA12AC56(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_708F535CBD8003F3_METHOD_1_C081D0F1BA12AC56_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_708F535CBD8003F3_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_3BE5DBAE268F9022()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_708F535CBD8003F3_METHOD_1_3BE5DBAE268F9022_OFFSET))(this);
	}

	::System::Void Method_1_9F89A193911611E4(::RPG::Client::OpenWorld::StreamingLightEnum a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_708F535CBD8003F3_METHOD_1_9F89A193911611E4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5B3FA9FDD7D2BA8C(::System::Int32 a1, ::System::String* a2, ::Class_1_E3144EBBA3CB68CA* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Class_1_E3144EBBA3CB68CA*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_708F535CBD8003F3_METHOD_1_5B3FA9FDD7D2BA8C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_5B3FA9FDD7D2BA8C_1(::System::Int32 a1, ::System::String* a2, ::Class_1_E3144EBBA3CB68CA* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Class_1_E3144EBBA3CB68CA*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_708F535CBD8003F3_METHOD_1_5B3FA9FDD7D2BA8C_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3559476C7C86165D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_708F535CBD8003F3_METHOD_1_3559476C7C86165D_OFFSET))(this, a1);
	}

	::System::Void Method_1_078DF7FA97C8BB47(::RPG::Client::OpenWorld::StreamingLightEnum a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + CLASS_1_708F535CBD8003F3_METHOD_1_078DF7FA97C8BB47_OFFSET))(this, a1);
	}

	::System::Void Method_1_099C229CF1BB9083()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_708F535CBD8003F3_METHOD_1_099C229CF1BB9083_OFFSET))(this);
	}
};
