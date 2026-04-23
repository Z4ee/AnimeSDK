#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LightConeRecommendType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AE0CA897D782D638__CTOR_OFFSET UNITYSDK_OFFSET(0x97284A0)

inline static constexpr unsigned int Class_1_AE0CA897D782D638_TypeDefinitionIndex = 61518;

class Class_1_AE0CA897D782D638 : public ::System::Object
{
public:
	::RPG::Client::LightConeRecommendType Field_1_2; // 0x10
	::System::Single Field_1_1; // 0x14
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE0CA897D782D638__CTOR_OFFSET))(this);
	}
};
