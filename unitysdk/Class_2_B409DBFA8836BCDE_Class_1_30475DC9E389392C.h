#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4D2A06FEA755870D.h"
#include "unitysdk/System/Object.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_B409DBFA8836BCDE_CLASS_1_30475DC9E389392C_METHOD_1_B014B5391262C0A9_OFFSET UNITYSDK_OFFSET(0x12E2B900)
#define CLASS_2_B409DBFA8836BCDE_CLASS_1_30475DC9E389392C__CTOR_OFFSET UNITYSDK_OFFSET(0x12E2B8F0)

inline static constexpr unsigned int Class_2_B409DBFA8836BCDE_Class_1_30475DC9E389392C_TypeDefinitionIndex = 50699;

class Class_2_B409DBFA8836BCDE_Class_1_30475DC9E389392C : public ::System::Object
{
public:
	::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B409DBFA8836BCDE_CLASS_1_30475DC9E389392C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B014B5391262C0A9(::Struct_2_4D2A06FEA755870D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_4D2A06FEA755870D))((::PBYTE)hIl2Cpp + CLASS_2_B409DBFA8836BCDE_CLASS_1_30475DC9E389392C_METHOD_1_B014B5391262C0A9_OFFSET))(this, a1);
	}
};
