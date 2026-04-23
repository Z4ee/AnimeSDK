#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C994EBB81CDF74CE.h"

class Class_1_A7993FD8B166AE9B;
class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1B2B425C7019EFCC_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x118699C0)
#define CLASS_3_1B2B425C7019EFCC_METHOD_3_7F8B5B7827907EB7_OFFSET UNITYSDK_OFFSET(0x11869A20)
#define CLASS_3_1B2B425C7019EFCC_METHOD_3_C7278F106790159B_OFFSET UNITYSDK_OFFSET(0x11869E80)
#define CLASS_3_1B2B425C7019EFCC_METHOD_3_FD2AC483192E81E2_OFFSET UNITYSDK_OFFSET(0x11869DD0)
#define CLASS_3_1B2B425C7019EFCC__CTOR_OFFSET UNITYSDK_OFFSET(0x11869E70)

inline static constexpr unsigned int Class_3_1B2B425C7019EFCC_TypeDefinitionIndex = 71062;

class Class_3_1B2B425C7019EFCC : public ::Class_2_C994EBB81CDF74CE
{
public:
	::Class_1_A7993FD8B166AE9B* Field_3_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1B2B425C7019EFCC__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_3_1B2B425C7019EFCC_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_7F8B5B7827907EB7(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_1B2B425C7019EFCC_METHOD_3_7F8B5B7827907EB7_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_FD2AC483192E81E2(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_1B2B425C7019EFCC_METHOD_3_FD2AC483192E81E2_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_C7278F106790159B(::Class_1_C4FD36003027AC99* P0, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* P1, ::RPG::GameCore::ChimeraDuelEffectConfig* P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_1B2B425C7019EFCC_METHOD_3_C7278F106790159B_OFFSET))(this, P0, P1, P2);
	}
};
