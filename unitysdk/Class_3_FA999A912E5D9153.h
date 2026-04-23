#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C994EBB81CDF74CE.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_FA999A912E5D9153_METHOD_3_C3D56513A9142A0A_OFFSET UNITYSDK_OFFSET(0x123DB690)
#define CLASS_3_FA999A912E5D9153_METHOD_3_C7278F106790159B_OFFSET UNITYSDK_OFFSET(0x123DBB00)
#define CLASS_3_FA999A912E5D9153_METHOD_3_FD2AC483192E81E2_OFFSET UNITYSDK_OFFSET(0x123DBA50)
#define CLASS_3_FA999A912E5D9153__CTOR_OFFSET UNITYSDK_OFFSET(0x123DBAF0)

inline static constexpr unsigned int Class_3_FA999A912E5D9153_TypeDefinitionIndex = 71065;

class Class_3_FA999A912E5D9153 : public ::Class_2_C994EBB81CDF74CE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA999A912E5D9153__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_C3D56513A9142A0A(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_FA999A912E5D9153_METHOD_3_C3D56513A9142A0A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_FD2AC483192E81E2(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_FA999A912E5D9153_METHOD_3_FD2AC483192E81E2_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_C7278F106790159B(::Class_1_C4FD36003027AC99* P0, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* P1, ::RPG::GameCore::ChimeraDuelEffectConfig* P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_FA999A912E5D9153_METHOD_3_C7278F106790159B_OFFSET))(this, P0, P1, P2);
	}
};
