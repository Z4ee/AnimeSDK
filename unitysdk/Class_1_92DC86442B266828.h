#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_071D0EF220D742B6;
class Class_1_D17272E82AE804C2_6;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_92DC86442B266828_METHOD_1_59ABB5884BFDECC3_OFFSET UNITYSDK_OFFSET(0xA6F27F0)

inline static constexpr unsigned int Class_1_92DC86442B266828_TypeDefinitionIndex = 59079;

class Class_1_92DC86442B266828 : public ::System::Object
{
public:
	static ::RPG::AvatarSystem::IAvatar* Method_1_59ABB5884BFDECC3(::System::UInt32 a1, ::Class_1_D17272E82AE804C2_6* a2, ::Class_1_071D0EF220D742B6* a3)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32, ::Class_1_D17272E82AE804C2_6*, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + CLASS_1_92DC86442B266828_METHOD_1_59ABB5884BFDECC3_OFFSET))(a1, a2, a3);
	}
};
