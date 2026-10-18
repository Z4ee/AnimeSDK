#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_545;
class Class_0_16E4307DCC419505_860;
class Class_1_071D0EF220D742B6;
class Class_1_D17272E82AE804C2_15;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_996B24927C35E2D2_METHOD_1_2340CA0D4F297B5A_OFFSET UNITYSDK_OFFSET(0xBF9FB20)
#define CLASS_1_996B24927C35E2D2__CTOR_OFFSET UNITYSDK_OFFSET(0xBF9FA70)

inline static constexpr unsigned int Class_1_996B24927C35E2D2_TypeDefinitionIndex = 62553;

class Class_1_996B24927C35E2D2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_545* CEFLLELKFOP; // 0x10
	::Class_0_16E4307DCC419505_860* FAGBIGDLJGA; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_860* a1, ::Class_0_16E4307DCC419505_545* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_860*, ::Class_0_16E4307DCC419505_545*))((::PBYTE)hIl2Cpp + CLASS_1_996B24927C35E2D2__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::Avatar* Method_1_2340CA0D4F297B5A(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_D17272E82AE804C2_15* a2, ::Class_1_071D0EF220D742B6* a3)
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_D17272E82AE804C2_15*, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + CLASS_1_996B24927C35E2D2_METHOD_1_2340CA0D4F297B5A_OFFSET))(this, a1, a2, a3);
	}
};
