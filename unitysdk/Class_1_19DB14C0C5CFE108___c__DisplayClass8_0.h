#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define CLASS_1_19DB14C0C5CFE108___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA8270)
#define CLASS_1_19DB14C0C5CFE108___C__DISPLAYCLASS8_0___CONFIRMEQUIPMENTCONFLICTCLEAR_B__1_OFFSET UNITYSDK_OFFSET(0x17EA9710)

inline static constexpr unsigned int Class_1_19DB14C0C5CFE108___c__DisplayClass8_0_TypeDefinitionIndex = 80184;

class Class_1_19DB14C0C5CFE108___c__DisplayClass8_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise_1<::System::Boolean>* result; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void __ConfirmEquipmentConflictClear_b__1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_19DB14C0C5CFE108___C__DISPLAYCLASS8_0___CONFIRMEQUIPMENTCONFLICTCLEAR_B__1_OFFSET))(this, a1);
	}
};
