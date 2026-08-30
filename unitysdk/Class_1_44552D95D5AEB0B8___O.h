#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_543;
class Class_1_D8203AFB32E9259C;
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }

inline static constexpr unsigned int Class_1_44552D95D5AEB0B8___O_TypeDefinitionIndex = 54450;

class Class_1_44552D95D5AEB0B8___O : public ::System::Object
{
public:
	static ::System::Func_3<::Class_0_16E4307DCC419505_543*, ::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet__1____CheckSkillDataMatchRequester()
	{
		return (::System::Func_3<::Class_0_16E4307DCC419505_543*, ::RPG::GameCore::GameEntity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44552D95D5AEB0B8___O_TypeDefinitionIndex)->GetStaticField(0x13C80);
	}
	static ::System::Func_3<::Class_0_16E4307DCC419505_543*, ::Class_1_D8203AFB32E9259C*, ::System::Boolean>** StaticGet__0___CheckMatch()
	{
		return (::System::Func_3<::Class_0_16E4307DCC419505_543*, ::Class_1_D8203AFB32E9259C*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44552D95D5AEB0B8___O_TypeDefinitionIndex)->GetStaticField(0x13C88);
	}
	static ::System::Action_1<::Class_0_16E4307DCC419505_543*>** StaticGet__2____OnRemoveRequester()
	{
		return (::System::Action_1<::Class_0_16E4307DCC419505_543*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44552D95D5AEB0B8___O_TypeDefinitionIndex)->GetStaticField(0x13C90);
	}
};
