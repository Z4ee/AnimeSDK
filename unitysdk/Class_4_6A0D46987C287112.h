#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0693CD0AFBBF2A3B.h"

class Class_1_2CE61CB9B2E57F36;
class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_6A0D46987C287112_METHOD_4_34EAD08A5073CCDC_OFFSET UNITYSDK_OFFSET(0x11E63B50)
#define CLASS_4_6A0D46987C287112_METHOD_4_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x11E63B10)
#define CLASS_4_6A0D46987C287112_METHOD_4_56CD335BB2D53E2C_OFFSET UNITYSDK_OFFSET(0x11E63680)
#define CLASS_4_6A0D46987C287112_METHOD_4_BA72140EE922A8FE_OFFSET UNITYSDK_OFFSET(0x11E63B60)
#define CLASS_4_6A0D46987C287112_METHOD_4_BAF5B6D682E39F3C_OFFSET UNITYSDK_OFFSET(0x11E63740)
#define CLASS_4_6A0D46987C287112__CTOR_OFFSET UNITYSDK_OFFSET(0x11E635F0)

inline static constexpr unsigned int Class_4_6A0D46987C287112_TypeDefinitionIndex = 71221;

class Class_4_6A0D46987C287112 : public ::Class_3_0693CD0AFBBF2A3B
{
public:
	::Class_1_2CE61CB9B2E57F36* Field_4_1; // 0x30
	::Class_2_49CAB3DE74280C58* Field_4_0; // 0x38

	::System::Void _ctor(::Class_2_49CAB3DE74280C58* a1, ::Class_1_2CE61CB9B2E57F36* a2, ::Class_1_C4FD36003027AC99* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_1_2CE61CB9B2E57F36*, ::Class_1_C4FD36003027AC99*))((::PBYTE)hIl2Cpp + CLASS_4_6A0D46987C287112__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_56CD335BB2D53E2C(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_6A0D46987C287112_METHOD_4_56CD335BB2D53E2C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* Method_4_BAF5B6D682E39F3C(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>*))((::PBYTE)hIl2Cpp + CLASS_4_6A0D46987C287112_METHOD_4_BAF5B6D682E39F3C_OFFSET))(this, a1);
	}

	::Class_2_49CAB3DE74280C58* Method_4_457717A0CF438A7C()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A0D46987C287112_METHOD_4_457717A0CF438A7C_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_34EAD08A5073CCDC(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* P0)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_6A0D46987C287112_METHOD_4_34EAD08A5073CCDC_OFFSET))(this, P0);
	}

	::Class_2_49CAB3DE74280C58* Method_4_BA72140EE922A8FE()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A0D46987C287112_METHOD_4_BA72140EE922A8FE_OFFSET))(this);
	}
};
