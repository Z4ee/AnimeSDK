#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StageMonsterRewardItem; }

#define CLASS_1_C87BC78CC6DC013F_METHOD_1_E73A89A53EDEB864_OFFSET UNITYSDK_OFFSET(0x1CCC1170)
#define CLASS_1_C87BC78CC6DC013F__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC1260)

inline static constexpr unsigned int Class_1_C87BC78CC6DC013F_TypeDefinitionIndex = 14978;

class Class_1_C87BC78CC6DC013F : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::StageMonsterRewardItem*>* DJOBNPIAEJP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C87BC78CC6DC013F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E73A89A53EDEB864(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_C87BC78CC6DC013F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_C87BC78CC6DC013F*&))((::PBYTE)hIl2Cpp + CLASS_1_C87BC78CC6DC013F_METHOD_1_E73A89A53EDEB864_OFFSET))(a1, a2);
	}
};
