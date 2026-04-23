#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_D37BADBAF66E56C6;
namespace RPG::GameCore { class MarbleByOtherFaction; }

#define CLASS_3_00CA05DE75A64F23_METHOD_3_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x18027220)
#define CLASS_3_00CA05DE75A64F23__CTOR_OFFSET UNITYSDK_OFFSET(0x18027200)

inline static constexpr unsigned int Class_3_00CA05DE75A64F23_TypeDefinitionIndex = 38990;

class Class_3_00CA05DE75A64F23 : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByOtherFaction* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByOtherFaction* a1, ::Class_1_D37BADBAF66E56C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByOtherFaction*, ::Class_1_D37BADBAF66E56C6*))((::PBYTE)hIl2Cpp + CLASS_3_00CA05DE75A64F23__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00CA05DE75A64F23_METHOD_3_A8F6F688241E6DBC_OFFSET))(this);
	}
};
