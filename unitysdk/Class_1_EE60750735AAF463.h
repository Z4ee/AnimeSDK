#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DA840AB4B3A0176B_EStationOpenState.h"
#include "unitysdk/Class_1_EE60750735AAF463_Struct_2_0EC4DCF5C3BC3D80.h"
#include "unitysdk/RPG/Client/Subway/EAirshipSubwayState.h"
#include "unitysdk/Struct_2_4402F405B21E2F67.h"
#include "unitysdk/SubwayScheduleData_SubwayMemberAnimWeightConfig.h"
#include "unitysdk/SubwayScheduleData_SubwayMemberTypeWeightConfig.h"
#include "unitysdk/System/Object.h"

class Class_1_378D6C9D70A2CDE0;
class SubwayScheduleData;
namespace RPG::Client::Subway { class AirlineSubwayWay; }
namespace RPG::Client::Subway { class AirshipSubway; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_EE60750735AAF463_CLEAR_OFFSET UNITYSDK_OFFSET(0x13CABFC0)
#define CLASS_1_EE60750735AAF463_METHOD_1_04F02FC65FAA2E0C_OFFSET UNITYSDK_OFFSET(0x13CAD860)
#define CLASS_1_EE60750735AAF463_METHOD_1_0A5CC2B5F8A75E93_OFFSET UNITYSDK_OFFSET(0x13CAE6A0)
#define CLASS_1_EE60750735AAF463_METHOD_1_1D572440C9E3C9B8_OFFSET UNITYSDK_OFFSET(0x13CAC7E0)
#define CLASS_1_EE60750735AAF463_METHOD_1_2B1380CB28524A16_OFFSET UNITYSDK_OFFSET(0x13CAD3A0)
#define CLASS_1_EE60750735AAF463_METHOD_1_3060617FE14209CC_OFFSET UNITYSDK_OFFSET(0x13CAE330)
#define CLASS_1_EE60750735AAF463_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x13CAC130)
#define CLASS_1_EE60750735AAF463_METHOD_1_51CFFE2AF748ECD7_1_OFFSET UNITYSDK_OFFSET(0x13CAE4C0)
#define CLASS_1_EE60750735AAF463_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x13CAE280)
#define CLASS_1_EE60750735AAF463_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x13CAED60)
#define CLASS_1_EE60750735AAF463_METHOD_1_609FA3D38FA252B6_OFFSET UNITYSDK_OFFSET(0x13CAC690)
#define CLASS_1_EE60750735AAF463_METHOD_1_649CD725976E2285_OFFSET UNITYSDK_OFFSET(0x13CADF30)
#define CLASS_1_EE60750735AAF463_METHOD_1_6585A09F469D07CB_OFFSET UNITYSDK_OFFSET(0x13CAE930)
#define CLASS_1_EE60750735AAF463_METHOD_1_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x13CAE420)
#define CLASS_1_EE60750735AAF463_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x13CAD1F0)
#define CLASS_1_EE60750735AAF463_METHOD_1_946E893B542F1A3F_OFFSET UNITYSDK_OFFSET(0x13CADCB0)
#define CLASS_1_EE60750735AAF463_METHOD_1_95FC878EB184D294_OFFSET UNITYSDK_OFFSET(0x13CAD4B0)
#define CLASS_1_EE60750735AAF463_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x13CAD460)
#define CLASS_1_EE60750735AAF463_METHOD_1_A55B7B7C8851EF52_OFFSET UNITYSDK_OFFSET(0x13CAE640)
#define CLASS_1_EE60750735AAF463_METHOD_1_B42B5D9A4A1521DC_OFFSET UNITYSDK_OFFSET(0x13CAE9F0)
#define CLASS_1_EE60750735AAF463_METHOD_1_D81F572FFC3BC22C_OFFSET UNITYSDK_OFFSET(0x13CAC510)
#define CLASS_1_EE60750735AAF463_METHOD_1_EC2956354B919FE0_OFFSET UNITYSDK_OFFSET(0x13CAE570)
#define CLASS_1_EE60750735AAF463_METHOD_1_EF2769380DD25684_OFFSET UNITYSDK_OFFSET(0x13CAC3D0)
#define CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x13CAED30)
#define CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x13CAED40)
#define CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x13CAED50)
#define CLASS_1_EE60750735AAF463_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13CAED20)
#define CLASS_1_EE60750735AAF463__CTOR_OFFSET UNITYSDK_OFFSET(0x13CAED70)

inline static constexpr unsigned int Class_1_EE60750735AAF463_TypeDefinitionIndex = 74395;

class Class_1_EE60750735AAF463 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::RPG::Client::Subway::AirlineSubwayWay* Field_1_1; // 0x10
	::RPG::Client::Subway::AirshipSubway* Field_1_2; // 0x18
	::Class_1_378D6C9D70A2CDE0* Field_1_3; // 0x20
	::Il2CppArray<::Struct_2_4402F405B21E2F67>* Field_1_4; // 0x28
	::Il2CppArray<::SubwayScheduleData_SubwayMemberAnimWeightConfig>* Field_1_5; // 0x30
	::Il2CppArray<::SubwayScheduleData_SubwayMemberTypeWeightConfig>* Field_1_6; // 0x38
	::System::Collections::Generic::List_1<::Class_1_EE60750735AAF463_Struct_2_0EC4DCF5C3BC3D80>* Field_1_7; // 0x40
	::System::Boolean Field_1_8; // 0x48
	::System::Single Field_1_9; // 0x4C
	::RPG::Client::Subway::EAirshipSubwayState Field_1_10; // 0x50
	::System::Single Field_1_11; // 0x54
	::System::Single Field_1_12; // 0x58
	::System::Single Field_1_13; // 0x5C
	::System::Single Field_1_14; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_EF2769380DD25684(::RPG::Client::Subway::AirshipSubway* a1, ::Il2CppArray<::Struct_2_4402F405B21E2F67>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Subway::AirshipSubway*, ::Il2CppArray<::Struct_2_4402F405B21E2F67>*))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_EF2769380DD25684_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D81F572FFC3BC22C(::RPG::Client::Subway::AirlineSubwayWay* a1, ::Class_1_378D6C9D70A2CDE0* a2, ::SubwayScheduleData* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Subway::AirlineSubwayWay*, ::Class_1_378D6C9D70A2CDE0*, ::SubwayScheduleData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_D81F572FFC3BC22C_OFFSET))(this, a1, a2, a3, a4);
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

	::System::Void Method_1_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Method_1_04F02FC65FAA2E0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_04F02FC65FAA2E0C_OFFSET))(this);
	}

	::System::Void Method_1_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_809094DEBF13B21A_OFFSET))(this);
	}

	::Class_1_DA840AB4B3A0176B_EStationOpenState Method_1_A55B7B7C8851EF52()
	{
		return ((::Class_1_DA840AB4B3A0176B_EStationOpenState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_A55B7B7C8851EF52_OFFSET))(this);
	}

	::System::Void Method_1_609FA3D38FA252B6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_609FA3D38FA252B6_OFFSET))(this, a1);
	}

	::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_1_946E893B542F1A3F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_946E893B542F1A3F_OFFSET))(this, a1);
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

	::System::Void Method_1_1D572440C9E3C9B8(::RPG::Client::Subway::AirshipSubway* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Subway::AirshipSubway*))((::PBYTE)hIl2Cpp + CLASS_1_EE60750735AAF463_METHOD_1_1D572440C9E3C9B8_OFFSET))(this, a1);
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
