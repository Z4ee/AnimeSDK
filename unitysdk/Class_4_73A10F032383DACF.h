#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0693CD0AFBBF2A3B.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_73A10F032383DACF_METHOD_4_008AA0747755C120_OFFSET UNITYSDK_OFFSET(0x119135D0)
#define CLASS_4_73A10F032383DACF_METHOD_4_11B6F1EF8E927905_OFFSET UNITYSDK_OFFSET(0x11912D20)
#define CLASS_4_73A10F032383DACF_METHOD_4_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x11912CE0)
#define CLASS_4_73A10F032383DACF_METHOD_4_4C27EF85256A8DCC_OFFSET UNITYSDK_OFFSET(0x119136F0)
#define CLASS_4_73A10F032383DACF_METHOD_4_BA72140EE922A8FE_OFFSET UNITYSDK_OFFSET(0x119136E0)
#define CLASS_4_73A10F032383DACF_METHOD_4_EF7E86199D9147C3_OFFSET UNITYSDK_OFFSET(0x11912E60)
#define CLASS_4_73A10F032383DACF__CTOR_OFFSET UNITYSDK_OFFSET(0x11912C40)

inline static constexpr unsigned int Class_4_73A10F032383DACF_TypeDefinitionIndex = 63177;

class Class_4_73A10F032383DACF : public ::Class_3_0693CD0AFBBF2A3B
{
public:
	::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* Field_4_1; // 0x30
	::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* Field_4_2; // 0x38
	::Class_2_49CAB3DE74280C58* Field_4_0; // 0x40

	::System::Void _ctor(::Class_2_49CAB3DE74280C58* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a3, ::Class_1_C4FD36003027AC99* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::Class_1_C4FD36003027AC99*))((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_49CAB3DE74280C58* Method_4_457717A0CF438A7C()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF_METHOD_4_457717A0CF438A7C_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_11B6F1EF8E927905(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF_METHOD_4_11B6F1EF8E927905_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* Method_4_EF7E86199D9147C3(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF_METHOD_4_EF7E86199D9147C3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* Method_4_008AA0747755C120(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>*))((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF_METHOD_4_008AA0747755C120_OFFSET))(this, a1);
	}

	::Class_2_49CAB3DE74280C58* Method_4_BA72140EE922A8FE()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF_METHOD_4_BA72140EE922A8FE_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_4C27EF85256A8DCC(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* P0)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF_METHOD_4_4C27EF85256A8DCC_OFFSET))(this, P0);
	}
};
