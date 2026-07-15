#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_508;
class Class_1_D8203AFB32E9259C;
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }

inline static constexpr unsigned int Class_1_44552D95D5AEB0B8___O_TypeDefinitionIndex = 51766;

class Class_1_44552D95D5AEB0B8___O : public ::System::Object
{
public:
	static ::System::Func_3<::Class_0_16E4307DCC419505_508*, ::Class_1_D8203AFB32E9259C*, ::System::Boolean>** StaticGet__0___CheckMatch()
	{
		return (::System::Func_3<::Class_0_16E4307DCC419505_508*, ::Class_1_D8203AFB32E9259C*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44552D95D5AEB0B8___O_TypeDefinitionIndex)->GetStaticField(0x56DF0);
	}
	static ::System::Func_3<::Class_0_16E4307DCC419505_508*, ::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet__1____CheckSkillDataMatchRequester()
	{
		return (::System::Func_3<::Class_0_16E4307DCC419505_508*, ::RPG::GameCore::GameEntity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44552D95D5AEB0B8___O_TypeDefinitionIndex)->GetStaticField(0x56DF8);
	}
	static ::System::Action_1<::Class_0_16E4307DCC419505_508*>** StaticGet__2____OnRemoveRequester()
	{
		return (::System::Action_1<::Class_0_16E4307DCC419505_508*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44552D95D5AEB0B8___O_TypeDefinitionIndex)->GetStaticField(0x56E00);
	}
};
