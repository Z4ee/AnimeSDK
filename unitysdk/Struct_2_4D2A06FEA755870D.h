#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9F8D47E52A1FBE0C.h"
#include "unitysdk/Struct_2_9D13B292E62F3FA8.h"
#include "unitysdk/System/ValueType.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define STRUCT_2_4D2A06FEA755870D_METHOD_2_12FBA9471B7338ED_OFFSET UNITYSDK_OFFSET(0x7D4C30)
#define STRUCT_2_4D2A06FEA755870D_METHOD_2_41FA00DED22BAF57_OFFSET UNITYSDK_OFFSET(0x7D4C20)
#define STRUCT_2_4D2A06FEA755870D_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STRUCT_2_4D2A06FEA755870D_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STRUCT_2_4D2A06FEA755870D__CTOR_OFFSET UNITYSDK_OFFSET(0x7D4BE0)

inline static constexpr unsigned int Struct_2_4D2A06FEA755870D_TypeDefinitionIndex = 54678;

struct alignas(8) Struct_2_4D2A06FEA755870D
{
	::Struct_2_9D13B292E62F3FA8 Field_2_2; // 0x10
	::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* Field_2_1; // 0x98
	::Enum_3_9F8D47E52A1FBE0C Field_2_0; // 0xA0

	::System::Void _ctor(::Struct_2_9D13B292E62F3FA8 a1, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* a2, ::Enum_3_9F8D47E52A1FBE0C a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_9D13B292E62F3FA8, ::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*, ::Enum_3_9F8D47E52A1FBE0C))((::PBYTE)hIl2Cpp + STRUCT_2_4D2A06FEA755870D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4D2A06FEA755870D_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_41FA00DED22BAF57(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + STRUCT_2_4D2A06FEA755870D_METHOD_2_41FA00DED22BAF57_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_12FBA9471B7338ED(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + STRUCT_2_4D2A06FEA755870D_METHOD_2_12FBA9471B7338ED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4D2A06FEA755870D_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}
};
