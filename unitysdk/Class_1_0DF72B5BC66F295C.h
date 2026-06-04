#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CharacterEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0DF72B5BC66F295C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x144E44B0)
#define CLASS_1_0DF72B5BC66F295C_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x144E4110)
#define CLASS_1_0DF72B5BC66F295C_METHOD_1_AA6394CCBEBF0629_OFFSET UNITYSDK_OFFSET(0x144E42E0)
#define CLASS_1_0DF72B5BC66F295C_METHOD_1_D0FA121921ED01A5_OFFSET UNITYSDK_OFFSET(0x144E43F0)
#define CLASS_1_0DF72B5BC66F295C_METHOD_1_F8517BEC429F467C_OFFSET UNITYSDK_OFFSET(0x144E4180)
#define CLASS_1_0DF72B5BC66F295C__CTOR_OFFSET UNITYSDK_OFFSET(0x144E4540)

inline static constexpr unsigned int Class_1_0DF72B5BC66F295C_TypeDefinitionIndex = 65216;

class Class_1_0DF72B5BC66F295C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::CharacterEffect*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DF72B5BC66F295C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DF72B5BC66F295C_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_F8517BEC429F467C(::RPG::Client::CharacterEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterEffect*))((::PBYTE)hIl2Cpp + CLASS_1_0DF72B5BC66F295C_METHOD_1_F8517BEC429F467C_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA6394CCBEBF0629(::RPG::Client::CharacterEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterEffect*))((::PBYTE)hIl2Cpp + CLASS_1_0DF72B5BC66F295C_METHOD_1_AA6394CCBEBF0629_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0FA121921ED01A5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0DF72B5BC66F295C_METHOD_1_D0FA121921ED01A5_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DF72B5BC66F295C_DISPOSE_OFFSET))(this);
	}
};
