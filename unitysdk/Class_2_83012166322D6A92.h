#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_83012166322D6A92_InteractType.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_83012166322D6A92_METHOD_2_1F9DB45F7550A899_OFFSET UNITYSDK_OFFSET(0x11488690)
#define CLASS_2_83012166322D6A92_METHOD_2_2C3248B1DE7DDE82_OFFSET UNITYSDK_OFFSET(0x11488770)
#define CLASS_2_83012166322D6A92_METHOD_2_B6FFB7B36687C2C6_OFFSET UNITYSDK_OFFSET(0x11488F60)
#define CLASS_2_83012166322D6A92__CTOR_OFFSET UNITYSDK_OFFSET(0x114890B0)

inline static constexpr unsigned int Class_2_83012166322D6A92_TypeDefinitionIndex = 55727;

class Class_2_83012166322D6A92 : public ::RPG::Client::BaseModule
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83012166322D6A92__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_1F9DB45F7550A899(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_83012166322D6A92_METHOD_2_1F9DB45F7550A899_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Method_2_2C3248B1DE7DDE82(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_83012166322D6A92_METHOD_2_2C3248B1DE7DDE82_OFFSET))(this, a1);
	}

	::System::Void Method_2_B6FFB7B36687C2C6(::RPG::GameCore::GameEntity* a1, ::Class_2_83012166322D6A92_InteractType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_83012166322D6A92_InteractType))((::PBYTE)hIl2Cpp + CLASS_2_83012166322D6A92_METHOD_2_B6FFB7B36687C2C6_OFFSET))(this, a1, a2);
	}
};
