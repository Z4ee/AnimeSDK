#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_634284739E90CAFA.h"

class Class_1_36006FC25F5DDC69;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }

#define CLASS_2_273479CBCB67F53F__CTOR_OFFSET UNITYSDK_OFFSET(0x9526A00)

inline static constexpr unsigned int Class_2_273479CBCB67F53F_TypeDefinitionIndex = 71356;

class Class_2_273479CBCB67F53F : public ::Class_1_634284739E90CAFA
{
public:
	::Il2CppArray<::RPG::GameCore::BaseChenLingBattleEffect*>* Field_2_0; // 0x40
	::Class_1_36006FC25F5DDC69* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_273479CBCB67F53F__CTOR_OFFSET))(this);
	}
};
