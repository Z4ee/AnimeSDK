#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleByCheckSealLevel; }

#define CLASS_3_02B4C0C989BB010D_METHOD_3_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x169F1D30)
#define CLASS_3_02B4C0C989BB010D__CTOR_OFFSET UNITYSDK_OFFSET(0x169F1D10)

inline static constexpr unsigned int Class_3_02B4C0C989BB010D_TypeDefinitionIndex = 33210;

class Class_3_02B4C0C989BB010D : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByCheckSealLevel* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByCheckSealLevel* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCheckSealLevel*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_3_02B4C0C989BB010D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02B4C0C989BB010D_METHOD_3_4DA6D4A624E42CAB_OFFSET))(this);
	}
};
