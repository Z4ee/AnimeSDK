#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C994EBB81CDF74CE.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_3053E913454D2C52_2_METHOD_3_FE7626A8C0D642F3_OFFSET UNITYSDK_OFFSET(0x11C23930)
#define CLASS_3_3053E913454D2C52_2__CTOR_OFFSET UNITYSDK_OFFSET(0x11C24000)

inline static constexpr unsigned int Class_3_3053E913454D2C52_2_TypeDefinitionIndex = 71078;

class Class_3_3053E913454D2C52_2 : public ::Class_2_C994EBB81CDF74CE
{
public:
	// static const ::System::String* Field_3_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3053E913454D2C52_2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_FE7626A8C0D642F3(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_3053E913454D2C52_2_METHOD_3_FE7626A8C0D642F3_OFFSET))(this, a1, a2, a3);
	}
};
