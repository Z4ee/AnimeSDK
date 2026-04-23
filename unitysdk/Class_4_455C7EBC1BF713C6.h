#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_455C7EBC1BF713C6_METHOD_4_9968A253B5B328D1_OFFSET UNITYSDK_OFFSET(0x18332E00)
#define CLASS_4_455C7EBC1BF713C6_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x18332ED0)
#define CLASS_4_455C7EBC1BF713C6__CTOR_OFFSET UNITYSDK_OFFSET(0x18332E80)

inline static constexpr unsigned int Class_4_455C7EBC1BF713C6_TypeDefinitionIndex = 23177;

class Class_4_455C7EBC1BF713C6 : public ::RPG::GameCore::PredicateConfig
{
public:
	::Il2CppArray<::RPG::GameCore::AttackType>* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_455C7EBC1BF713C6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9968A253B5B328D1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_455C7EBC1BF713C6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_455C7EBC1BF713C6*&))((::PBYTE)hIl2Cpp + CLASS_4_455C7EBC1BF713C6_METHOD_4_9968A253B5B328D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_455C7EBC1BF713C6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_455C7EBC1BF713C6*))((::PBYTE)hIl2Cpp + CLASS_4_455C7EBC1BF713C6_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}
};
