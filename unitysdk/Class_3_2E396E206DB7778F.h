#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FB3E7B71A45FEB7C_AttackChangeReason.h"
#include "unitysdk/Class_1_FB3E7B71A45FEB7C_HpChangeReason.h"
#include "unitysdk/Class_1_FB3E7B71A45FEB7C_ProbabilityChangeReason.h"
#include "unitysdk/Class_2_9C4F8205C3DCBA57.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelStatusType.h"

class Class_2_B66C1067C0468FBB;
namespace System { class String; }

#define CLASS_3_2E396E206DB7778F_METHOD_3_12731AE3EEF08E98_OFFSET UNITYSDK_OFFSET(0x18C8E250)
#define CLASS_3_2E396E206DB7778F_METHOD_3_3F1F73EF7BDD4DA7_OFFSET UNITYSDK_OFFSET(0x18C8EB60)
#define CLASS_3_2E396E206DB7778F_METHOD_3_4CFE0D101BFB95AA_OFFSET UNITYSDK_OFFSET(0x18C8E890)
#define CLASS_3_2E396E206DB7778F_METHOD_3_63682220FB290CE0_OFFSET UNITYSDK_OFFSET(0x18C8EE20)
#define CLASS_3_2E396E206DB7778F_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x18C8E1E0)
#define CLASS_3_2E396E206DB7778F_METHOD_3_8BFE22228B95E110_OFFSET UNITYSDK_OFFSET(0x18C8E570)
#define CLASS_3_2E396E206DB7778F__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8EF20)

inline static constexpr unsigned int Class_3_2E396E206DB7778F_TypeDefinitionIndex = 77089;

class Class_3_2E396E206DB7778F : public ::Class_2_9C4F8205C3DCBA57
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E396E206DB7778F__CTOR_OFFSET))(this);
	}

	::System::String* Method_3_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E396E206DB7778F_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_3_12731AE3EEF08E98(::Class_2_B66C1067C0468FBB* a1, ::Class_1_FB3E7B71A45FEB7C_HpChangeReason a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_1_FB3E7B71A45FEB7C_HpChangeReason, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2E396E206DB7778F_METHOD_3_12731AE3EEF08E98_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_8BFE22228B95E110(::Class_2_B66C1067C0468FBB* a1, ::Class_1_FB3E7B71A45FEB7C_AttackChangeReason a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_1_FB3E7B71A45FEB7C_AttackChangeReason, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2E396E206DB7778F_METHOD_3_8BFE22228B95E110_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_4CFE0D101BFB95AA(::Class_2_B66C1067C0468FBB* a1, ::Class_1_FB3E7B71A45FEB7C_ProbabilityChangeReason a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_1_FB3E7B71A45FEB7C_ProbabilityChangeReason, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2E396E206DB7778F_METHOD_3_4CFE0D101BFB95AA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_3F1F73EF7BDD4DA7(::Class_2_B66C1067C0468FBB* a1, ::Class_1_FB3E7B71A45FEB7C_ProbabilityChangeReason a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_1_FB3E7B71A45FEB7C_ProbabilityChangeReason, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2E396E206DB7778F_METHOD_3_3F1F73EF7BDD4DA7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_63682220FB290CE0(::Class_2_B66C1067C0468FBB* a1, ::RPG::GameCore::ChimeraDuelStatusType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::RPG::GameCore::ChimeraDuelStatusType))((::PBYTE)hIl2Cpp + CLASS_3_2E396E206DB7778F_METHOD_3_63682220FB290CE0_OFFSET))(this, a1, a2);
	}
};
