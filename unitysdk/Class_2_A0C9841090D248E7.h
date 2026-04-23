#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_96.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"

class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
class Class_2_FD0167EB507B9435_8;
namespace RPG::Client { class GridFightRole; }
namespace System { class String; }

#define CLASS_2_A0C9841090D248E7_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x111A7130)
#define CLASS_2_A0C9841090D248E7_METHOD_2_1AC23BC7AB7433E5_OFFSET UNITYSDK_OFFSET(0x111A7880)
#define CLASS_2_A0C9841090D248E7_METHOD_2_4014CA136C4E0108_OFFSET UNITYSDK_OFFSET(0x111A7170)
#define CLASS_2_A0C9841090D248E7_METHOD_2_4CC99EC83CFD43D7_OFFSET UNITYSDK_OFFSET(0x111A8000)
#define CLASS_2_A0C9841090D248E7_METHOD_2_CFFCEF1B09C44B94_OFFSET UNITYSDK_OFFSET(0x111A7E20)
#define CLASS_2_A0C9841090D248E7__CTOR_OFFSET UNITYSDK_OFFSET(0x111A81C0)

inline static constexpr unsigned int Class_2_A0C9841090D248E7_TypeDefinitionIndex = 60112;

class Class_2_A0C9841090D248E7 : public ::Class_1_43BD383C98B4C0C5_96
{
public:
	::Class_1_2670985A37556FEA* Field_2_0; // 0x10
	::Class_2_FD0167EB507B9435_8* Field_2_1; // 0x18
	::Class_1_2350AF62BA84EDFD* Field_2_2; // 0x20
	::RPG::Client::GridFightRole* Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0C9841090D248E7__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0C9841090D248E7_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_2_4014CA136C4E0108(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_A0C9841090D248E7_METHOD_2_4014CA136C4E0108_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_1AC23BC7AB7433E5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0C9841090D248E7_METHOD_2_1AC23BC7AB7433E5_OFFSET))(this);
	}

	::System::String* Method_2_CFFCEF1B09C44B94(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_A0C9841090D248E7_METHOD_2_CFFCEF1B09C44B94_OFFSET))(this, a1);
	}

	::System::String* Method_2_4CC99EC83CFD43D7(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A0C9841090D248E7_METHOD_2_4CC99EC83CFD43D7_OFFSET))(this, a1, a2);
	}
};
