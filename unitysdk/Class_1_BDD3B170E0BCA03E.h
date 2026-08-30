#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }

#define CLASS_1_BDD3B170E0BCA03E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167A6620)
#define CLASS_1_BDD3B170E0BCA03E_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x167A65C0)
#define CLASS_1_BDD3B170E0BCA03E_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x167A6490)
#define CLASS_1_BDD3B170E0BCA03E_METHOD_1_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x167A63C0)
#define CLASS_1_BDD3B170E0BCA03E__CTOR_OFFSET UNITYSDK_OFFSET(0x167A6680)

inline static constexpr unsigned int Class_1_BDD3B170E0BCA03E_TypeDefinitionIndex = 75004;

class Class_1_BDD3B170E0BCA03E : public ::System::Object
{
public:
	::RPG::Client::UIController* IMIDEBKGLJO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD3B170E0BCA03E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD3B170E0BCA03E_METHOD_1_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD3B170E0BCA03E_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD3B170E0BCA03E_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDD3B170E0BCA03E_DISPOSE_OFFSET))(this);
	}
};
