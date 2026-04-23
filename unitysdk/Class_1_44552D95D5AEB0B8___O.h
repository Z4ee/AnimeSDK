#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_465;
class Class_1_05E595DC72CB83CA;
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }

inline static constexpr unsigned int Class_1_44552D95D5AEB0B8___O_TypeDefinitionIndex = 50017;

class Class_1_44552D95D5AEB0B8___O : public ::System::Object
{
public:
	static ::System::Func_3<::Class_0_16E4307DCC419505_465*, ::Class_1_05E595DC72CB83CA*, ::System::Boolean>** StaticGet__0___CheckMatch()
	{
		return (::System::Func_3<::Class_0_16E4307DCC419505_465*, ::Class_1_05E595DC72CB83CA*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44552D95D5AEB0B8___O_TypeDefinitionIndex)->GetStaticField(0x1D8B0);
	}
	static ::System::Action_1<::Class_0_16E4307DCC419505_465*>** StaticGet__2____OnRemoveRequester()
	{
		return (::System::Action_1<::Class_0_16E4307DCC419505_465*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44552D95D5AEB0B8___O_TypeDefinitionIndex)->GetStaticField(0x1D8B8);
	}
	static ::System::Func_3<::Class_0_16E4307DCC419505_465*, ::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet__1____CheckSkillDataMatchRequester()
	{
		return (::System::Func_3<::Class_0_16E4307DCC419505_465*, ::RPG::GameCore::GameEntity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44552D95D5AEB0B8___O_TypeDefinitionIndex)->GetStaticField(0x1D8C0);
	}
};
