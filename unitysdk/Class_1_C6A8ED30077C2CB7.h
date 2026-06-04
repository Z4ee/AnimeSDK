#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_1_C6A8ED30077C2CB7_METHOD_1_16E0583AE1690754_OFFSET UNITYSDK_OFFSET(0xAC2D020)
#define CLASS_1_C6A8ED30077C2CB7_METHOD_1_A5AE030BBDCA17EA_OFFSET UNITYSDK_OFFSET(0xAC2CFD0)
#define CLASS_1_C6A8ED30077C2CB7_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC2D170)
#define CLASS_1_C6A8ED30077C2CB7__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAC2CFC0)
#define CLASS_1_C6A8ED30077C2CB7__CTOR_OFFSET UNITYSDK_OFFSET(0xAC2CF60)

inline static constexpr unsigned int Class_1_C6A8ED30077C2CB7_TypeDefinitionIndex = 52772;

class Class_1_C6A8ED30077C2CB7 : public ::System::Object
{
public:
	::RPG::GameCore::TargetEvaluator* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C6A8ED30077C2CB7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::GameCore::TargetEvaluator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_1_C6A8ED30077C2CB7__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5AE030BBDCA17EA(::RPG::GameCore::TargetEvaluator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_1_C6A8ED30077C2CB7_METHOD_1_A5AE030BBDCA17EA_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* Method_1_16E0583AE1690754()
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6A8ED30077C2CB7_METHOD_1_16E0583AE1690754_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6A8ED30077C2CB7_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
