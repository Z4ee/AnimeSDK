#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIStoreCamera; }
namespace System { class Action; }

#define CLASS_1_B81EA9ECDC5718B8_CLASS_1_5BD6D048B33A20C1_METHOD_1_A3E510E1AE9EED1C_OFFSET UNITYSDK_OFFSET(0x1671E290)
#define CLASS_1_B81EA9ECDC5718B8_CLASS_1_5BD6D048B33A20C1__CTOR_OFFSET UNITYSDK_OFFSET(0x1671E280)

inline static constexpr unsigned int Class_1_B81EA9ECDC5718B8_Class_1_5BD6D048B33A20C1_TypeDefinitionIndex = 87333;

class Class_1_B81EA9ECDC5718B8_Class_1_5BD6D048B33A20C1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B81EA9ECDC5718B8_CLASS_1_5BD6D048B33A20C1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A3E510E1AE9EED1C(::MoleMole::ConfigUIStoreCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIStoreCamera*))((::PBYTE)hIl2Cpp + CLASS_1_B81EA9ECDC5718B8_CLASS_1_5BD6D048B33A20C1_METHOD_1_A3E510E1AE9EED1C_OFFSET))(this, a1);
	}
};
