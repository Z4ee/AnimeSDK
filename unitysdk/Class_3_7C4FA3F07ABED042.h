#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_C03F4DDB5A53142C;
namespace RPG::GameCore { class MarbleByCompareScore; }

#define CLASS_3_7C4FA3F07ABED042_METHOD_3_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x16812210)
#define CLASS_3_7C4FA3F07ABED042__CTOR_OFFSET UNITYSDK_OFFSET(0x168121F0)

inline static constexpr unsigned int Class_3_7C4FA3F07ABED042_TypeDefinitionIndex = 33214;

class Class_3_7C4FA3F07ABED042 : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByCompareScore* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByCompareScore* a1, ::Class_1_C03F4DDB5A53142C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCompareScore*, ::Class_1_C03F4DDB5A53142C*))((::PBYTE)hIl2Cpp + CLASS_3_7C4FA3F07ABED042__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C4FA3F07ABED042_METHOD_3_4487776BEE04D471_OFFSET))(this);
	}
};
