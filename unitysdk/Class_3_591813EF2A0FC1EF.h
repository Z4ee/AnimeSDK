#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_591813EF2A0FC1EF_METHOD_3_18338215AC7BEB04_OFFSET UNITYSDK_OFFSET(0x1D6F98E0)
#define CLASS_3_591813EF2A0FC1EF_METHOD_3_F32CA7BD1D486055_OFFSET UNITYSDK_OFFSET(0x1D6F98A0)
#define CLASS_3_591813EF2A0FC1EF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F98D0)

inline static constexpr unsigned int Class_3_591813EF2A0FC1EF_TypeDefinitionIndex = 19657;

class Class_3_591813EF2A0FC1EF : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* HCDEOKNIGKG; // 0x18
	::System::UInt32 FEHABNJEENK; // 0x20
	::RPG::GameCore::FateRinCardPileType KODIKGGDENE; // 0x24
	::RPG::GameCore::FateRinCardPileType IANCHJFBKFC; // 0x26

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_591813EF2A0FC1EF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F32CA7BD1D486055(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_591813EF2A0FC1EF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_591813EF2A0FC1EF*&))((::PBYTE)hIl2Cpp + CLASS_3_591813EF2A0FC1EF_METHOD_3_F32CA7BD1D486055_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_18338215AC7BEB04(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_591813EF2A0FC1EF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_591813EF2A0FC1EF*))((::PBYTE)hIl2Cpp + CLASS_3_591813EF2A0FC1EF_METHOD_3_18338215AC7BEB04_OFFSET))(a1, a2);
	}
};
