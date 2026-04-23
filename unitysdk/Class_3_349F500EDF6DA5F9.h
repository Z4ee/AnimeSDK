#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C994EBB81CDF74CE.h"

class Class_1_5582DFD38EE429E6;
class Class_1_C4FD36003027AC99;
class Class_1_FB3E7B71A45FEB7C;
class Class_2_49CAB3DE74280C58;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_349F500EDF6DA5F9_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x1236FE20)
#define CLASS_3_349F500EDF6DA5F9_METHOD_3_5047ACE19DCECCF4_OFFSET UNITYSDK_OFFSET(0x1236FE90)
#define CLASS_3_349F500EDF6DA5F9_METHOD_3_AEF712CB934C8901_OFFSET UNITYSDK_OFFSET(0x123701A0)
#define CLASS_3_349F500EDF6DA5F9_METHOD_3_C7278F106790159B_OFFSET UNITYSDK_OFFSET(0x123705A0)
#define CLASS_3_349F500EDF6DA5F9__CTOR_OFFSET UNITYSDK_OFFSET(0x12370590)

inline static constexpr unsigned int Class_3_349F500EDF6DA5F9_TypeDefinitionIndex = 71036;

class Class_3_349F500EDF6DA5F9 : public ::Class_2_C994EBB81CDF74CE
{
public:
	::Class_1_FB3E7B71A45FEB7C* Field_3_1; // 0x10
	::Class_1_5582DFD38EE429E6* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_349F500EDF6DA5F9__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_3_349F500EDF6DA5F9_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_5047ACE19DCECCF4(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_349F500EDF6DA5F9_METHOD_3_5047ACE19DCECCF4_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_AEF712CB934C8901(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_349F500EDF6DA5F9_METHOD_3_AEF712CB934C8901_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_C7278F106790159B(::Class_1_C4FD36003027AC99* P0, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* P1, ::RPG::GameCore::ChimeraDuelEffectConfig* P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_349F500EDF6DA5F9_METHOD_3_C7278F106790159B_OFFSET))(this, P0, P1, P2);
	}
};
