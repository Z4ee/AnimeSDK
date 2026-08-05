#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorAirHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorBeHitTag.h"
#include "unitysdk/MoleMole/Config/AnimatorGroundHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/MoleMole/Config/CharacterAnimatorStateType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSpecialEffectHitData; }
namespace MoleMole::Config { class ConfigSpecialEffectHitData_SpecialHitEffectMapItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7B694D9C359052C0_METHOD_1_299DA8FF1D721BED_OFFSET UNITYSDK_OFFSET(0x18DAC6C0)
#define CLASS_1_7B694D9C359052C0_METHOD_1_756E91E89470983A_OFFSET UNITYSDK_OFFSET(0x18DAC5B0)
#define CLASS_1_7B694D9C359052C0_METHOD_1_8ABC8D2473B7DF68_OFFSET UNITYSDK_OFFSET(0x18DAC540)
#define CLASS_1_7B694D9C359052C0_METHOD_1_D54B781916B5F53B_OFFSET UNITYSDK_OFFSET(0x18DAC970)
#define CLASS_1_7B694D9C359052C0__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DAC4A0)

inline static constexpr unsigned int Class_1_7B694D9C359052C0_TypeDefinitionIndex = 77788;

class Class_1_7B694D9C359052C0 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimatorBeHitTag, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigSpecialEffectHitData_SpecialHitEffectMapItem*>*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimatorBeHitTag, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigSpecialEffectHitData_SpecialHitEffectMapItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B694D9C359052C0_TypeDefinitionIndex)->GetStaticField(0x35770);
	}
	static ::MoleMole::Config::ConfigSpecialEffectHitData** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigSpecialEffectHitData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B694D9C359052C0_TypeDefinitionIndex)->GetStaticField(0x35778);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B694D9C359052C0__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_8ABC8D2473B7DF68(::MoleMole::Config::AnimatorHitEffect a1, ::MoleMole::Config::AnimatorGroundHitType a2, ::MoleMole::Config::AnimatorAirHitType a3)
	{
		return ((::System::Int32(*)(::MoleMole::Config::AnimatorHitEffect, ::MoleMole::Config::AnimatorGroundHitType, ::MoleMole::Config::AnimatorAirHitType))((::PBYTE)hIl2Cpp + CLASS_1_7B694D9C359052C0_METHOD_1_8ABC8D2473B7DF68_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_756E91E89470983A(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7B694D9C359052C0_METHOD_1_756E91E89470983A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_D54B781916B5F53B(::MoleMole::Config::AnimatorBeHitTag a1, ::MoleMole::Config::CharacterAnimatorStateType a2, ::MoleMole::Config::AnimatorHitEffect& a3, ::MoleMole::Config::AnimatorGroundHitType& a4, ::MoleMole::Config::AnimatorAirHitType& a5)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::AnimatorBeHitTag, ::MoleMole::Config::CharacterAnimatorStateType, ::MoleMole::Config::AnimatorHitEffect&, ::MoleMole::Config::AnimatorGroundHitType&, ::MoleMole::Config::AnimatorAirHitType&))((::PBYTE)hIl2Cpp + CLASS_1_7B694D9C359052C0_METHOD_1_D54B781916B5F53B_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_299DA8FF1D721BED(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7B694D9C359052C0_METHOD_1_299DA8FF1D721BED_OFFSET))(a1, a2);
	}
};
