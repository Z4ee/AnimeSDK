#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0693CD0AFBBF2A3B.h"

class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_4_09E9D8F1FD26797F_METHOD_4_34EAD08A5073CCDC_OFFSET UNITYSDK_OFFSET(0x11767DA0)
#define CLASS_4_09E9D8F1FD26797F_METHOD_4_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x11767D60)
#define CLASS_4_09E9D8F1FD26797F_METHOD_4_56CD335BB2D53E2C_OFFSET UNITYSDK_OFFSET(0x11767CA0)
#define CLASS_4_09E9D8F1FD26797F_METHOD_4_BA72140EE922A8FE_OFFSET UNITYSDK_OFFSET(0x11767DB0)
#define CLASS_4_09E9D8F1FD26797F__CTOR_OFFSET UNITYSDK_OFFSET(0x11767C20)

inline static constexpr unsigned int Class_4_09E9D8F1FD26797F_TypeDefinitionIndex = 71205;

class Class_4_09E9D8F1FD26797F : public ::Class_3_0693CD0AFBBF2A3B
{
public:
	::Class_2_49CAB3DE74280C58* Field_4_0; // 0x30
	::System::Int32 Field_4_6; // 0x38
	::System::Int32 Field_4_2; // 0x3C
	::System::Int32 Field_4_4; // 0x40
	::System::Int32 Field_4_5; // 0x44
	::System::Int32 Field_4_1; // 0x48
	::System::Int32 Field_4_3; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_09E9D8F1FD26797F__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_56CD335BB2D53E2C(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_09E9D8F1FD26797F_METHOD_4_56CD335BB2D53E2C_OFFSET))(this, a1);
	}

	::Class_2_49CAB3DE74280C58* Method_4_457717A0CF438A7C()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_09E9D8F1FD26797F_METHOD_4_457717A0CF438A7C_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_34EAD08A5073CCDC(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* P0)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_09E9D8F1FD26797F_METHOD_4_34EAD08A5073CCDC_OFFSET))(this, P0);
	}

	::Class_2_49CAB3DE74280C58* Method_4_BA72140EE922A8FE()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_09E9D8F1FD26797F_METHOD_4_BA72140EE922A8FE_OFFSET))(this);
	}
};
