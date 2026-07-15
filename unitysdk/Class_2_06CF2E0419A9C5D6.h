#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_06CF2E0419A9C5D6_InteractType.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_06CF2E0419A9C5D6_METHOD_2_1F9DB45F7550A899_OFFSET UNITYSDK_OFFSET(0x18F94250)
#define CLASS_2_06CF2E0419A9C5D6_METHOD_2_2C3248B1DE7DDE82_OFFSET UNITYSDK_OFFSET(0x18F94330)
#define CLASS_2_06CF2E0419A9C5D6_METHOD_2_48AE9BA4956C1DED_OFFSET UNITYSDK_OFFSET(0x18F94C80)
#define CLASS_2_06CF2E0419A9C5D6__CTOR_OFFSET UNITYSDK_OFFSET(0x18F94E50)

inline static constexpr unsigned int Class_2_06CF2E0419A9C5D6_TypeDefinitionIndex = 65236;

class Class_2_06CF2E0419A9C5D6 : public ::RPG::Client::BaseModule
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06CF2E0419A9C5D6__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_1F9DB45F7550A899(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_06CF2E0419A9C5D6_METHOD_2_1F9DB45F7550A899_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Method_2_2C3248B1DE7DDE82(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_06CF2E0419A9C5D6_METHOD_2_2C3248B1DE7DDE82_OFFSET))(this, a1);
	}

	::System::Void Method_2_48AE9BA4956C1DED(::RPG::GameCore::GameEntity* a1, ::Class_2_06CF2E0419A9C5D6_InteractType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_06CF2E0419A9C5D6_InteractType))((::PBYTE)hIl2Cpp + CLASS_2_06CF2E0419A9C5D6_METHOD_2_48AE9BA4956C1DED_OFFSET))(this, a1, a2);
	}
};
