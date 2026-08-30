#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesPosition; }

#define CLASS_3_2AF1B12A7ABF63EA_METHOD_3_56AA6EAE795B6969_OFFSET UNITYSDK_OFFSET(0x1D5DDDB0)
#define CLASS_3_2AF1B12A7ABF63EA_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x1D5DDDF0)
#define CLASS_3_2AF1B12A7ABF63EA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DDDE0)

inline static constexpr unsigned int Class_3_2AF1B12A7ABF63EA_TypeDefinitionIndex = 24036;

class Class_3_2AF1B12A7ABF63EA : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ChenLingFesPosition* PGJJCGGBCKK; // 0x18
	::System::UInt32 CHMCOKAIMGH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2AF1B12A7ABF63EA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_56AA6EAE795B6969(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2AF1B12A7ABF63EA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2AF1B12A7ABF63EA*&))((::PBYTE)hIl2Cpp + CLASS_3_2AF1B12A7ABF63EA_METHOD_3_56AA6EAE795B6969_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2AF1B12A7ABF63EA* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2AF1B12A7ABF63EA*))((::PBYTE)hIl2Cpp + CLASS_3_2AF1B12A7ABF63EA_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
