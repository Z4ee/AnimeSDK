#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0693CD0AFBBF2A3B.h"

class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_4_7554B4256D68DB20_METHOD_4_34EAD08A5073CCDC_OFFSET UNITYSDK_OFFSET(0xD9C6FC0)
#define CLASS_4_7554B4256D68DB20_METHOD_4_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0xD9C6F80)
#define CLASS_4_7554B4256D68DB20_METHOD_4_56CD335BB2D53E2C_OFFSET UNITYSDK_OFFSET(0xD9C6EC0)
#define CLASS_4_7554B4256D68DB20_METHOD_4_BA72140EE922A8FE_OFFSET UNITYSDK_OFFSET(0xD9C6FD0)
#define CLASS_4_7554B4256D68DB20__CTOR_OFFSET UNITYSDK_OFFSET(0xD9C6E40)

inline static constexpr unsigned int Class_4_7554B4256D68DB20_TypeDefinitionIndex = 71214;

class Class_4_7554B4256D68DB20 : public ::Class_3_0693CD0AFBBF2A3B
{
public:
	::Class_2_49CAB3DE74280C58* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7554B4256D68DB20__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_56CD335BB2D53E2C(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_7554B4256D68DB20_METHOD_4_56CD335BB2D53E2C_OFFSET))(this, a1);
	}

	::Class_2_49CAB3DE74280C58* Method_4_457717A0CF438A7C()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7554B4256D68DB20_METHOD_4_457717A0CF438A7C_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_34EAD08A5073CCDC(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* P0)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_7554B4256D68DB20_METHOD_4_34EAD08A5073CCDC_OFFSET))(this, P0);
	}

	::Class_2_49CAB3DE74280C58* Method_4_BA72140EE922A8FE()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7554B4256D68DB20_METHOD_4_BA72140EE922A8FE_OFFSET))(this);
	}
};
