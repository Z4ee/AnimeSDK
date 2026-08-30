#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorSpeedMultiplyReason.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1D5469AF414FDE49_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC40A340)
#define CLASS_1_1D5469AF414FDE49_METHOD_1_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0xC40A620)
#define CLASS_1_1D5469AF414FDE49_METHOD_1_5D621EAC28A85721_OFFSET UNITYSDK_OFFSET(0xC40A390)
#define CLASS_1_1D5469AF414FDE49_METHOD_1_C7AA0B5353D21688_OFFSET UNITYSDK_OFFSET(0xC40A5A0)
#define CLASS_1_1D5469AF414FDE49_METHOD_1_DA2DC0F5AC33025D_OFFSET UNITYSDK_OFFSET(0xC40A540)
#define CLASS_1_1D5469AF414FDE49__CTOR_OFFSET UNITYSDK_OFFSET(0xC40A2A0)

inline static constexpr unsigned int Class_1_1D5469AF414FDE49_TypeDefinitionIndex = 57178;

class Class_1_1D5469AF414FDE49 : public ::System::Object
{
public:
	// static const ::System::Int32 EOOOFOPNLEA = 0x2; // 0x0
	::Il2CppArray<::System::Single>* GPHMDJGACAN; // 0x10
	::System::Single JFAEMHPKPLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D5469AF414FDE49__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D5469AF414FDE49_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5D621EAC28A85721(::RPG::GameCore::AnimatorSpeedMultiplyReason a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimatorSpeedMultiplyReason, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1D5469AF414FDE49_METHOD_1_5D621EAC28A85721_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DA2DC0F5AC33025D(::RPG::GameCore::AnimatorSpeedMultiplyReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimatorSpeedMultiplyReason))((::PBYTE)hIl2Cpp + CLASS_1_1D5469AF414FDE49_METHOD_1_DA2DC0F5AC33025D_OFFSET))(this, a1);
	}

	::System::Single Method_1_C7AA0B5353D21688()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D5469AF414FDE49_METHOD_1_C7AA0B5353D21688_OFFSET))(this);
	}

	::System::Void Method_1_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D5469AF414FDE49_METHOD_1_3CF43707BF2E9BBA_OFFSET))(this);
	}
};
