#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StageMonsterRewardItem; }

#define CLASS_1_3FC4072EF8218789_METHOD_1_09DA5ED950396F79_OFFSET UNITYSDK_OFFSET(0x1844A9D0)
#define CLASS_1_3FC4072EF8218789__CTOR_OFFSET UNITYSDK_OFFSET(0x1844AAD0)

inline static constexpr unsigned int Class_1_3FC4072EF8218789_TypeDefinitionIndex = 14366;

class Class_1_3FC4072EF8218789 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::StageMonsterRewardItem*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FC4072EF8218789__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_09DA5ED950396F79(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_3FC4072EF8218789*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_3FC4072EF8218789*&))((::PBYTE)hIl2Cpp + CLASS_1_3FC4072EF8218789_METHOD_1_09DA5ED950396F79_OFFSET))(a1, a2);
	}
};
