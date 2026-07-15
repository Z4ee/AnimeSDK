#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

class Class_1_A6260AB79B268324;
class Class_1_D294488719556168;
class Class_2_7EA45D2647F35CDD;
class Class_3_608BC2F58E6B9CF1;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_1_A2719280C49D8C27_METHOD_1_149B3ECC02EF6B72_OFFSET UNITYSDK_OFFSET(0x15EBCCC0)
#define CLASS_1_A2719280C49D8C27_METHOD_1_181E3ADFB47B86C7_OFFSET UNITYSDK_OFFSET(0x15EBCB70)
#define CLASS_1_A2719280C49D8C27_METHOD_1_85AB083DB95CDF8B_OFFSET UNITYSDK_OFFSET(0x15EBC7D0)
#define CLASS_1_A2719280C49D8C27__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBC740)

inline static constexpr unsigned int Class_1_A2719280C49D8C27_TypeDefinitionIndex = 58302;

class Class_1_A2719280C49D8C27 : public ::System::Object
{
public:
	::Class_1_A6260AB79B268324* Field_1_0; // 0x10
	::Class_1_A6260AB79B268324* Field_1_1; // 0x18
	::RPG::GameCore::TurnBasedGameMode* Field_1_2; // 0x20
	::Class_2_7EA45D2647F35CDD* Field_1_3; // 0x28
	::Class_3_608BC2F58E6B9CF1* Field_1_4; // 0x30

	::System::Void _ctor(::Class_3_608BC2F58E6B9CF1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_608BC2F58E6B9CF1*))((::PBYTE)hIl2Cpp + CLASS_1_A2719280C49D8C27__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_85AB083DB95CDF8B(::Class_1_D294488719556168* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D294488719556168*))((::PBYTE)hIl2Cpp + CLASS_1_A2719280C49D8C27_METHOD_1_85AB083DB95CDF8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_181E3ADFB47B86C7(::RPG::GameCore::TurnState a1, ::RPG::GameCore::TurnState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_A2719280C49D8C27_METHOD_1_181E3ADFB47B86C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_149B3ECC02EF6B72(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A2719280C49D8C27_METHOD_1_149B3ECC02EF6B72_OFFSET))(this, a1);
	}
};
