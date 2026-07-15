#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_071D0EF220D742B6;
class Class_1_D17272E82AE804C2_7;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_37507B3FB68CB416_METHOD_1_1CBBD0F98A434DA6_OFFSET UNITYSDK_OFFSET(0x15E59AE0)

inline static constexpr unsigned int Class_1_37507B3FB68CB416_TypeDefinitionIndex = 60350;

class Class_1_37507B3FB68CB416 : public ::System::Object
{
public:
	static ::RPG::AvatarSystem::IAvatar* Method_1_1CBBD0F98A434DA6(::System::UInt32 a1, ::Class_1_D17272E82AE804C2_7* a2, ::Class_1_071D0EF220D742B6* a3)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32, ::Class_1_D17272E82AE804C2_7*, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + CLASS_1_37507B3FB68CB416_METHOD_1_1CBBD0F98A434DA6_OFFSET))(a1, a2, a3);
	}
};
