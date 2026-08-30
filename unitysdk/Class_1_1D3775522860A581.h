#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CharacterEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1D3775522860A581_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB536150)
#define CLASS_1_1D3775522860A581_METHOD_1_58D1201374DFF521_OFFSET UNITYSDK_OFFSET(0xB536000)
#define CLASS_1_1D3775522860A581_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0xB535EB0)
#define CLASS_1_1D3775522860A581_METHOD_1_D0FA121921ED01A5_OFFSET UNITYSDK_OFFSET(0xB536090)
#define CLASS_1_1D3775522860A581_METHOD_1_DF95151D39E4986D_OFFSET UNITYSDK_OFFSET(0xB535F20)
#define CLASS_1_1D3775522860A581__CTOR_OFFSET UNITYSDK_OFFSET(0xB5361E0)

inline static constexpr unsigned int Class_1_1D3775522860A581_TypeDefinitionIndex = 69724;

class Class_1_1D3775522860A581 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::CharacterEffect*>* PCMAIHOKINF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D3775522860A581__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D3775522860A581_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_DF95151D39E4986D(::RPG::Client::CharacterEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterEffect*))((::PBYTE)hIl2Cpp + CLASS_1_1D3775522860A581_METHOD_1_DF95151D39E4986D_OFFSET))(this, a1);
	}

	::System::Void Method_1_58D1201374DFF521(::RPG::Client::CharacterEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterEffect*))((::PBYTE)hIl2Cpp + CLASS_1_1D3775522860A581_METHOD_1_58D1201374DFF521_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0FA121921ED01A5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1D3775522860A581_METHOD_1_D0FA121921ED01A5_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D3775522860A581_DISPOSE_OFFSET))(this);
	}
};
