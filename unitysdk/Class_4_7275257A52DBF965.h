#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0693CD0AFBBF2A3B.h"

class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_4_7275257A52DBF965_METHOD_4_34EAD08A5073CCDC_OFFSET UNITYSDK_OFFSET(0x9704EF0)
#define CLASS_4_7275257A52DBF965_METHOD_4_56CD335BB2D53E2C_OFFSET UNITYSDK_OFFSET(0x9704DB0)
#define CLASS_4_7275257A52DBF965_METHOD_4_BA72140EE922A8FE_OFFSET UNITYSDK_OFFSET(0x9704F00)
#define CLASS_4_7275257A52DBF965_METHOD_4_C4E6DEC94273F7E9_OFFSET UNITYSDK_OFFSET(0x9704E70)
#define CLASS_4_7275257A52DBF965__CTOR_OFFSET UNITYSDK_OFFSET(0x9704D30)

inline static constexpr unsigned int Class_4_7275257A52DBF965_TypeDefinitionIndex = 71208;

class Class_4_7275257A52DBF965 : public ::Class_3_0693CD0AFBBF2A3B
{
public:
	::System::Int32 Field_4_0; // 0x30
	::System::Int32 Field_4_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7275257A52DBF965__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_56CD335BB2D53E2C(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_7275257A52DBF965_METHOD_4_56CD335BB2D53E2C_OFFSET))(this, a1);
	}

	::Class_2_49CAB3DE74280C58* Method_4_C4E6DEC94273F7E9()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7275257A52DBF965_METHOD_4_C4E6DEC94273F7E9_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_34EAD08A5073CCDC(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* P0)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_7275257A52DBF965_METHOD_4_34EAD08A5073CCDC_OFFSET))(this, P0);
	}

	::Class_2_49CAB3DE74280C58* Method_4_BA72140EE922A8FE()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7275257A52DBF965_METHOD_4_BA72140EE922A8FE_OFFSET))(this);
	}
};
