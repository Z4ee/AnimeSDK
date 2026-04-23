#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_D37BADBAF66E56C6;
namespace RPG::GameCore { class MarbleByDefenderFaction; }

#define CLASS_3_FA6E7E59DB0B00AC_METHOD_3_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x17EDE110)
#define CLASS_3_FA6E7E59DB0B00AC__CTOR_OFFSET UNITYSDK_OFFSET(0x17EDE0F0)

inline static constexpr unsigned int Class_3_FA6E7E59DB0B00AC_TypeDefinitionIndex = 38989;

class Class_3_FA6E7E59DB0B00AC : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByDefenderFaction* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByDefenderFaction* a1, ::Class_1_D37BADBAF66E56C6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByDefenderFaction*, ::Class_1_D37BADBAF66E56C6*))((::PBYTE)hIl2Cpp + CLASS_3_FA6E7E59DB0B00AC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA6E7E59DB0B00AC_METHOD_3_3845AD389B8E1E47_OFFSET))(this);
	}
};
