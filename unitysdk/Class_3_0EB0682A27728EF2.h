#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C994EBB81CDF74CE.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"

class Class_1_2CE61CB9B2E57F36;
class Class_1_5582DFD38EE429E6;
class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelBuffConfig; }
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_0EB0682A27728EF2_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0xE0057E0)
#define CLASS_3_0EB0682A27728EF2_METHOD_3_747899CB43883223_OFFSET UNITYSDK_OFFSET(0xE005E60)
#define CLASS_3_0EB0682A27728EF2_METHOD_3_D6752B7ECE04313B_OFFSET UNITYSDK_OFFSET(0xE005850)
#define CLASS_3_0EB0682A27728EF2__CTOR_OFFSET UNITYSDK_OFFSET(0xE006660)

inline static constexpr unsigned int Class_3_0EB0682A27728EF2_TypeDefinitionIndex = 71028;

class Class_3_0EB0682A27728EF2 : public ::Class_2_C994EBB81CDF74CE
{
public:
	::Class_1_2CE61CB9B2E57F36* Field_3_1; // 0x10
	::Class_1_5582DFD38EE429E6* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0EB0682A27728EF2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_3_0EB0682A27728EF2_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D6752B7ECE04313B(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_0EB0682A27728EF2_METHOD_3_D6752B7ECE04313B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_747899CB43883223(::RPG::GameCore::ChimeraDuelTeamType a1, ::Il2CppArray<::RPG::GameCore::ChimeraDuelBuffConfig*>* a2, ::Class_1_C4FD36003027AC99* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTeamType, ::Il2CppArray<::RPG::GameCore::ChimeraDuelBuffConfig*>*, ::Class_1_C4FD36003027AC99*))((::PBYTE)hIl2Cpp + CLASS_3_0EB0682A27728EF2_METHOD_3_747899CB43883223_OFFSET))(this, a1, a2, a3);
	}
};
