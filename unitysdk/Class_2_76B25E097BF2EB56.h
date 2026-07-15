#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_2_460F24561689B584;
class Class_2_70550F2EE8A92C1F;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_76B25E097BF2EB56_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16319520)
#define CLASS_2_76B25E097BF2EB56_METHOD_2_0E44AB85D12835F8_OFFSET UNITYSDK_OFFSET(0x16319600)
#define CLASS_2_76B25E097BF2EB56_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x163193E0)
#define CLASS_2_76B25E097BF2EB56__CTOR_OFFSET UNITYSDK_OFFSET(0x163196A0)

inline static constexpr unsigned int Class_2_76B25E097BF2EB56_TypeDefinitionIndex = 54406;

class Class_2_76B25E097BF2EB56 : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_2_70550F2EE8A92C1F* Field_2_1; // 0x18
	::Class_2_460F24561689B584* Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B25E097BF2EB56__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B25E097BF2EB56_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B25E097BF2EB56_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_0E44AB85D12835F8(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_76B25E097BF2EB56_METHOD_2_0E44AB85D12835F8_OFFSET))(this, a1, a2, a3);
	}
};
