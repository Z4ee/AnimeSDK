#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BB5C2228DBF7AE1F.h"

class Class_3_C53C3A88959D9B6E;
namespace RPG::Client { class ChenLingFesGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6707CC6E3F66B9CD_1_METHOD_3_BD6A3C745D127D79_OFFSET UNITYSDK_OFFSET(0x18544B10)
#define CLASS_3_6707CC6E3F66B9CD_1_METHOD_3_FAC5ABFAAE683959_OFFSET UNITYSDK_OFFSET(0x185449E0)
#define CLASS_3_6707CC6E3F66B9CD_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18544670)
#define CLASS_3_6707CC6E3F66B9CD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18544660)

inline static constexpr unsigned int Class_3_6707CC6E3F66B9CD_1_TypeDefinitionIndex = 52955;

class Class_3_6707CC6E3F66B9CD_1 : public ::Class_2_BB5C2228DBF7AE1F
{
public:
	::Class_3_C53C3A88959D9B6E* IGHAHBNLIJA; // 0x28
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C53C3A88959D9B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C53C3A88959D9B6E*))((::PBYTE)hIl2Cpp + CLASS_3_6707CC6E3F66B9CD_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6707CC6E3F66B9CD_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_BD6A3C745D127D79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6707CC6E3F66B9CD_1_METHOD_3_BD6A3C745D127D79_OFFSET))(this, a1);
	}

	::RPG::Client::ChenLingFesGameInstance* Method_3_FAC5ABFAAE683959()
	{
		return ((::RPG::Client::ChenLingFesGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6707CC6E3F66B9CD_1_METHOD_3_FAC5ABFAAE683959_OFFSET))(this);
	}
};
