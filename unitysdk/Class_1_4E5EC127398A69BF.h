#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class LevelNPCInfoOverride; }

#define CLASS_1_4E5EC127398A69BF_METHOD_1_2DB6924C227C38EA_OFFSET UNITYSDK_OFFSET(0x15E3C250)
#define CLASS_1_4E5EC127398A69BF_METHOD_1_52F7627BAFB110A9_OFFSET UNITYSDK_OFFSET(0x15E3B9D0)
#define CLASS_1_4E5EC127398A69BF_METHOD_1_68F248EF2D2D5377_OFFSET UNITYSDK_OFFSET(0x15E3BBA0)
#define CLASS_1_4E5EC127398A69BF_METHOD_1_779E452E78C59F81_1_OFFSET UNITYSDK_OFFSET(0x15E3C2C0)
#define CLASS_1_4E5EC127398A69BF_METHOD_1_779E452E78C59F81_OFFSET UNITYSDK_OFFSET(0x15E3C1C0)
#define CLASS_1_4E5EC127398A69BF_METHOD_1_C594D13B2F4D043A_OFFSET UNITYSDK_OFFSET(0x15E3C350)

inline static constexpr unsigned int Class_1_4E5EC127398A69BF_TypeDefinitionIndex = 53959;

class Class_1_4E5EC127398A69BF : public ::System::Object
{
public:
	static ::System::Void Method_1_52F7627BAFB110A9(::RPG::GameCore::LevelNPCInfoOverride* a1, ::RPG::Client::MapNpcDef* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::LevelNPCInfoOverride*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_4E5EC127398A69BF_METHOD_1_52F7627BAFB110A9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_68F248EF2D2D5377(::RPG::GameCore::LevelNPCInfoOverride* a1, ::RPG::Client::MapNpcDef* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::LevelNPCInfoOverride*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_4E5EC127398A69BF_METHOD_1_68F248EF2D2D5377_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_779E452E78C59F81(::RPG::GameCore::LevelNPCInfoOverride* a1, ::RPG::Client::MapNpcDef* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::LevelNPCInfoOverride*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_4E5EC127398A69BF_METHOD_1_779E452E78C59F81_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2DB6924C227C38EA(::RPG::GameCore::LevelNPCInfoOverride* a1, ::RPG::Client::MapNpcDef* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::LevelNPCInfoOverride*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_4E5EC127398A69BF_METHOD_1_2DB6924C227C38EA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_779E452E78C59F81_1(::RPG::GameCore::LevelNPCInfoOverride* a1, ::RPG::Client::MapNpcDef* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::LevelNPCInfoOverride*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_4E5EC127398A69BF_METHOD_1_779E452E78C59F81_1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::LevelNPCInfoOverride* Method_1_C594D13B2F4D043A(::RPG::Client::MapNpcDef* a1)
	{
		return ((::RPG::GameCore::LevelNPCInfoOverride*(*)(::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_4E5EC127398A69BF_METHOD_1_C594D13B2F4D043A_OFFSET))(a1);
	}
};
