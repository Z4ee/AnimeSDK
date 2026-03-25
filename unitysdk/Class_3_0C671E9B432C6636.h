#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C994EBB81CDF74CE.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_0C671E9B432C6636_METHOD_3_C3D56513A9142A0A_OFFSET UNITYSDK_OFFSET(0x8A69960)
#define CLASS_3_0C671E9B432C6636_METHOD_3_C7278F106790159B_OFFSET UNITYSDK_OFFSET(0x8A6A060)
#define CLASS_3_0C671E9B432C6636_METHOD_3_FE7626A8C0D642F3_OFFSET UNITYSDK_OFFSET(0x8A69290)
#define CLASS_3_0C671E9B432C6636__CTOR_OFFSET UNITYSDK_OFFSET(0x8A6A050)

inline static constexpr unsigned int Class_3_0C671E9B432C6636_TypeDefinitionIndex = 63039;

class Class_3_0C671E9B432C6636 : public ::Class_2_C994EBB81CDF74CE
{
public:
	// static const ::System::String* Field_3_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C671E9B432C6636__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_FE7626A8C0D642F3(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_0C671E9B432C6636_METHOD_3_FE7626A8C0D642F3_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_C3D56513A9142A0A(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_0C671E9B432C6636_METHOD_3_C3D56513A9142A0A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_C7278F106790159B(::Class_1_C4FD36003027AC99* P0, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* P1, ::RPG::GameCore::ChimeraDuelEffectConfig* P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_0C671E9B432C6636_METHOD_3_C7278F106790159B_OFFSET))(this, P0, P1, P2);
	}
};
