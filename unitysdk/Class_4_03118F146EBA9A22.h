#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0693CD0AFBBF2A3B.h"

class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_4_03118F146EBA9A22_METHOD_4_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x11958880)
#define CLASS_4_03118F146EBA9A22_METHOD_4_4C27EF85256A8DCC_OFFSET UNITYSDK_OFFSET(0x119588C0)
#define CLASS_4_03118F146EBA9A22_METHOD_4_56CD335BB2D53E2C_OFFSET UNITYSDK_OFFSET(0x119587C0)
#define CLASS_4_03118F146EBA9A22_METHOD_4_BA72140EE922A8FE_OFFSET UNITYSDK_OFFSET(0x119588D0)
#define CLASS_4_03118F146EBA9A22__CTOR_OFFSET UNITYSDK_OFFSET(0x11958740)

inline static constexpr unsigned int Class_4_03118F146EBA9A22_TypeDefinitionIndex = 63174;

class Class_4_03118F146EBA9A22 : public ::Class_3_0693CD0AFBBF2A3B
{
public:
	::Class_2_49CAB3DE74280C58* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_03118F146EBA9A22__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_56CD335BB2D53E2C(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_03118F146EBA9A22_METHOD_4_56CD335BB2D53E2C_OFFSET))(this, a1);
	}

	::Class_2_49CAB3DE74280C58* Method_4_457717A0CF438A7C()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_03118F146EBA9A22_METHOD_4_457717A0CF438A7C_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_4C27EF85256A8DCC(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* P0)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_03118F146EBA9A22_METHOD_4_4C27EF85256A8DCC_OFFSET))(this, P0);
	}

	::Class_2_49CAB3DE74280C58* Method_4_BA72140EE922A8FE()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_03118F146EBA9A22_METHOD_4_BA72140EE922A8FE_OFFSET))(this);
	}
};
