#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEventScope.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C9374C34A234A2B9_METHOD_1_9A263B7DE0D16163_OFFSET UNITYSDK_OFFSET(0x167602F0)
#define CLASS_1_C9374C34A234A2B9__CCTOR_OFFSET UNITYSDK_OFFSET(0x167602C0)

inline static constexpr unsigned int Class_1_C9374C34A234A2B9_TypeDefinitionIndex = 53298;

class Class_1_C9374C34A234A2B9 : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::GameCore::TurnBasedModifierEventScope>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::RPG::GameCore::TurnBasedModifierEventScope>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9374C34A234A2B9_TypeDefinitionIndex)->GetStaticField(0x2DA60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9374C34A234A2B9__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_9A263B7DE0D16163()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9374C34A234A2B9_METHOD_1_9A263B7DE0D16163_OFFSET))();
	}
};
