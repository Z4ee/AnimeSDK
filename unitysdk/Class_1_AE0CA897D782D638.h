#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LightConeRecommendType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AE0CA897D782D638__CTOR_OFFSET UNITYSDK_OFFSET(0x157C38B0)

inline static constexpr unsigned int Class_1_AE0CA897D782D638_TypeDefinitionIndex = 66810;

class Class_1_AE0CA897D782D638 : public ::System::Object
{
public:
	::System::Single MMJGJILMACM; // 0x10
	::RPG::Client::LightConeRecommendType GMPGDEINODK; // 0x14
	::System::UInt32 NJEJLFDJIGD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0CA897D782D638__CTOR_OFFSET))(this);
	}
};
