#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConstraintConditionStatType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_106;
class Class_0_16E4307DCC419505_107;
class Class_0_16E4307DCC419505_122;
class Class_0_16E4307DCC419505_124;
class Class_0_16E4307DCC419505_1505;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E14A415B9DC8AA55_METHOD_1_1C52CC816863F946_OFFSET UNITYSDK_OFFSET(0xE228B80)
#define CLASS_1_E14A415B9DC8AA55_METHOD_1_2D92AE1AB89A9D21_OFFSET UNITYSDK_OFFSET(0xE228FC0)
#define CLASS_1_E14A415B9DC8AA55__CTOR_OFFSET UNITYSDK_OFFSET(0xE228AD0)

inline static constexpr unsigned int Class_1_E14A415B9DC8AA55_TypeDefinitionIndex = 79694;

class Class_1_E14A415B9DC8AA55 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_122* CKFIMAJPOOA; // 0x10
	::Class_0_16E4307DCC419505_124* PONKAEHCHGF; // 0x18
	::Class_0_16E4307DCC419505_106* NEADLJNICHM; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::Client::MechCraft::MechCraftConstraintConditionStatType, ::Class_0_16E4307DCC419505_1505*>* JMGKEICPACE; // 0x28

	::System::Void _ctor(::Class_0_16E4307DCC419505_106* a1, ::Class_0_16E4307DCC419505_124* a2, ::Class_0_16E4307DCC419505_122* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_106*, ::Class_0_16E4307DCC419505_124*, ::Class_0_16E4307DCC419505_122*))((::PBYTE)hIl2Cpp + CLASS_1_E14A415B9DC8AA55__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_1C52CC816863F946(::Class_0_16E4307DCC419505_107* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_0_16E4307DCC419505_107*))((::PBYTE)hIl2Cpp + CLASS_1_E14A415B9DC8AA55_METHOD_1_1C52CC816863F946_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1505* Method_1_2D92AE1AB89A9D21(::RPG::Client::MechCraft::MechCraftConstraintConditionStatType a1)
	{
		return ((::Class_0_16E4307DCC419505_1505*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftConstraintConditionStatType))((::PBYTE)hIl2Cpp + CLASS_1_E14A415B9DC8AA55_METHOD_1_2D92AE1AB89A9D21_OFFSET))(this, a1);
	}
};
