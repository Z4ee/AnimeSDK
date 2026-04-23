#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C994EBB81CDF74CE.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5964ADDF758A1D35_METHOD_3_0A44DF33A5D320F3_OFFSET UNITYSDK_OFFSET(0x9325740)
#define CLASS_3_5964ADDF758A1D35_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x93256F0)
#define CLASS_3_5964ADDF758A1D35_METHOD_3_924A681277B8C797_OFFSET UNITYSDK_OFFSET(0x9326250)
#define CLASS_3_5964ADDF758A1D35_METHOD_3_C7278F106790159B_OFFSET UNITYSDK_OFFSET(0x93262C0)
#define CLASS_3_5964ADDF758A1D35__CTOR_OFFSET UNITYSDK_OFFSET(0x93262B0)

inline static constexpr unsigned int Class_3_5964ADDF758A1D35_TypeDefinitionIndex = 71041;

class Class_3_5964ADDF758A1D35 : public ::Class_2_C994EBB81CDF74CE
{
public:
	::Class_3_D637C1E17FCBBFB0* Field_3_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5964ADDF758A1D35__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_3_5964ADDF758A1D35_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0A44DF33A5D320F3(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_5964ADDF758A1D35_METHOD_3_0A44DF33A5D320F3_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_924A681277B8C797(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_5964ADDF758A1D35_METHOD_3_924A681277B8C797_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_C7278F106790159B(::Class_1_C4FD36003027AC99* P0, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* P1, ::RPG::GameCore::ChimeraDuelEffectConfig* P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_5964ADDF758A1D35_METHOD_3_C7278F106790159B_OFFSET))(this, P0, P1, P2);
	}
};
