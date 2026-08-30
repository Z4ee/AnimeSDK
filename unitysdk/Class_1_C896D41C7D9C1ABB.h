#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_419;
class Class_1_071D0EF220D742B6;
class Class_1_D17272E82AE804C2_7;
class Class_1_EFF03B82D1C2B1F6;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_C896D41C7D9C1ABB_METHOD_1_2C24C6601F0A7D41_OFFSET UNITYSDK_OFFSET(0xE5CFEC0)
#define CLASS_1_C896D41C7D9C1ABB__CTOR_OFFSET UNITYSDK_OFFSET(0xE5CFE40)

inline static constexpr unsigned int Class_1_C896D41C7D9C1ABB_TypeDefinitionIndex = 62626;

class Class_1_C896D41C7D9C1ABB : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_419* FAGBIGDLJGA; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_419* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_419*))((::PBYTE)hIl2Cpp + CLASS_1_C896D41C7D9C1ABB__CTOR_OFFSET))(this, a1);
	}

	::Class_1_EFF03B82D1C2B1F6* Method_1_2C24C6601F0A7D41(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_D17272E82AE804C2_7* a2, ::Class_1_071D0EF220D742B6* a3)
	{
		return ((::Class_1_EFF03B82D1C2B1F6*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_D17272E82AE804C2_7*, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + CLASS_1_C896D41C7D9C1ABB_METHOD_1_2C24C6601F0A7D41_OFFSET))(this, a1, a2, a3);
	}
};
