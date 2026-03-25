#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_07F3159234271541;
class Class_1_7370FAEB2C64106B;
class Class_2_7AF1D57CA4301272;
namespace RPG::GameCore { class ChimeraAbility; }

#define CLASS_1_8D88BCFB85B9C485_METHOD_1_800E7F58EB8D79BE_OFFSET UNITYSDK_OFFSET(0x105C4600)
#define CLASS_1_8D88BCFB85B9C485_METHOD_1_BA8A4CDC14025924_OFFSET UNITYSDK_OFFSET(0x105C3FC0)

inline static constexpr unsigned int Class_1_8D88BCFB85B9C485_TypeDefinitionIndex = 62381;

class Class_1_8D88BCFB85B9C485 : public ::System::Object
{
public:
	static ::Class_1_7370FAEB2C64106B* Method_1_BA8A4CDC14025924(::Class_2_7AF1D57CA4301272* a1, ::RPG::GameCore::ChimeraAbility* a2, ::Class_2_7AF1D57CA4301272* a3, ::Class_1_07F3159234271541* a4)
	{
		return ((::Class_1_7370FAEB2C64106B*(*)(::Class_2_7AF1D57CA4301272*, ::RPG::GameCore::ChimeraAbility*, ::Class_2_7AF1D57CA4301272*, ::Class_1_07F3159234271541*))((::PBYTE)hIl2Cpp + CLASS_1_8D88BCFB85B9C485_METHOD_1_BA8A4CDC14025924_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_7370FAEB2C64106B* Method_1_800E7F58EB8D79BE(::Class_2_7AF1D57CA4301272* a1, ::RPG::GameCore::ChimeraAbility* a2, ::Class_1_7370FAEB2C64106B* a3, ::Class_1_07F3159234271541* a4)
	{
		return ((::Class_1_7370FAEB2C64106B*(*)(::Class_2_7AF1D57CA4301272*, ::RPG::GameCore::ChimeraAbility*, ::Class_1_7370FAEB2C64106B*, ::Class_1_07F3159234271541*))((::PBYTE)hIl2Cpp + CLASS_1_8D88BCFB85B9C485_METHOD_1_800E7F58EB8D79BE_OFFSET))(a1, a2, a3, a4);
	}
};
