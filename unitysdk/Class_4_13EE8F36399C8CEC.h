#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_13EE8F36399C8CEC_METHOD_4_73F0031E4983E886_OFFSET UNITYSDK_OFFSET(0x18DA7570)
#define CLASS_4_13EE8F36399C8CEC_METHOD_4_9FB7184D9548FFA8_OFFSET UNITYSDK_OFFSET(0x18DA74A0)
#define CLASS_4_13EE8F36399C8CEC__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA7520)

inline static constexpr unsigned int Class_4_13EE8F36399C8CEC_TypeDefinitionIndex = 23175;

class Class_4_13EE8F36399C8CEC : public ::RPG::GameCore::PredicateConfig
{
public:
	::Il2CppArray<::RPG::GameCore::AttackDamageType>* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_13EE8F36399C8CEC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9FB7184D9548FFA8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_13EE8F36399C8CEC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_13EE8F36399C8CEC*&))((::PBYTE)hIl2Cpp + CLASS_4_13EE8F36399C8CEC_METHOD_4_9FB7184D9548FFA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_73F0031E4983E886(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_13EE8F36399C8CEC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_13EE8F36399C8CEC*))((::PBYTE)hIl2Cpp + CLASS_4_13EE8F36399C8CEC_METHOD_4_73F0031E4983E886_OFFSET))(a1, a2);
	}
};
