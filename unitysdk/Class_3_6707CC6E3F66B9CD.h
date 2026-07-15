#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BB5C2228DBF7AE1F.h"

class Class_3_2AF1B12A7ABF63EA;
namespace RPG::Client { class ChenLingFesGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6707CC6E3F66B9CD_METHOD_3_BD6A3C745D127D79_OFFSET UNITYSDK_OFFSET(0x17021930)
#define CLASS_3_6707CC6E3F66B9CD_METHOD_3_FAC5ABFAAE683959_OFFSET UNITYSDK_OFFSET(0x17021800)
#define CLASS_3_6707CC6E3F66B9CD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17021190)
#define CLASS_3_6707CC6E3F66B9CD__CTOR_OFFSET UNITYSDK_OFFSET(0x17021180)

inline static constexpr unsigned int Class_3_6707CC6E3F66B9CD_TypeDefinitionIndex = 50291;

class Class_3_6707CC6E3F66B9CD : public ::Class_2_BB5C2228DBF7AE1F
{
public:
	::Class_3_2AF1B12A7ABF63EA* Field_3_0; // 0x28
	::RPG::GameCore::TaskContext* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2AF1B12A7ABF63EA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2AF1B12A7ABF63EA*))((::PBYTE)hIl2Cpp + CLASS_3_6707CC6E3F66B9CD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6707CC6E3F66B9CD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_BD6A3C745D127D79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6707CC6E3F66B9CD_METHOD_3_BD6A3C745D127D79_OFFSET))(this, a1);
	}

	::RPG::Client::ChenLingFesGameInstance* Method_3_FAC5ABFAAE683959()
	{
		return ((::RPG::Client::ChenLingFesGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6707CC6E3F66B9CD_METHOD_3_FAC5ABFAAE683959_OFFSET))(this);
	}
};
