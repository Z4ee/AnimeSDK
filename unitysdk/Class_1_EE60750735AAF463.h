#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_578885A359BC41A3_EStationOpenState.h"
#include "unitysdk/Class_1_EE60750735AAF463_Struct_2_0EC4DCF5C3BC3D80.h"
#include "unitysdk/RPG/Client/Subway/EAirshipSubwayState.h"
#include "unitysdk/Struct_2_4402F405B21E2F67.h"
#include "unitysdk/SubwayScheduleData_SubwayMemberAnimWeightConfig.h"
#include "unitysdk/SubwayScheduleData_SubwayMemberTypeWeightConfig.h"
#include "unitysdk/System/Object.h"

class Class_1_99D52B83C3CBD11F;
class SubwayScheduleData;
namespace RPG::Client::Subway { class AirlineSubwayWay; }
namespace RPG::Client::Subway { class AirshipSubway; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_EE60750735AAF463_CLEAR_OFFSET UNITYSDK_OFFSET(0x8DE11F0)
#define CLASS_1_EE60750735AAF463_METHOD_1_0A5CC2B5F8A75E93_OFFSET UNITYSDK_OFFSET(0x8DE3710)
#define CLASS_1_EE60750735AAF463_METHOD_1_2B1380CB28524A16_OFFSET UNITYSDK_OFFSET(0x8DE23F0)
#define CLASS_1_EE60750735AAF463_METHOD_1_3060617FE14209CC_OFFSET UNITYSDK_OFFSET(0x8DE3380)
#define CLASS_1_EE60750735AAF463_METHOD_1_3E69072E29C6F476_OFFSET UNITYSDK_OFFSET(0x8DE19F0)
#define CLASS_1_EE60750735AAF463_METHOD_1_51CFFE2AF748ECD7_1_OFFSET UNITYSDK_OFFSET(0x8DE3520)
#define CLASS_1_EE60750735AAF463_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x8DE32C0)
#define CLASS_1_EE60750735AAF463_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x8DE3E30)
#define CLASS_1_EE60750735AAF463_METHOD_1_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x8DE1380)
#define CLASS_1_EE60750735AAF463_METHOD_1_609FA3D38FA252B6_OFFSET UNITYSDK_OFFSET(0x8DE18A0)
#define CLASS_1_EE60750735AAF463_METHOD_1_649CD725976E2285_OFFSET UNITYSDK_OFFSET(0x8DE2F50)
#define CLASS_1_EE60750735AAF463_METHOD_1_6585A09F469D07CB_OFFSET UNITYSDK_OFFSET(0x8DE39B0)
#define CLASS_1_EE60750735AAF463_METHOD_1_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x8DE3480)
#define CLASS_1_EE60750735AAF463_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x8DE2240)
#define CLASS_1_EE60750735AAF463_METHOD_1_940094835892DC74_OFFSET UNITYSDK_OFFSET(0x8DE15B0)
#define CLASS_1_EE60750735AAF463_METHOD_1_95FC878EB184D294_OFFSET UNITYSDK_OFFSET(0x8DE2510)
#define CLASS_1_EE60750735AAF463_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x8DE24C0)
#define CLASS_1_EE60750735AAF463_METHOD_1_A55B7B7C8851EF52_OFFSET UNITYSDK_OFFSET(0x8DE36B0)
#define CLASS_1_EE60750735AAF463_METHOD_1_B42B5D9A4A1521DC_OFFSET UNITYSDK_OFFSET(0x8DE3A80)
#define CLASS_1_EE60750735AAF463_METHOD_1_D81F572FFC3BC22C_OFFSET UNITYSDK_OFFSET(0x8DE1700)
#define CLASS_1_EE60750735AAF463_METHOD_1_E7AB99EDC5373156_OFFSET UNITYSDK_OFFSET(0x8DE2CF0)
#define CLASS_1_EE60750735AAF463_METHOD_1_EC2956354B919FE0_OFFSET UNITYSDK_OFFSET(0x8DE35E0)
#define CLASS_1_EE60750735AAF463_METHOD_1_EE7339DA6ECF5F6D_OFFSET UNITYSDK_OFFSET(0x8DE28C0)
#define CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x8DE3E00)
#define CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x8DE3E10)
#define CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x8DE3E20)
#define CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8DE3DF0)
#define CLASS_1_EE60750735AAF463__CTOR_OFFSET UNITYSDK_OFFSET(0x8DE3E40)

inline static constexpr unsigned int Class_1_EE60750735AAF463_TypeDefinitionIndex = 64525;

class Class_1_EE60750735AAF463 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::Class_1_99D52B83C3CBD11F* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Class_1_EE60750735AAF463_Struct_2_0EC4DCF5C3BC3D80>* Field_1_14; // 0x18
	::RPG::Client::Subway::AirshipSubway* Field_1_2; // 0x20
	::RPG::Client::Subway::AirlineSubwayWay* Field_1_1; // 0x28
	::Il2CppArray<::Struct_2_4402F405B21E2F67>* Field_1_4; // 0x30
	::Il2CppArray<::SubwayScheduleData_SubwayMemberTypeWeightConfig>* Field_1_12; // 0x38
	::Il2CppArray<::SubwayScheduleData_SubwayMemberAnimWeightConfig>* Field_1_13; // 0x40
	::System::Single Field_1_11; // 0x48
	::System::Single Field_1_7; // 0x4C
	::System::Boolean Field_1_10; // 0x50
	::RPG::Client::Subway::EAirshipSubwayState Field_1_9; // 0x54
	::System::Single Field_1_6; // 0x58
	::System::Single Field_1_5; // 0x5C
	::System::Single Field_1_8; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_940094835892DC74(::RPG::Client::Subway::AirshipSubway* a1, ::Il2CppArray<::Struct_2_4402F405B21E2F67>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Subway::AirshipSubway*, ::Il2CppArray<::Struct_2_4402F405B21E2F67>*))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_940094835892DC74_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D81F572FFC3BC22C(::RPG::Client::Subway::AirlineSubwayWay* a1, ::Class_1_99D52B83C3CBD11F* a2, ::SubwayScheduleData* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Subway::AirlineSubwayWay*, ::Class_1_99D52B83C3CBD11F*, ::SubwayScheduleData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_D81F572FFC3BC22C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_2B1380CB28524A16(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_2B1380CB28524A16_OFFSET))(this, a1);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_95FC878EB184D294()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_95FC878EB184D294_OFFSET))(this);
	}

	::System::Void Method_1_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Void Method_1_EE7339DA6ECF5F6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_EE7339DA6ECF5F6D_OFFSET))(this);
	}

	::System::Void Method_1_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_809094DEBF13B21A_OFFSET))(this);
	}

	::Class_1_578885A359BC41A3_EStationOpenState Method_1_A55B7B7C8851EF52()
	{
		return ((::Class_1_578885A359BC41A3_EStationOpenState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_A55B7B7C8851EF52_OFFSET))(this);
	}

	::System::Void Method_1_609FA3D38FA252B6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_609FA3D38FA252B6_OFFSET))(this, a1);
	}

	::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_1_E7AB99EDC5373156(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_E7AB99EDC5373156_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_51CFFE2AF748ECD7_1_OFFSET))(this);
	}

	::System::Void Method_1_3060617FE14209CC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_3060617FE14209CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC2956354B919FE0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_EC2956354B919FE0_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E69072E29C6F476(::RPG::Client::Subway::AirshipSubway* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Subway::AirshipSubway*))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_3E69072E29C6F476_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_0A5CC2B5F8A75E93(::System::String* a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_0A5CC2B5F8A75E93_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_6585A09F469D07CB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_6585A09F469D07CB_OFFSET))(this);
	}

	::System::Single Method_1_B42B5D9A4A1521DC(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_B42B5D9A4A1521DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_649CD725976E2285(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_649CD725976E2285_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}
};
