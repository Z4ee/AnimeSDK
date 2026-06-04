#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7134DCF9ECF7587A.h"

class Class_3_DCA7639580BEBC47;
namespace RPG::Client { class ChenLingFesGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6707CC6E3F66B9CD_METHOD_3_CE962969F77540FC_OFFSET UNITYSDK_OFFSET(0x13679440)
#define CLASS_3_6707CC6E3F66B9CD_METHOD_3_FAC5ABFAAE683959_OFFSET UNITYSDK_OFFSET(0x13679310)
#define CLASS_3_6707CC6E3F66B9CD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13678CA0)
#define CLASS_3_6707CC6E3F66B9CD__CTOR_OFFSET UNITYSDK_OFFSET(0x13678C90)

inline static constexpr unsigned int Class_3_6707CC6E3F66B9CD_TypeDefinitionIndex = 49276;

class Class_3_6707CC6E3F66B9CD : public ::Class_2_7134DCF9ECF7587A
{
public:
	::RPG::GameCore::TaskContext* Field_3_0; // 0x28
	::Class_3_DCA7639580BEBC47* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DCA7639580BEBC47* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DCA7639580BEBC47*))((::PBYTE)hIl2Cpp + CLASS_3_6707CC6E3F66B9CD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6707CC6E3F66B9CD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_CE962969F77540FC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6707CC6E3F66B9CD_METHOD_3_CE962969F77540FC_OFFSET))(this, a1);
	}

	::RPG::Client::ChenLingFesGameInstance* Method_3_FAC5ABFAAE683959()
	{
		return ((::RPG::Client::ChenLingFesGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6707CC6E3F66B9CD_METHOD_3_FAC5ABFAAE683959_OFFSET))(this);
	}
};
