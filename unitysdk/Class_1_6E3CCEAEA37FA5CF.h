#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtModifierEventScope.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6E3CCEAEA37FA5CF_METHOD_1_9B8D79CDF6802E1A_OFFSET UNITYSDK_OFFSET(0x13634EB0)
#define CLASS_1_6E3CCEAEA37FA5CF__CCTOR_OFFSET UNITYSDK_OFFSET(0x13634E60)

inline static constexpr unsigned int Class_1_6E3CCEAEA37FA5CF_TypeDefinitionIndex = 50230;

class Class_1_6E3CCEAEA37FA5CF : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::GameCore::RtModifierEventScope>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::RPG::GameCore::RtModifierEventScope>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E3CCEAEA37FA5CF_TypeDefinitionIndex)->GetStaticField(0x44790);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E3CCEAEA37FA5CF__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_9B8D79CDF6802E1A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E3CCEAEA37FA5CF_METHOD_1_9B8D79CDF6802E1A_OFFSET))();
	}
};
