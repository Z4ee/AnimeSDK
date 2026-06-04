#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }

#define CLASS_1_BDD3B170E0BCA03E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139FF540)
#define CLASS_1_BDD3B170E0BCA03E_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x139FF4E0)
#define CLASS_1_BDD3B170E0BCA03E_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x139FF3B0)
#define CLASS_1_BDD3B170E0BCA03E_METHOD_1_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x139FF2E0)
#define CLASS_1_BDD3B170E0BCA03E__CTOR_OFFSET UNITYSDK_OFFSET(0x139FF5A0)

inline static constexpr unsigned int Class_1_BDD3B170E0BCA03E_TypeDefinitionIndex = 70175;

class Class_1_BDD3B170E0BCA03E : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_0; // 0x10

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
