#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3.h"
#include "unitysdk/System/Object.h"

class Class_1_C47576BEFCFAD595;
class Class_2_F3F43255EC92B83B;
namespace RPG::Client::ParkourGame { class MonoParkourRoad_RoadTrigger; }

#define CLASS_1_F62015F84D3989AC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB05CE30)
#define CLASS_1_F62015F84D3989AC_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB05DBC0)
#define CLASS_1_F62015F84D3989AC_GET_ENDDISTANCE_OFFSET UNITYSDK_OFFSET(0xB05DBE0)
#define CLASS_1_F62015F84D3989AC_GET_ROADSECTION_OFFSET UNITYSDK_OFFSET(0xB05DBB0)
#define CLASS_1_F62015F84D3989AC_GET_STARTDISTANCE_OFFSET UNITYSDK_OFFSET(0xB05DBD0)
#define CLASS_1_F62015F84D3989AC_METHOD_1_17F3DFC52DE5C947_OFFSET UNITYSDK_OFFSET(0xB05D830)
#define CLASS_1_F62015F84D3989AC_METHOD_1_3B1DA194839510CA_OFFSET UNITYSDK_OFFSET(0xB05CE80)
#define CLASS_1_F62015F84D3989AC_METHOD_1_4B1DEE677A952319_OFFSET UNITYSDK_OFFSET(0xB05D2B0)
#define CLASS_1_F62015F84D3989AC_METHOD_1_6775604F93DD7110_OFFSET UNITYSDK_OFFSET(0xB05DB30)
#define CLASS_1_F62015F84D3989AC_METHOD_1_85E657E328490B3B_OFFSET UNITYSDK_OFFSET(0xB05D9A0)
#define CLASS_1_F62015F84D3989AC_METHOD_1_AB0BE72921356757_OFFSET UNITYSDK_OFFSET(0xB05DA10)
#define CLASS_1_F62015F84D3989AC_METHOD_1_E5BB45D78FEB9BF5_OFFSET UNITYSDK_OFFSET(0xB05D590)
#define CLASS_1_F62015F84D3989AC__CTOR_OFFSET UNITYSDK_OFFSET(0xB05CCA0)

inline static constexpr unsigned int Class_1_F62015F84D3989AC_TypeDefinitionIndex = 69305;

class Class_1_F62015F84D3989AC : public ::System::Object
{
public:
	::Il2CppArray<::System::Boolean>* Field_1_0; // 0x10
	::Class_1_C47576BEFCFAD595* Field_1_1; // 0x18
	::RPG::Client::ParkourGame::MonoParkourRoad_RoadTrigger* _Config_k__BackingField; // 0x20
	::System::Int32 _RoadSection_k__BackingField; // 0x28
	::System::Single _EndDistance_k__BackingField; // 0x2C
	::System::Boolean Field_1_5; // 0x30
	::System::Boolean Field_1_6; // 0x31
	::System::Single _StartDistance_k__BackingField; // 0x34

	::System::Void _ctor(::System::Int32 a1, ::RPG::Client::ParkourGame::MonoParkourRoad_RoadTrigger* a2, ::Class_1_C47576BEFCFAD595* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ParkourGame::MonoParkourRoad_RoadTrigger*, ::Class_1_C47576BEFCFAD595*))((::PBYTE)hIl2Cpp + CLASS_1_F62015F84D3989AC__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F62015F84D3989AC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3B1DA194839510CA(::Class_2_F3F43255EC92B83B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_F62015F84D3989AC_METHOD_1_3B1DA194839510CA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_17F3DFC52DE5C947(::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3 a1, ::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3, ::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3))((::PBYTE)hIl2Cpp + CLASS_1_F62015F84D3989AC_METHOD_1_17F3DFC52DE5C947_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AB0BE72921356757(::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C47576BEFCFAD595_Struct_2_47BCA034D761CCC3))((::PBYTE)hIl2Cpp + CLASS_1_F62015F84D3989AC_METHOD_1_AB0BE72921356757_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4B1DEE677A952319(::Class_2_F3F43255EC92B83B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_F62015F84D3989AC_METHOD_1_4B1DEE677A952319_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E5BB45D78FEB9BF5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F62015F84D3989AC_METHOD_1_E5BB45D78FEB9BF5_OFFSET))(this);
	}

	::System::Boolean Method_1_85E657E328490B3B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F62015F84D3989AC_METHOD_1_85E657E328490B3B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6775604F93DD7110(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F62015F84D3989AC_METHOD_1_6775604F93DD7110_OFFSET))(this, a1);
	}

	::System::Int32 get_RoadSection()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F62015F84D3989AC_GET_ROADSECTION_OFFSET))(this);
	}

	::RPG::Client::ParkourGame::MonoParkourRoad_RoadTrigger* get_Config()
	{
		return ((::RPG::Client::ParkourGame::MonoParkourRoad_RoadTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F62015F84D3989AC_GET_CONFIG_OFFSET))(this);
	}

	::System::Single get_StartDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F62015F84D3989AC_GET_STARTDISTANCE_OFFSET))(this);
	}

	::System::Single get_EndDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F62015F84D3989AC_GET_ENDDISTANCE_OFFSET))(this);
	}
};
