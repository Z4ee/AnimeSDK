#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_360;
class Class_1_071D0EF220D742B6;
class Class_1_090AB0EAA610410E;
class Class_1_D17272E82AE804C2_6;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_C896D41C7D9C1ABB_METHOD_1_2C24C6601F0A7D41_OFFSET UNITYSDK_OFFSET(0xCEC4B30)
#define CLASS_1_C896D41C7D9C1ABB__CTOR_OFFSET UNITYSDK_OFFSET(0xCEC4AB0)

inline static constexpr unsigned int Class_1_C896D41C7D9C1ABB_TypeDefinitionIndex = 58509;

class Class_1_C896D41C7D9C1ABB : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_360* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_360* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_360*))((::PBYTE)hIl2Cpp + CLASS_1_C896D41C7D9C1ABB__CTOR_OFFSET))(this, a1);
	}

	::Class_1_090AB0EAA610410E* Method_1_2C24C6601F0A7D41(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_D17272E82AE804C2_6* a2, ::Class_1_071D0EF220D742B6* a3)
	{
		return ((::Class_1_090AB0EAA610410E*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_D17272E82AE804C2_6*, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + CLASS_1_C896D41C7D9C1ABB_METHOD_1_2C24C6601F0A7D41_OFFSET))(this, a1, a2, a3);
	}
};
