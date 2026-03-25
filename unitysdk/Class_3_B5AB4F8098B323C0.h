#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C994EBB81CDF74CE.h"

class Class_1_C4FD36003027AC99;
class Class_1_FB3E7B71A45FEB7C;
class Class_2_49CAB3DE74280C58;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B5AB4F8098B323C0_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0xAC44890)
#define CLASS_3_B5AB4F8098B323C0_METHOD_3_AEF712CB934C8901_OFFSET UNITYSDK_OFFSET(0xAC448F0)
#define CLASS_3_B5AB4F8098B323C0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC44CE0)

inline static constexpr unsigned int Class_3_B5AB4F8098B323C0_TypeDefinitionIndex = 62995;

class Class_3_B5AB4F8098B323C0 : public ::Class_2_C994EBB81CDF74CE
{
public:
	::Class_1_FB3E7B71A45FEB7C* Field_3_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B5AB4F8098B323C0__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_3_B5AB4F8098B323C0_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_AEF712CB934C8901(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_B5AB4F8098B323C0_METHOD_3_AEF712CB934C8901_OFFSET))(this, a1, a2, a3);
	}
};
