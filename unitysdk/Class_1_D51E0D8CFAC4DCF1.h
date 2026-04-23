#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3.h"
#include "unitysdk/System/Object.h"

class Class_1_C47576BEFCFAD595;
class Class_2_F3F43255EC92B83B;
namespace RPG::Client::ParkourGame { class MonoParkourRoad_RoadTrigger; }

#define CLASS_1_D51E0D8CFAC4DCF1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x975D9A0)
#define CLASS_1_D51E0D8CFAC4DCF1_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x975E700)
#define CLASS_1_D51E0D8CFAC4DCF1_GET_ENDDISTANCE_OFFSET UNITYSDK_OFFSET(0x975E720)
#define CLASS_1_D51E0D8CFAC4DCF1_GET_ROADSECTION_OFFSET UNITYSDK_OFFSET(0x975E6F0)
#define CLASS_1_D51E0D8CFAC4DCF1_GET_STARTDISTANCE_OFFSET UNITYSDK_OFFSET(0x975E710)
#define CLASS_1_D51E0D8CFAC4DCF1_METHOD_1_17F3DFC52DE5C947_OFFSET UNITYSDK_OFFSET(0x975E370)
#define CLASS_1_D51E0D8CFAC4DCF1_METHOD_1_4B1DEE677A952319_OFFSET UNITYSDK_OFFSET(0x975DDF0)
#define CLASS_1_D51E0D8CFAC4DCF1_METHOD_1_4CFC5F9F40A751DF_OFFSET UNITYSDK_OFFSET(0x975D9F0)
#define CLASS_1_D51E0D8CFAC4DCF1_METHOD_1_6775604F93DD7110_OFFSET UNITYSDK_OFFSET(0x975E670)
#define CLASS_1_D51E0D8CFAC4DCF1_METHOD_1_85E657E328490B3B_OFFSET UNITYSDK_OFFSET(0x975E4E0)
#define CLASS_1_D51E0D8CFAC4DCF1_METHOD_1_AB0BE72921356757_OFFSET UNITYSDK_OFFSET(0x975E550)
#define CLASS_1_D51E0D8CFAC4DCF1_METHOD_1_E5BB45D78FEB9BF5_OFFSET UNITYSDK_OFFSET(0x975E0D0)
#define CLASS_1_D51E0D8CFAC4DCF1__CTOR_OFFSET UNITYSDK_OFFSET(0x975D900)

inline static constexpr unsigned int Class_1_D51E0D8CFAC4DCF1_TypeDefinitionIndex = 68331;

class Class_1_D51E0D8CFAC4DCF1 : public ::System::Object
{
public:
	::RPG::Client::ParkourGame::MonoParkourRoad_RoadTrigger* _Config_k__BackingField; // 0x10
	::Class_1_C47576BEFCFAD595* Field_1_4; // 0x18
	::Il2CppArray<::System::Boolean>* Field_1_5; // 0x20
	::System::Single _StartDistance_k__BackingField; // 0x28
	::System::Single _EndDistance_k__BackingField; // 0x2C
	::System::Boolean Field_1_7; // 0x30
	::System::Boolean Field_1_6; // 0x31
	::System::Int32 _RoadSection_k__BackingField; // 0x34

	::System::Void _ctor(::System::Int32 a1, ::RPG::Client::ParkourGame::MonoParkourRoad_RoadTrigger* a2, ::Class_1_C47576BEFCFAD595* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ParkourGame::MonoParkourRoad_RoadTrigger*, ::Class_1_C47576BEFCFAD595*))((::PBYTE)hIl2Cpp + CLASS_1_D51E0D8CFAC4DCF1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D51E0D8CFAC4DCF1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4CFC5F9F40A751DF(::Class_2_F3F43255EC92B83B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_D51E0D8CFAC4DCF1_METHOD_1_4CFC5F9F40A751DF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_17F3DFC52DE5C947(::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3 a1, ::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3, ::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3))((::PBYTE)hIl2Cpp + CLASS_1_D51E0D8CFAC4DCF1_METHOD_1_17F3DFC52DE5C947_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AB0BE72921356757(::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3))((::PBYTE)hIl2Cpp + CLASS_1_D51E0D8CFAC4DCF1_METHOD_1_AB0BE72921356757_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4B1DEE677A952319(::Class_2_F3F43255EC92B83B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_D51E0D8CFAC4DCF1_METHOD_1_4B1DEE677A952319_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E5BB45D78FEB9BF5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D51E0D8CFAC4DCF1_METHOD_1_E5BB45D78FEB9BF5_OFFSET))(this);
	}

	::System::Boolean Method_1_85E657E328490B3B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D51E0D8CFAC4DCF1_METHOD_1_85E657E328490B3B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6775604F93DD7110(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D51E0D8CFAC4DCF1_METHOD_1_6775604F93DD7110_OFFSET))(this, a1);
	}

	::System::Int32 get_RoadSection()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D51E0D8CFAC4DCF1_GET_ROADSECTION_OFFSET))(this);
	}

	::RPG::Client::ParkourGame::MonoParkourRoad_RoadTrigger* get_Config()
	{
		return ((::RPG::Client::ParkourGame::MonoParkourRoad_RoadTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D51E0D8CFAC4DCF1_GET_CONFIG_OFFSET))(this);
	}

	::System::Single get_StartDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D51E0D8CFAC4DCF1_GET_STARTDISTANCE_OFFSET))(this);
	}

	::System::Single get_EndDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D51E0D8CFAC4DCF1_GET_ENDDISTANCE_OFFSET))(this);
	}
};
