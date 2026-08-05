#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;

#define BIGSCENEGROUPCHALLENGEUTIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x164768F0)
#define BIGSCENEGROUPCHALLENGEUTIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16476930)
#define BIGSCENEGROUPCHALLENGEUTIL___C__REGISTERDYNAMICGROUPCHALLENGE_B__1_3_OFFSET UNITYSDK_OFFSET(0x16476950)
#define BIGSCENEGROUPCHALLENGEUTIL___C__SETSTARTGROUPCHALLENGE_B__0_1_OFFSET UNITYSDK_OFFSET(0x16476940)

inline static constexpr unsigned int BigSceneGroupChallengeUtil___c_TypeDefinitionIndex = 49909;

class BigSceneGroupChallengeUtil___c : public ::System::Object
{
public:
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__1_3()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(BigSceneGroupChallengeUtil___c_TypeDefinitionIndex)->GetStaticField(0x34950);
	}
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__0_1()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(BigSceneGroupChallengeUtil___c_TypeDefinitionIndex)->GetStaticField(0x34958);
	}
	static ::BigSceneGroupChallengeUtil___c** StaticGet___9()
	{
		return (::BigSceneGroupChallengeUtil___c**)Il2CppClass::FromTypeDefinitionIndex(BigSceneGroupChallengeUtil___c_TypeDefinitionIndex)->GetStaticField(0x34960);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__CTOR_OFFSET))(this);
	}

	::System::Void _SetStartGroupChallenge_b__0_1(::Class_0_16E4307DCC419505_36* _)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__SETSTARTGROUPCHALLENGE_B__0_1_OFFSET))(this, _);
	}

	::System::Void _RegisterDynamicGroupChallenge_b__1_3(::Class_0_16E4307DCC419505_36* _)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__REGISTERDYNAMICGROUPCHALLENGE_B__1_3_OFFSET))(this, _);
	}
};
