#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_135.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"

class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
class Class_2_FD0167EB507B9435_8;
namespace RPG::Client { class GridFightRole; }
namespace System { class String; }

#define CLASS_2_5493D50ED17FEBC9_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0xEA6F110)
#define CLASS_2_5493D50ED17FEBC9_METHOD_2_4CC99EC83CFD43D7_OFFSET UNITYSDK_OFFSET(0xEA6FEF0)
#define CLASS_2_5493D50ED17FEBC9_METHOD_2_74BBC115336FB59A_OFFSET UNITYSDK_OFFSET(0xEA6F150)
#define CLASS_2_5493D50ED17FEBC9_METHOD_2_99F6560EA943C61C_OFFSET UNITYSDK_OFFSET(0xEA6F7A0)
#define CLASS_2_5493D50ED17FEBC9_METHOD_2_CFFCEF1B09C44B94_OFFSET UNITYSDK_OFFSET(0xEA6FD10)
#define CLASS_2_5493D50ED17FEBC9__CTOR_OFFSET UNITYSDK_OFFSET(0xEA700B0)

inline static constexpr unsigned int Class_2_5493D50ED17FEBC9_TypeDefinitionIndex = 53020;

class Class_2_5493D50ED17FEBC9 : public ::Class_1_43BD383C98B4C0C5_135
{
public:
	::Class_1_2670985A37556FEA* Field_2_0; // 0x10
	::Class_1_2350AF62BA84EDFD* Field_2_2; // 0x18
	::Class_2_FD0167EB507B9435_8* Field_2_1; // 0x20
	::RPG::Client::GridFightRole* Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5493D50ED17FEBC9__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5493D50ED17FEBC9_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_2_74BBC115336FB59A(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_5493D50ED17FEBC9_METHOD_2_74BBC115336FB59A_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_99F6560EA943C61C()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5493D50ED17FEBC9_METHOD_2_99F6560EA943C61C_OFFSET))(this);
	}

	::System::String* Method_2_CFFCEF1B09C44B94(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_5493D50ED17FEBC9_METHOD_2_CFFCEF1B09C44B94_OFFSET))(this, a1);
	}

	::System::String* Method_2_4CC99EC83CFD43D7(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5493D50ED17FEBC9_METHOD_2_4CC99EC83CFD43D7_OFFSET))(this, a1, a2);
	}
};
