#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_634284739E90CAFA.h"

class Class_1_B8FF829EFDD29B81;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }

#define CLASS_2_273479CBCB67F53F__CTOR_OFFSET UNITYSDK_OFFSET(0x13C51360)

inline static constexpr unsigned int Class_2_273479CBCB67F53F_TypeDefinitionIndex = 72378;

class Class_2_273479CBCB67F53F : public ::Class_1_634284739E90CAFA
{
public:
	::Class_1_B8FF829EFDD29B81* Field_2_0; // 0x40
	::Il2CppArray<::RPG::GameCore::BaseChenLingBattleEffect*>* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_273479CBCB67F53F__CTOR_OFFSET))(this);
	}
};
