#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0693CD0AFBBF2A3B.h"

class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_4_94CBB6FE61F31AD3_METHOD_4_4C27EF85256A8DCC_OFFSET UNITYSDK_OFFSET(0x11810DF0)
#define CLASS_4_94CBB6FE61F31AD3_METHOD_4_56CD335BB2D53E2C_OFFSET UNITYSDK_OFFSET(0x11810CB0)
#define CLASS_4_94CBB6FE61F31AD3_METHOD_4_BA72140EE922A8FE_OFFSET UNITYSDK_OFFSET(0x11810E00)
#define CLASS_4_94CBB6FE61F31AD3_METHOD_4_C4E6DEC94273F7E9_OFFSET UNITYSDK_OFFSET(0x11810D70)
#define CLASS_4_94CBB6FE61F31AD3__CTOR_OFFSET UNITYSDK_OFFSET(0x11810C30)

inline static constexpr unsigned int Class_4_94CBB6FE61F31AD3_TypeDefinitionIndex = 63168;

class Class_4_94CBB6FE61F31AD3 : public ::Class_3_0693CD0AFBBF2A3B
{
public:
	::System::Int32 Field_4_1; // 0x30
	::System::Int32 Field_4_0; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_94CBB6FE61F31AD3__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_56CD335BB2D53E2C(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_94CBB6FE61F31AD3_METHOD_4_56CD335BB2D53E2C_OFFSET))(this, a1);
	}

	::Class_2_49CAB3DE74280C58* Method_4_C4E6DEC94273F7E9()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_94CBB6FE61F31AD3_METHOD_4_C4E6DEC94273F7E9_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_4C27EF85256A8DCC(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* P0)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_94CBB6FE61F31AD3_METHOD_4_4C27EF85256A8DCC_OFFSET))(this, P0);
	}

	::Class_2_49CAB3DE74280C58* Method_4_BA72140EE922A8FE()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_94CBB6FE61F31AD3_METHOD_4_BA72140EE922A8FE_OFFSET))(this);
	}
};
