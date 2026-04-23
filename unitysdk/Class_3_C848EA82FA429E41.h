#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C994EBB81CDF74CE.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C848EA82FA429E41_METHOD_3_924A681277B8C797_OFFSET UNITYSDK_OFFSET(0x124B3310)
#define CLASS_3_C848EA82FA429E41_METHOD_3_B4A18916D120D6CD_OFFSET UNITYSDK_OFFSET(0x124B2D50)
#define CLASS_3_C848EA82FA429E41_METHOD_3_C7278F106790159B_OFFSET UNITYSDK_OFFSET(0x124B3380)
#define CLASS_3_C848EA82FA429E41__CTOR_OFFSET UNITYSDK_OFFSET(0x124B3370)

inline static constexpr unsigned int Class_3_C848EA82FA429E41_TypeDefinitionIndex = 71044;

class Class_3_C848EA82FA429E41 : public ::Class_2_C994EBB81CDF74CE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C848EA82FA429E41__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_B4A18916D120D6CD(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_C848EA82FA429E41_METHOD_3_B4A18916D120D6CD_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_924A681277B8C797(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_C848EA82FA429E41_METHOD_3_924A681277B8C797_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_C7278F106790159B(::Class_1_C4FD36003027AC99* P0, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* P1, ::RPG::GameCore::ChimeraDuelEffectConfig* P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_C848EA82FA429E41_METHOD_3_C7278F106790159B_OFFSET))(this, P0, P1, P2);
	}
};
