#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SummerEventShootingGamePlayConfig; }
namespace System { class Action; }

#define CLASS_1_ADDEFFBEB3BC15AE_CLASS_1_E37F1566CB6EB2CE_METHOD_1_EB6863B648F8F036_OFFSET UNITYSDK_OFFSET(0x13E61BA0)
#define CLASS_1_ADDEFFBEB3BC15AE_CLASS_1_E37F1566CB6EB2CE__CTOR_OFFSET UNITYSDK_OFFSET(0x13E61B90)

inline static constexpr unsigned int Class_1_ADDEFFBEB3BC15AE_Class_1_E37F1566CB6EB2CE_TypeDefinitionIndex = 71726;

class Class_1_ADDEFFBEB3BC15AE_Class_1_E37F1566CB6EB2CE : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADDEFFBEB3BC15AE_CLASS_1_E37F1566CB6EB2CE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EB6863B648F8F036(::MoleMole::SummerEventShootingGamePlayConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SummerEventShootingGamePlayConfig*))((::PBYTE)hIl2Cpp + CLASS_1_ADDEFFBEB3BC15AE_CLASS_1_E37F1566CB6EB2CE_METHOD_1_EB6863B648F8F036_OFFSET))(this, a1);
	}
};
