#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_2_460F24561689B584;
class Class_2_70550F2EE8A92C1F;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_F336836DDCB5A66C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15664310)
#define CLASS_2_F336836DDCB5A66C_METHOD_2_8A0579933124D19F_OFFSET UNITYSDK_OFFSET(0x156643E0)
#define CLASS_2_F336836DDCB5A66C_METHOD_2_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x156641D0)
#define CLASS_2_F336836DDCB5A66C__CTOR_OFFSET UNITYSDK_OFFSET(0x15664480)

inline static constexpr unsigned int Class_2_F336836DDCB5A66C_TypeDefinitionIndex = 57127;

class Class_2_F336836DDCB5A66C : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::String* POPHIILFKAA; // 0x0
	::Class_2_460F24561689B584* IJNINGIFGIK; // 0x18
	::Class_2_70550F2EE8A92C1F* HMPMCDFCNLO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F336836DDCB5A66C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F336836DDCB5A66C_METHOD_2_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F336836DDCB5A66C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_8A0579933124D19F(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F336836DDCB5A66C_METHOD_2_8A0579933124D19F_OFFSET))(this, a1, a2, a3);
	}
};
