#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/BlockEnvDataStmState.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/System/Object.h"

class Class_1_E3144EBBA3CB68CA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_708F535CBD8003F3_METHOD_1_078DF7FA97C8BB47_OFFSET UNITYSDK_OFFSET(0x1263FEB0)
#define CLASS_1_708F535CBD8003F3_METHOD_1_099C229CF1BB9083_OFFSET UNITYSDK_OFFSET(0x12640920)
#define CLASS_1_708F535CBD8003F3_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1263E830)
#define CLASS_1_708F535CBD8003F3_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x1263E840)
#define CLASS_1_708F535CBD8003F3_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1263E820)
#define CLASS_1_708F535CBD8003F3_METHOD_1_3559476C7C86165D_OFFSET UNITYSDK_OFFSET(0x126408C0)
#define CLASS_1_708F535CBD8003F3_METHOD_1_3BE5DBAE268F9022_OFFSET UNITYSDK_OFFSET(0x1263F220)
#define CLASS_1_708F535CBD8003F3_METHOD_1_490B5123E6F6015E_OFFSET UNITYSDK_OFFSET(0x1263E850)
#define CLASS_1_708F535CBD8003F3_METHOD_1_5B3FA9FDD7D2BA8C_1_OFFSET UNITYSDK_OFFSET(0x126402C0)
#define CLASS_1_708F535CBD8003F3_METHOD_1_5B3FA9FDD7D2BA8C_OFFSET UNITYSDK_OFFSET(0x126405C0)
#define CLASS_1_708F535CBD8003F3_METHOD_1_68B0016CFD71207A_OFFSET UNITYSDK_OFFSET(0x1263E8D0)
#define CLASS_1_708F535CBD8003F3_METHOD_1_9F89A193911611E4_OFFSET UNITYSDK_OFFSET(0x1263F2D0)
#define CLASS_1_708F535CBD8003F3_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1263F110)
#define CLASS_1_708F535CBD8003F3_METHOD_1_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0x1263EF90)
#define CLASS_1_708F535CBD8003F3_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x1263E880)
#define CLASS_1_708F535CBD8003F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1263E860)

inline static constexpr unsigned int Class_1_708F535CBD8003F3_TypeDefinitionIndex = 49305;

class Class_1_708F535CBD8003F3 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_MIDHLHBANDB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_708F535CBD8003F3_TypeDefinitionIndex)->GetStaticField(0x15B10);
	}
	::System::Collections::Generic::List_1<::System::Int32>* IAGNMEHODJI; // 0x10
	::System::String* BLJCKFHOOIA; // 0x18
	::System::String* NCMBPNCPEHB; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* MOIDMEBPDKE; // 0x28
	::System::String* DIEGNJFBPHN; // 0x30
	::System::String* DJNKMHHLKHM; // 0x38
	::System::String* FFHJENBPOAI; // 0x40
	::EnviromentSystem::BlockEnvDataStmState KOEKPKHCLCM; // 0x48
	::System::Int32 CGDPPGNJFGC; // 0x4C
	::System::Single IAJFEFLCEDB; // 0x50
	::RPG::CustomRP::CustomLightQualityFilter DDEGBOBCNFA; // 0x54
	::RPG::Client::OpenWorld::StreamingLightEnum OCMJCFLLJAB; // 0x58
	::System::Int32 IJNDNFMBNGC; // 0x5C
	::RPG::CustomRP::CustomLightQualityFilter AJMAPJOPFFP; // 0x60

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
