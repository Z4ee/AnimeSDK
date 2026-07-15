#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_75E63034C2ED40FA.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"

class Class_1_4BA3656021000ED5;
class Class_1_A92BC063ED2379EB;
class Class_1_B58468E7171EFB5E;
class Class_2_B66C1067C0468FBB;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelBuffConfig; }
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B2CEDF115CBE98D5_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x16028260)
#define CLASS_3_B2CEDF115CBE98D5_METHOD_3_A1CE347D06E27CA9_OFFSET UNITYSDK_OFFSET(0x160282D0)
#define CLASS_3_B2CEDF115CBE98D5_METHOD_3_BB2A3018F2CE3315_OFFSET UNITYSDK_OFFSET(0x16028830)
#define CLASS_3_B2CEDF115CBE98D5__CTOR_OFFSET UNITYSDK_OFFSET(0x16029110)

inline static constexpr unsigned int Class_3_B2CEDF115CBE98D5_TypeDefinitionIndex = 73491;

class Class_3_B2CEDF115CBE98D5 : public ::Class_2_75E63034C2ED40FA
{
public:
	::Class_1_B58468E7171EFB5E* Field_3_0; // 0x10
	::Class_1_4BA3656021000ED5* Field_3_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2CEDF115CBE98D5__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_3_B2CEDF115CBE98D5_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_A1CE347D06E27CA9(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_B2CEDF115CBE98D5_METHOD_3_A1CE347D06E27CA9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_BB2A3018F2CE3315(::RPG::GameCore::ChimeraDuelTeamType a1, ::Il2CppArray<::RPG::GameCore::ChimeraDuelBuffConfig*>* a2, ::Class_1_A92BC063ED2379EB* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTeamType, ::Il2CppArray<::RPG::GameCore::ChimeraDuelBuffConfig*>*, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_3_B2CEDF115CBE98D5_METHOD_3_BB2A3018F2CE3315_OFFSET))(this, a1, a2, a3);
	}
};
