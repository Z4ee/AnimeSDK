#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define CLASS_1_19DB14C0C5CFE108___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A830E0)
#define CLASS_1_19DB14C0C5CFE108___C__DISPLAYCLASS7_0___CONFIRMAVATARONLYCONFLICTCLEAR_B__0_OFFSET UNITYSDK_OFFSET(0x17A84560)

inline static constexpr unsigned int Class_1_19DB14C0C5CFE108___c__DisplayClass7_0_TypeDefinitionIndex = 76551;

class Class_1_19DB14C0C5CFE108___c__DisplayClass7_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise_1<::System::Boolean>* result; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void __ConfirmAvatarOnlyConflictClear_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108___C__DISPLAYCLASS7_0___CONFIRMAVATARONLYCONFLICTCLEAR_B__0_OFFSET))(this, a1);
	}
};
