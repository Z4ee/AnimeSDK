#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_07F3159234271541;
class Class_1_683531EF1026FCA6;
class Class_2_C01BA129C3E40259;
namespace RPG::GameCore { class ChimeraAbility; }

#define CLASS_1_10B837D69BE3E973_METHOD_1_3911499B08450244_OFFSET UNITYSDK_OFFSET(0x14ABE4D0)
#define CLASS_1_10B837D69BE3E973_METHOD_1_800E7F58EB8D79BE_OFFSET UNITYSDK_OFFSET(0x14ABE9E0)

inline static constexpr unsigned int Class_1_10B837D69BE3E973_TypeDefinitionIndex = 72709;

class Class_1_10B837D69BE3E973 : public ::System::Object
{
public:
	static ::Class_1_683531EF1026FCA6* Method_1_3911499B08450244(::Class_2_C01BA129C3E40259* a1, ::RPG::GameCore::ChimeraAbility* a2, ::Class_2_C01BA129C3E40259* a3, ::Class_1_07F3159234271541* a4)
	{
		return ((::Class_1_683531EF1026FCA6*(*)(::Class_2_C01BA129C3E40259*, ::RPG::GameCore::ChimeraAbility*, ::Class_2_C01BA129C3E40259*, ::Class_1_07F3159234271541*))((::PBYTE)hIl2Cpp + CLASS_1_10B837D69BE3E973_METHOD_1_3911499B08450244_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_683531EF1026FCA6* Method_1_800E7F58EB8D79BE(::Class_2_C01BA129C3E40259* a1, ::RPG::GameCore::ChimeraAbility* a2, ::Class_1_683531EF1026FCA6* a3, ::Class_1_07F3159234271541* a4)
	{
		return ((::Class_1_683531EF1026FCA6*(*)(::Class_2_C01BA129C3E40259*, ::RPG::GameCore::ChimeraAbility*, ::Class_1_683531EF1026FCA6*, ::Class_1_07F3159234271541*))((::PBYTE)hIl2Cpp + CLASS_1_10B837D69BE3E973_METHOD_1_800E7F58EB8D79BE_OFFSET))(a1, a2, a3, a4);
	}
};
