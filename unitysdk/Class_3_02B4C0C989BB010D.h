#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_EFDEDB2BC2764B7D;
namespace RPG::GameCore { class MarbleByCheckSealLevel; }

#define CLASS_3_02B4C0C989BB010D_METHOD_3_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1C3B0AC0)
#define CLASS_3_02B4C0C989BB010D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B0AA0)

inline static constexpr unsigned int Class_3_02B4C0C989BB010D_TypeDefinitionIndex = 41515;

class Class_3_02B4C0C989BB010D : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByCheckSealLevel* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByCheckSealLevel* a1, ::Class_1_EFDEDB2BC2764B7D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCheckSealLevel*, ::Class_1_EFDEDB2BC2764B7D*))((::PBYTE)hIl2Cpp + CLASS_3_02B4C0C989BB010D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02B4C0C989BB010D_METHOD_3_4DA6D4A624E42CAB_OFFSET))(this);
	}
};
