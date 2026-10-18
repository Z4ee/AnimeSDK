#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_4DC40C4198F52F51___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB905760)
#define CLASS_1_4DC40C4198F52F51___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB9057A0)
#define CLASS_1_4DC40C4198F52F51___C___BUILD_B__7_0_OFFSET UNITYSDK_OFFSET(0xB905970)
#define CLASS_1_4DC40C4198F52F51___C___CCTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xB9057B0)
#define CLASS_1_4DC40C4198F52F51___C___CCTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0xB905890)
#define CLASS_1_4DC40C4198F52F51___C___ONBATTLEMODEFINISH_B__22_0_OFFSET UNITYSDK_OFFSET(0xB9059A0)

inline static constexpr unsigned int Class_1_4DC40C4198F52F51___c_TypeDefinitionIndex = 54258;

class Class_1_4DC40C4198F52F51___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::JsonEnum*, ::System::String*>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::RPG::GameCore::JsonEnum*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4DC40C4198F52F51___c_TypeDefinitionIndex)->GetStaticField(0x645C0);
	}
	static ::Class_1_4DC40C4198F52F51___c** StaticGet___9()
	{
		return (::Class_1_4DC40C4198F52F51___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4DC40C4198F52F51___c_TypeDefinitionIndex)->GetStaticField(0x645C8);
	}
	static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet___9__22_0()
	{
		return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4DC40C4198F52F51___c_TypeDefinitionIndex)->GetStaticField(0x645D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51___C__CTOR_OFFSET))(this);
	}

	::System::String* __cctor_b__0_0(::RPG::GameCore::RtAbilityProperty a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51___C___CCTOR_B__0_0_OFFSET))(this, a1);
	}

	::System::String* __cctor_b__0_1(::RPG::GameCore::RtAbilityProperty a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51___C___CCTOR_B__0_1_OFFSET))(this, a1);
	}

	::System::String* __Build_b__7_0(::RPG::GameCore::JsonEnum* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51___C___BUILD_B__7_0_OFFSET))(this, a1);
	}

	::System::Boolean __OnBattleModeFinish_b__22_0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4DC40C4198F52F51___C___ONBATTLEMODEFINISH_B__22_0_OFFSET))(this, a1);
	}
};
