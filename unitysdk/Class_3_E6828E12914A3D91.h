#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C994EBB81CDF74CE.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E6828E12914A3D91_METHOD_3_9491471243654C6C_OFFSET UNITYSDK_OFFSET(0x12476BC0)
#define CLASS_3_E6828E12914A3D91__CTOR_OFFSET UNITYSDK_OFFSET(0x124771B0)

inline static constexpr unsigned int Class_3_E6828E12914A3D91_TypeDefinitionIndex = 71057;

class Class_3_E6828E12914A3D91 : public ::Class_2_C994EBB81CDF74CE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6828E12914A3D91__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_9491471243654C6C(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_E6828E12914A3D91_METHOD_3_9491471243654C6C_OFFSET))(this, a1, a2, a3);
	}
};
